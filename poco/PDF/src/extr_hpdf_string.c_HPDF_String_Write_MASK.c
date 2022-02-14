
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ len; int * encoder; scalar_t__* value; } ;
typedef int HPDF_UNICODE ;
typedef scalar_t__ HPDF_UINT16 ;
typedef size_t HPDF_UINT ;
typedef TYPE_1__* HPDF_String ;
typedef int HPDF_Stream ;
typedef int HPDF_STATUS ;
typedef int HPDF_ParseText_Rec ;
typedef scalar_t__ HPDF_INT32 ;
typedef scalar_t__ HPDF_Encrypt ;
typedef scalar_t__ HPDF_ByteType ;
typedef scalar_t__ HPDF_BYTE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *,scalar_t__*,scalar_t__) ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__*,scalar_t__*,int) ;
 int VAR_2 ;
 int FUNC_5 (char*) ;
 size_t FUNC_6 (char*,int) ;
 int FUNC_7 (int ,scalar_t__*,size_t,scalar_t__) ;
 int FUNC_8 (int ,char) ;
 int FUNC_9 (int ,char*) ;
 int VAR_3 ;
 int FUNC_10 (int *) ;
 scalar_t__* VAR_4 ;

HPDF_STATUS
FUNC_11 (HPDF_String VAR_5,
                    HPDF_Stream VAR_6,
                    HPDF_Encrypt VAR_7)
{
    HPDF_STATUS VAR_8;






    FUNC_5((" HPDF_String_Write\n"));

    if (VAR_7)
        FUNC_3 (VAR_7);

    if (VAR_5->encoder == ((void*)0)) {
        if (VAR_7) {
            if ((VAR_8 = FUNC_8 (VAR_6, '<')) != VAR_2)
                return VAR_8;

            if ((VAR_8 = FUNC_7 (VAR_6, VAR_5->value,
                    FUNC_6 ((char *)VAR_5->value, -1), VAR_7)) != VAR_2)
                return VAR_8;

            return FUNC_8 (VAR_6, '>');
        } else {
            return FUNC_9 (VAR_6, (char *)VAR_5->value);
        }
    } else {
        HPDF_BYTE* VAR_9 = VAR_5->value;
        HPDF_BYTE VAR_10[VAR_3 * 2];
        HPDF_UINT VAR_11 = 0;
        HPDF_BYTE* VAR_12 = VAR_10;
        HPDF_INT32 VAR_13 = VAR_5->len;
        HPDF_ParseText_Rec VAR_14;
        HPDF_UINT VAR_15;

        if ((VAR_8 = FUNC_8 (VAR_6, '<')) != VAR_2)
           return VAR_8;

        if ((VAR_8 = FUNC_7 (VAR_6, VAR_4, 2, VAR_7))
                        != VAR_2)
            return VAR_8;

        FUNC_1 (VAR_5->encoder, &VAR_14, VAR_9, VAR_13);

        for (VAR_15 = 0; (HPDF_INT32)VAR_15 < VAR_13; VAR_15++) {
            HPDF_BYTE VAR_16 = VAR_9[VAR_15];
            HPDF_UNICODE VAR_17;
            HPDF_ByteType VAR_18 = FUNC_0 (VAR_5->encoder,
                    &VAR_14);

            if (VAR_11 >= VAR_3 - 1) {
                if ((VAR_8 = FUNC_7 (VAR_6, VAR_10,
                            VAR_11 * 2, VAR_7)) != VAR_2)
                    return VAR_8;

                VAR_11 = 0;
                VAR_12 = VAR_10;
            }

            if (VAR_18 != VAR_1) {
                if (VAR_18 == VAR_0) {
                    HPDF_BYTE VAR_19 = VAR_9[VAR_15 + 1];
                    HPDF_UINT16 VAR_20 = (HPDF_UINT16)((HPDF_UINT) VAR_16 * 256 + VAR_19);

                    VAR_17 = FUNC_2 (VAR_5->encoder,
                                VAR_20);
                } else {
                    VAR_17 = FUNC_2 (VAR_5->encoder, VAR_16);
                }

                FUNC_10 (&VAR_17);
                FUNC_4 (VAR_12, (HPDF_BYTE*)&VAR_17, 2);
                VAR_12 += 2;
                VAR_11++;
            }
        }

        if (VAR_11 > 0) {
            if ((VAR_8 = FUNC_7 (VAR_6, VAR_10, VAR_11 * 2, VAR_7))
                            != VAR_2)
                return VAR_8;
        }

        if ((VAR_8 = FUNC_8 (VAR_6, '>')) != VAR_2)
            return VAR_8;
    }

    return VAR_2;
}
