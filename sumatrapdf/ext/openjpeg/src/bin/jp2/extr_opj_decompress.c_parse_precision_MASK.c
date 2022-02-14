
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {unsigned int prec; int mode; } ;
typedef TYPE_1__ opj_precision ;
struct TYPE_7__ {unsigned int nb_precision; TYPE_1__* precision; } ;
typedef TYPE_2__ opj_decompress_parameters ;
typedef unsigned int OPJ_UINT32 ;
typedef int OPJ_BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (TYPE_1__*,unsigned int) ;
 int FUNC_4 (char const*,char*,int*,char*,char*) ;
 int VAR_4 ;
 char* FUNC_5 (char const*,char) ;

__attribute__((used)) static OPJ_BOOL FUNC_6(const char* VAR_5,
                                opj_decompress_parameters* VAR_6)
{
    const char* VAR_7 = VAR_5;
    OPJ_BOOL VAR_8 = VAR_3;


    if (VAR_6->precision) {
        FUNC_1(VAR_6->precision);
        VAR_6->precision = ((void*)0);
    }
    VAR_6->nb_precision = 0U;

    for (;;) {
        int VAR_9;
        char VAR_10;
        char VAR_11;
        int VAR_12;

        VAR_12 = FUNC_4(VAR_7, "%d%c%c", &VAR_9, &VAR_10, &VAR_11);
        if (VAR_12 == 1) {
            VAR_10 = 'C';
            VAR_12++;
        }
        if ((VAR_12 == 2) || (VAR_10 == ',')) {
            if (VAR_10 == ',') {
                VAR_10 = 'C';
            }
            VAR_11 = ',';
            VAR_12 = 3;
        }
        if (VAR_12 == 3) {
            if ((VAR_9 < 1) || (VAR_9 > 32)) {
                FUNC_0(VAR_4, "Invalid precision %d in precision option %s\n", VAR_9, VAR_5);
                VAR_8 = VAR_0;
                break;
            }
            if ((VAR_10 != 'C') && (VAR_10 != 'S')) {
                FUNC_0(VAR_4, "Invalid precision mode %c in precision option %s\n", VAR_10,
                        VAR_5);
                VAR_8 = VAR_0;
                break;
            }
            if (VAR_11 != ',') {
                FUNC_0(VAR_4, "Invalid character %c in precision option %s\n", VAR_11, VAR_5);
                VAR_8 = VAR_0;
                break;
            }

            if (VAR_6->precision == ((void*)0)) {

                VAR_6->precision = (opj_precision *)FUNC_2(sizeof(opj_precision));
                if (VAR_6->precision == ((void*)0)) {
                    FUNC_0(VAR_4, "Could not allocate memory for precision option\n");
                    VAR_8 = VAR_0;
                    break;
                }
            } else {
                OPJ_UINT32 VAR_13 = VAR_6->nb_precision + 1U;
                opj_precision* VAR_14;

                if (VAR_13 == 0U) {
                    FUNC_0(VAR_4, "Could not allocate memory for precision option\n");
                    VAR_8 = VAR_0;
                    break;
                }

                VAR_14 = (opj_precision *)FUNC_3(VAR_6->precision,
                                                 VAR_13 * sizeof(opj_precision));
                if (VAR_14 == ((void*)0)) {
                    FUNC_0(VAR_4, "Could not allocate memory for precision option\n");
                    VAR_8 = VAR_0;
                    break;
                }
                VAR_6->precision = VAR_14;
            }

            VAR_6->precision[VAR_6->nb_precision].prec = (OPJ_UINT32)VAR_9;
            switch (VAR_10) {
            case 'C':
                VAR_6->precision[VAR_6->nb_precision].mode = VAR_1;
                break;
            case 'S':
                VAR_6->precision[VAR_6->nb_precision].mode = VAR_2;
                break;
            default:
                break;
            }
            VAR_6->nb_precision++;

            VAR_7 = FUNC_5(VAR_7, ',');
            if (VAR_7 == ((void*)0)) {
                break;
            }
            VAR_7 += 1;
        } else {
            FUNC_0(VAR_4, "Could not parse precision option %s\n", VAR_5);
            VAR_8 = VAR_0;
            break;
        }
    }

    return VAR_8;
}
