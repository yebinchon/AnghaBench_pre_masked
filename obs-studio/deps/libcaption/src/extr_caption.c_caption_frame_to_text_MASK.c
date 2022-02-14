
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char utf8_char_t ;
typedef int eia608_style_t ;
typedef int caption_frame_t ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int *,int,int,int *,int*) ;
 int FUNC_1 (char*,char*,int) ;
 size_t FUNC_2 (char*,char const*) ;
 scalar_t__ FUNC_3 (char const*) ;
 int FUNC_4 (char const*) ;

size_t FUNC_5(caption_frame_t* VAR_2, utf8_char_t* VAR_3)
{
    int VAR_4, VAR_5, VAR_6, VAR_7 = 0, VAR_8 = 0;
    size_t VAR_9, VAR_10 = 0;
    eia608_style_t VAR_11;
    (*VAR_3) = '\0';

    for (VAR_4 = 0; VAR_4 < VAR_1; ++VAR_4) {
        VAR_7 += VAR_8, VAR_8 = 0;
        for (VAR_5 = 0; VAR_5 < VAR_0; ++VAR_5) {
            const utf8_char_t* VAR_12 = FUNC_0(VAR_2, VAR_4, VAR_5, &VAR_11, &VAR_6);

            if (0 < FUNC_3(VAR_12) && (0 < VAR_8 || !FUNC_4(VAR_12))) {
                if (0 < VAR_7) {
                    FUNC_1(VAR_3, "\r\n\0", 3);
                    VAR_3 += 2, VAR_10 += 2, VAR_7 = 0;
                }

                VAR_9 = FUNC_2(VAR_3, VAR_12);
                VAR_3 += VAR_9, VAR_10 += VAR_9, ++VAR_8;
            }
        }
    }

    return VAR_10;
}
