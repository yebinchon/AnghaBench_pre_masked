
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 void** VAR_0 ;
 scalar_t__ FUNC_0 (char const*,char) ;
 int FUNC_1 (char const*) ;
 char* FUNC_2 (void*,int) ;
 char const* VAR_1 ;

char *FUNC_3(void *VAR_2, const char *VAR_3, const char *VAR_4)
{
    char *VAR_5 = FUNC_2(VAR_2, FUNC_1(VAR_3) * 3 + 1);
    char *VAR_6 = VAR_5;
    bool VAR_7 = VAR_4 && VAR_4[0] == '~';

    for (char VAR_8; (VAR_8 = *VAR_3); VAR_3++) {
        bool VAR_9 = VAR_7 ? !FUNC_0(VAR_4 + 1, VAR_8)
                            : (FUNC_0(VAR_1, VAR_8) || (VAR_4 && FUNC_0(VAR_4, VAR_8)));
        if (VAR_9) {
            *VAR_6++ = VAR_8;
        } else {
            unsigned char VAR_10 = VAR_8;
            *VAR_6++ = '%';
            *VAR_6++ = VAR_0[VAR_10 / 16];
            *VAR_6++ = VAR_0[VAR_10 % 16];
        }
    }

    *VAR_6 = 0;
    return VAR_5;
}
