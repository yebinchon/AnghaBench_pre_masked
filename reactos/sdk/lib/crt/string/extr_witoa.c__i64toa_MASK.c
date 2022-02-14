
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long __int64 ;
typedef long ULONGLONG ;


 int FUNC_0 (char*,char*,int) ;

char* FUNC_1(__int64 VAR_0, char* VAR_1, int VAR_2)
{
    ULONGLONG VAR_3;
    int VAR_4;
    char VAR_5[65];
    char *VAR_6;
    int VAR_7;

    if (VAR_0 < 0 && VAR_2 == 10) {
 VAR_4 = 1;
        VAR_3 = -VAR_0;
    } else {
 VAR_4 = 0;
        VAR_3 = VAR_0;
    }

    VAR_6 = &VAR_5[64];
    *VAR_6 = '\0';

    do {
 VAR_7 = VAR_3 % VAR_2;
 VAR_3 = VAR_3 / VAR_2;
 if (VAR_7 < 10) {
     *--VAR_6 = '0' + VAR_7;
 } else {
     *--VAR_6 = 'a' + VAR_7 - 10;
 }
    } while (VAR_3 != 0L);

    if (VAR_4) {
 *--VAR_6 = '-';
    }

    FUNC_0(VAR_1, VAR_6, &VAR_5[64] - VAR_6 + 1);
    return VAR_1;
}
