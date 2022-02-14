
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ has_differences; size_t first_char; size_t last_char; int* differences; int * unicode_map; int base_encoding; } ;
struct TYPE_4__ {int attr; } ;
typedef int HPDF_Stream ;
typedef scalar_t__ HPDF_STATUS ;
typedef size_t HPDF_INT ;
typedef TYPE_1__* HPDF_Encoder ;
typedef TYPE_2__* HPDF_BasicEncoderAttr ;


 int VAR_0 ;
 char* FUNC_0 (char*,size_t,char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (char*,char const*,char*) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int ,char*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 char* FUNC_6 (int ) ;

HPDF_STATUS
FUNC_7 (HPDF_Encoder VAR_4,
                          HPDF_Stream VAR_5)
{
    HPDF_STATUS VAR_6;
    HPDF_BasicEncoderAttr VAR_7 = (HPDF_BasicEncoderAttr)VAR_4->attr;

    FUNC_1 ((" HPDF_BasicEncoder_Write\n"));




    if (FUNC_2 (VAR_7->base_encoding, VAR_0) == 0)
        return VAR_1;



    if (VAR_7->has_differences == VAR_3) {
        VAR_6 = FUNC_5 (VAR_5,
                "/Encoding <<\012"
                "/Type /Encoding\012"
                "/BaseEncoding ");
        if (VAR_6 != VAR_1)
            return VAR_6;
    } else {
        VAR_6 = FUNC_5 (VAR_5, "/Encoding ");
        if (VAR_6 != VAR_1)
            return VAR_6;
    }

    VAR_6 = FUNC_4 (VAR_5, VAR_7->base_encoding);
    if (VAR_6 != VAR_1)
        return VAR_6;

    VAR_6 = FUNC_5 (VAR_5, "\012");
    if (VAR_6 != VAR_1)
        return VAR_6;


    if (VAR_7->has_differences == VAR_3) {
        HPDF_INT VAR_8;

        VAR_6 = FUNC_5 (VAR_5, "/Differences [");
        if (VAR_6 != VAR_1)
            return VAR_6;

        for (VAR_8 = VAR_7->first_char; VAR_8 <= VAR_7->last_char; VAR_8++) {
            if (VAR_7->differences[VAR_8] == 1) {
                char VAR_9[VAR_2];
                char* VAR_10 = VAR_9;
                const char* VAR_11 =
                    FUNC_6 (VAR_7->unicode_map[VAR_8]);

                VAR_10 = FUNC_0 (VAR_10, VAR_8, VAR_9 + VAR_2 - 1);
                *VAR_10++ = ' ';
                *VAR_10++ = '/';
                VAR_10 = (char *)FUNC_3 (VAR_10, VAR_11, VAR_9 +
                        VAR_2 - 1);
                *VAR_10++ = ' ';
                *VAR_10 = 0;

                VAR_6 = FUNC_5 (VAR_5, VAR_9);
                if (VAR_6 != VAR_1)
                    return VAR_6;
            }
        }

        VAR_6 = FUNC_5 (VAR_5, "]\012>>\012");
    }

    return VAR_6;
}
