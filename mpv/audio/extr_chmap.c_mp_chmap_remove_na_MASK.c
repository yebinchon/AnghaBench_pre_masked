
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_chmap {int num; int* speaker; int member_0; } ;


 int VAR_0 ;

void FUNC_0(struct mp_chmap *VAR_1)
{
    struct mp_chmap VAR_2 = {0};
    for (int VAR_3 = 0; VAR_3 < VAR_1->num; VAR_3++) {
        int VAR_4 = VAR_1->speaker[VAR_3];
        if (VAR_4 != VAR_0)
            VAR_2.speaker[VAR_2.num++] = VAR_1->speaker[VAR_3];
    }
    *VAR_1 = VAR_2;
}
