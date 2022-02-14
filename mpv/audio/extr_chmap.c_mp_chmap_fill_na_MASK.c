
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_chmap {int num; int * speaker; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;

void FUNC_1(struct mp_chmap *VAR_2, int VAR_3)
{
    FUNC_0(VAR_3 <= VAR_0);
    while (VAR_2->num < VAR_3)
        VAR_2->speaker[VAR_2->num++] = VAR_1;
}
