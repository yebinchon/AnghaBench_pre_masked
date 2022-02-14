
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;
typedef int uint32_t ;


 scalar_t__ FUNC_0 (char) ;
 int FUNC_1 (char*,size_t,char*,char) ;

char *FUNC_2(char *VAR_0, size_t VAR_1, uint32_t VAR_2)
{
    if (VAR_1 < 1)
        return VAR_0;
    VAR_0[0] = '\0';
    for (int VAR_3 = 0; VAR_3 < 4; VAR_3++) {
        uint8_t VAR_4 = (VAR_2 >> (VAR_3 * 8)) & 0xFF;
        if (FUNC_0(VAR_4) || VAR_4 == '_' || VAR_4 == ' ') {
            FUNC_1(VAR_0, VAR_1, "%c", VAR_4);
        } else {
            FUNC_1(VAR_0, VAR_1, "[%d]", VAR_4);
        }
    }
    return VAR_0;
}
