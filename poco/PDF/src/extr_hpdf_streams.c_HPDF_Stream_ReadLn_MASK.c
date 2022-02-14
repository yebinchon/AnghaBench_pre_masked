
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int error; int read_fn; int seek_fn; } ;
typedef scalar_t__ HPDF_UINT ;
typedef TYPE_1__* HPDF_Stream ;
typedef scalar_t__ HPDF_STATUS ;
typedef int HPDF_BYTE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_1 (int ,scalar_t__,int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int *,scalar_t__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*,scalar_t__,int ) ;

HPDF_STATUS
FUNC_4 (HPDF_Stream VAR_7,
                     char *VAR_8,
                     HPDF_UINT *VAR_9)
{
    char VAR_10[VAR_4];
    HPDF_UINT VAR_11 = *VAR_9;
    HPDF_UINT VAR_12 = VAR_4;

    FUNC_0((" HPDF_Stream_ReadLn\n"));

    if (!VAR_7)
        return VAR_1;

    if (!VAR_8 || *VAR_9 == 0)
        return FUNC_1 (VAR_7->error, VAR_1, 0);

    if (!(VAR_7->seek_fn) || !(VAR_7->read_fn))
        return FUNC_1 (VAR_7->error, VAR_0, 0);

    if (VAR_11 < VAR_4)
        VAR_12 = VAR_11;

    *VAR_9 = 0;

    while (VAR_11 > 1) {
        char *VAR_13 = VAR_10;
        HPDF_STATUS VAR_14 = FUNC_2 (VAR_7, (HPDF_BYTE *)VAR_10, &VAR_12);

        if (VAR_14 != VAR_2 && VAR_12 == 0)
            return VAR_14;

        VAR_11 -= VAR_12;

        while (VAR_12 > 0) {
            if (*VAR_13 == 0x0A || *VAR_13 == 0x0D) {
                *VAR_8 = 0;
                VAR_12--;


                if (*VAR_13 == 0x0D || VAR_12 > 1) {
                    VAR_13++;

                    if (*VAR_13 == 0x0A)
                        VAR_12--;
                }

                if (VAR_12 > 0)
                    return FUNC_3 (VAR_7, 0 - VAR_12,
                                VAR_3);
                else
                    return VAR_2;
            }

            *VAR_8++ = *VAR_13++;
            VAR_12--;
            (*VAR_9)++;
        }

        if (VAR_11 < VAR_4)
            VAR_12 = VAR_11;
        else
            VAR_12 = VAR_4;

        if (VAR_14 == VAR_5)
            return VAR_5;
    }

    *VAR_8 = 0;

    return VAR_6;
}
