
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32_t ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (char) ;
 scalar_t__ FUNC_2 (char) ;
 scalar_t__ FUNC_3 (char) ;

__attribute__((used)) static int32_t FUNC_4(const char *VAR_0)
{
    int VAR_1;
    int32_t VAR_2 = 0;

    FUNC_0(VAR_0[0] == 'u');

    for(VAR_1 = 1; VAR_1 <= 4; VAR_1++) {
        char VAR_3 = VAR_0[VAR_1];
        VAR_2 <<= 4;
        if(FUNC_1(VAR_3))
            VAR_2 += VAR_3 - '0';
        else if(FUNC_2(VAR_3))
            VAR_2 += VAR_3 - 'a' + 10;
        else if(FUNC_3(VAR_3))
            VAR_2 += VAR_3 - 'A' + 10;
        else
            return -1;
    }

    return VAR_2;
}
