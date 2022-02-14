
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_chmap_sel {int* speakers; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;

void FUNC_1(struct mp_chmap_sel *VAR_1, int VAR_2)
{
    FUNC_0(VAR_2 >= 0 && VAR_2 < VAR_0);
    VAR_1->speakers[VAR_2] = 1;
}
