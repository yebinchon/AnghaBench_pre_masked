
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int tmp2 ;


 int FUNC_0 (char*,char*,int) ;

__attribute__((used)) static char* FUNC_1(uint64_t VAR_0, char* VAR_1) {
    char *VAR_2, VAR_3[20];

    if (VAR_0 == 0) {
        VAR_1[0] = '0';
        return VAR_1 + 1;
    }

    VAR_2 = &VAR_3[20];
    while (VAR_0 > 0) {
        VAR_2--;
        *VAR_2 = (VAR_0 % 10) + '0';
        VAR_0 /= 10;
    }

    FUNC_0(VAR_1, VAR_2, VAR_3 + sizeof(VAR_3) - VAR_2);

    return &VAR_1[VAR_3 + sizeof(VAR_3) - VAR_2];
}
