
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef float int16_t ;


 float FUNC_0 (char*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (float) ;

__attribute__((used)) static void FUNC_3(char *VAR_0, int VAR_1)
{

    for (int VAR_2 = VAR_1 - 1; VAR_2 >= 0; VAR_2--) {
        int16_t VAR_3 = FUNC_0(VAR_0 + VAR_2 * 2);
        float VAR_4 = VAR_3 / (float)(1 << 15);
        uint32_t VAR_5 = FUNC_2(VAR_4);
        FUNC_1(VAR_0 + VAR_2 * 4, VAR_5);
    }
}
