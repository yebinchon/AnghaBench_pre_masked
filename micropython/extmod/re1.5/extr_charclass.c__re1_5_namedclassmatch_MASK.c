
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
int FUNC_0(const char *VAR_0, const char *VAR_1)
{

    int VAR_2 = (*VAR_0 >> 5) & 1;
    if ((*VAR_0 | 0x20) == 'd') {
        if (!(*VAR_1 >= '0' && *VAR_1 <= '9')) {
            VAR_2 ^= 1;
        }
    } else if ((*VAR_0 | 0x20) == 's') {
        if (!(*VAR_1 == ' ' || (*VAR_1 >= '\t' && *VAR_1 <= '\r'))) {
            VAR_2 ^= 1;
        }
    } else {
        if (!((*VAR_1 >= 'A' && *VAR_1 <= 'Z') || (*VAR_1 >= 'a' && *VAR_1 <= 'z') || (*VAR_1 >= '0' && *VAR_1 <= '9') || *VAR_1 == '_')) {
            VAR_2 ^= 1;
        }
    }
    return VAR_2;
}
