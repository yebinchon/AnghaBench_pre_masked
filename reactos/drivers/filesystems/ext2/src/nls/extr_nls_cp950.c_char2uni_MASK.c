
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;


 int VAR_0 ;
 int VAR_1 ;
 int** VAR_2 ;

__attribute__((used)) static int FUNC_0(const unsigned char *VAR_3, int VAR_4,
                    wchar_t *VAR_5)
{
    unsigned char VAR_6, VAR_7;
    wchar_t *VAR_8;
    int VAR_9;

    if (VAR_4 <= 0)
        return -VAR_1;

    if (VAR_4 == 1) {
        *VAR_5 = VAR_3[0];
        return 1;
    }

    VAR_6 = VAR_3[0];
    VAR_7 = VAR_3[1];

    VAR_8 = VAR_2[VAR_6];
    if (VAR_8 && VAR_7) {
        *VAR_5 = VAR_8[VAR_7];
        if (*VAR_5 == 0x0000)
            return -VAR_0;
        VAR_9 = 2;
    } else {
        *VAR_5 = VAR_6;
        VAR_9 = 1;
    }
    return VAR_9;
}
