
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ utf8_char_t ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*,char*) ;
 size_t FUNC_2 (scalar_t__*,int,size_t,int *) ;
 int FUNC_3 (int *,int ,int ) ;
 size_t FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (scalar_t__*,char,size_t) ;

utf8_char_t* FUNC_7(const char* VAR_2, size_t* VAR_3)
{
    utf8_char_t* VAR_4 = ((void*)0);
    FILE* VAR_5 = FUNC_1(VAR_2, "r");

    if (VAR_5) {
        FUNC_3(VAR_5, 0, VAR_0);
        size_t VAR_6 = FUNC_4(VAR_5);
        FUNC_3(VAR_5, 0, VAR_1);

        if (0 == (*VAR_3) || VAR_6 <= (*VAR_3)) {
            (*VAR_3) = 0;
            VAR_4 = (utf8_char_t*)FUNC_5(1 + VAR_6);
            FUNC_6(VAR_4, '\0', VAR_6);

            if (VAR_4) {
                utf8_char_t* VAR_7 = VAR_4;
                size_t VAR_8 = 0;

                while (0 < (VAR_8 = FUNC_2(VAR_7, 1, VAR_6 - (*VAR_3), VAR_5))) {
                    VAR_7 += VAR_8;
                    (*VAR_3) += VAR_8;
                }
            }

            FUNC_0(VAR_5);
        }
    }

    VAR_4[*VAR_3] = 0;
    return VAR_4;
}
