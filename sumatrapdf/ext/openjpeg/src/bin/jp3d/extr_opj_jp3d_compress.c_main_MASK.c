
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;


struct TYPE_25__ {int x1; int x0; int y1; int y0; int z1; int z0; TYPE_1__* comps; } ;
typedef TYPE_2__ opj_volume_t ;
struct TYPE_26__ {int info_handler; int warning_handler; int error_handler; } ;
typedef TYPE_3__ opj_event_mgr_t ;
struct TYPE_27__ {char* cp_comment; scalar_t__ cod_format; int decod_format; char* outfile; char* cp_matrice; int index; int infile; int imgfile; } ;
typedef TYPE_4__ opj_cparameters_t ;
typedef int opj_common_ptr ;
struct TYPE_28__ {int buffer; } ;
typedef TYPE_5__ opj_cio_t ;
typedef int opj_cinfo_t ;
struct TYPE_24__ {int prec; } ;
typedef int FILE ;



 int VAR_0 ;
 int VAR_1 ;

 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

 TYPE_2__* FUNC_0 (int ,int ,TYPE_4__*) ;
 int FUNC_1 (TYPE_5__*) ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char*,char*) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ,int,int,int *) ;
 TYPE_2__* FUNC_7 (int ,TYPE_4__*) ;
 int VAR_5 ;
 int FUNC_8 (TYPE_3__*,int ,int) ;
 int FUNC_9 (TYPE_5__*) ;
 TYPE_5__* FUNC_10 (int ,int *,int ) ;
 int * FUNC_11 (int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,TYPE_5__*,TYPE_2__*,int ) ;
 int FUNC_14 (TYPE_4__*) ;
 int FUNC_15 (int ,TYPE_3__*,int ) ;
 int FUNC_16 (int *,TYPE_4__*,TYPE_2__*) ;
 int FUNC_17 (TYPE_2__*) ;
 int FUNC_18 (int,char**,TYPE_4__*) ;
 TYPE_2__* FUNC_19 (int ,TYPE_4__*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

int FUNC_20(int VAR_9, char **VAR_10)
{
    bool VAR_11;
    bool VAR_12 = 1;
    opj_cparameters_t VAR_13;
    opj_event_mgr_t VAR_14;
    opj_volume_t *VAR_15 = ((void*)0);





    FUNC_8(&VAR_14, 0, sizeof(opj_event_mgr_t));
    VAR_14.error_handler = VAR_4;
    VAR_14.warning_handler = VAR_8;
    VAR_14.info_handler = VAR_5;


    FUNC_14(&VAR_13);


    if (FUNC_18(VAR_9, VAR_10, &VAR_13) == 1) {
        return 0;
    }

    if (VAR_13.cp_comment == ((void*)0)) {
        VAR_13.cp_comment = "Created by OpenJPEG version JP3D";

        VAR_12 = 0;
    }



    if (VAR_13.cod_format == VAR_3 || VAR_13.cod_format == VAR_2) {
        int VAR_16, VAR_17, VAR_18;
        opj_cio_t *VAR_19 = ((void*)0);
        FILE *VAR_20 = ((void*)0);
        opj_cinfo_t* VAR_21 = ((void*)0);



        switch (VAR_13.decod_format) {
        case 128:
            FUNC_4(VAR_7, "[INFO] Loading pgx file(s)\n");
            VAR_15 = FUNC_19(VAR_13.infile, &VAR_13);
            if (!VAR_15) {
                FUNC_4(VAR_7, "[ERROR] Unable to load pgx files\n");
                return 1;
            }
            break;

        case 130:
            FUNC_4(VAR_7, "[INFO] Loading bin file\n");
            VAR_15 = FUNC_0(VAR_13.infile, VAR_13.imgfile, &VAR_13);
            if (!VAR_15) {
                FUNC_4(VAR_7, "[ERROR] Unable to load bin file\n");
                return 1;
            }
            break;

        case 129:
            FUNC_4(VAR_7, "[INFO] Loading img file\n");
            VAR_15 = FUNC_7(VAR_13.infile, &VAR_13);
            if (!VAR_15) {
                FUNC_4(VAR_6, "[ERROR] Unable to load img file\n");
                return 1;
            }
            break;
        }


        if (VAR_13.cod_format == VAR_3) {
            VAR_21 = FUNC_11(VAR_1);
        } else if (VAR_13.cod_format == VAR_2) {
            VAR_21 = FUNC_11(VAR_0);
        }


        FUNC_15((opj_common_ptr)VAR_21, &VAR_14, VAR_7);


        FUNC_16(VAR_21, &VAR_13, VAR_15);



        VAR_19 = FUNC_10((opj_common_ptr)VAR_21, ((void*)0), 0);



        VAR_11 = FUNC_13(VAR_21, VAR_19, VAR_15, VAR_13.index);
        if (!VAR_11) {
            FUNC_9(VAR_19);
            FUNC_4(VAR_7, "[ERROR] Failed to encode volume\n");
            return 1;
        }
        VAR_16 = FUNC_1(VAR_19);
        VAR_17 = (VAR_15->x1 - VAR_15->x0) * (VAR_15->y1 - VAR_15->y0) *
                 (VAR_15->z1 - VAR_15->z0);
        VAR_18 = VAR_17 * VAR_15->comps[0].prec;
        FUNC_4(VAR_7,
                "[RESULT] Volume: %d x %d x %d (x %d bpv)\n Codestream: %d B,  Ratio: %5.3f bpv,  (%5.3f : 1) \n",
                (VAR_15->x1 - VAR_15->x0), (VAR_15->y1 - VAR_15->y0), (VAR_15->z1 - VAR_15->z0),
                VAR_15->comps[0].prec,
                VAR_16, ((double)VAR_16 * 8.0 / (double)VAR_17),
                ((double)VAR_18 / (8.0 * (double)VAR_16)));


        VAR_20 = FUNC_3(VAR_13.outfile, "wb");
        if (!VAR_20) {
            FUNC_4(VAR_7, "[ERROR] Failed to open %s for writing\n", VAR_13.outfile);
            return 1;
        }
        FUNC_6(VAR_19->buffer, 1, VAR_16, VAR_20);
        FUNC_2(VAR_20);


        FUNC_9(VAR_19);


        FUNC_12(VAR_21);
    } else {
        FUNC_4(VAR_7, "[ERROR] Cod_format != JP3d !!! \n");
        return 1;
    }


    if (VAR_12) {
        if (VAR_13.cp_comment) {
            FUNC_5(VAR_13.cp_comment);
        }
    }
    if (VAR_13.cp_matrice) {
        FUNC_5(VAR_13.cp_matrice);
    }


    FUNC_17(VAR_15);

    return 0;
}
