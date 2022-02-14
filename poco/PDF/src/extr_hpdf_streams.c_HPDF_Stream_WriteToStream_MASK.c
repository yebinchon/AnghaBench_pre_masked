
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int error; int write_fn; } ;
typedef int HPDF_UINT ;
typedef TYPE_1__* HPDF_Stream ;
typedef scalar_t__ HPDF_STATUS ;
typedef scalar_t__ HPDF_Encrypt ;
typedef int HPDF_BYTE ;
typedef scalar_t__ HPDF_BOOL ;


 int FUNC_0 (scalar_t__,int *,int *,int) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (char*) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int ,scalar_t__,int ) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int *,int*) ;
 scalar_t__ FUNC_5 (TYPE_1__*,int ,int ) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 (TYPE_1__*,int *,int) ;
 scalar_t__ FUNC_8 (TYPE_1__*,TYPE_1__*,scalar_t__) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_9 (int) ;

HPDF_STATUS
FUNC_10 (HPDF_Stream VAR_10,
                            HPDF_Stream VAR_11,
                            HPDF_UINT VAR_12,
                            HPDF_Encrypt VAR_13)
{
    HPDF_STATUS VAR_14;
    HPDF_BYTE VAR_15[VAR_5];
    HPDF_BYTE VAR_16[VAR_5];
    HPDF_BOOL VAR_17;

    FUNC_2((" HPDF_Stream_WriteToStream\n"));
    FUNC_9 (VAR_12);

    if (!VAR_11 || !(VAR_11->write_fn)) {
        FUNC_3 (VAR_10->error, VAR_1, 0);
        return VAR_1;
    }

    if (FUNC_1 (VAR_10->error) != VAR_2 ||
            FUNC_1 (VAR_11->error) != VAR_2)
        return VAR_8;


    if (FUNC_6 (VAR_10) == 0)
        return VAR_3;


    if (VAR_12 & VAR_7)
        return FUNC_8 (VAR_10, VAR_11, VAR_13);


    VAR_14 = FUNC_5 (VAR_10, 0, VAR_4);
    if (VAR_14 != VAR_3)
        return VAR_14;

    VAR_17 = VAR_0;
    for (;;) {
        HPDF_UINT VAR_18 = VAR_5;

        VAR_14 = FUNC_4 (VAR_10, VAR_15, &VAR_18);

        if (VAR_14 != VAR_3) {
            if (VAR_14 == VAR_6) {
                VAR_17 = VAR_9;
                if (VAR_18 == 0)
                    break;
            } else {
                return VAR_14;
            }
        }

        if (VAR_13) {
            FUNC_0 (VAR_13, VAR_15, VAR_16, VAR_18);
            VAR_14 = FUNC_7(VAR_11, VAR_16, VAR_18);
        } else {
            VAR_14 = FUNC_7(VAR_11, VAR_15, VAR_18);
        }

        if (VAR_14 != VAR_3)
            return VAR_14;

        if (VAR_17)
            break;
    }

    return VAR_3;
}
