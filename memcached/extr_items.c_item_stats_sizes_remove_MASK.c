
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int item ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int * VAR_2 ;

void FUNC_2(item *VAR_3) {
    if (VAR_2 == ((void*)0) || VAR_1 > FUNC_0(VAR_3))
        return;
    int VAR_4 = FUNC_1(VAR_3);
    int VAR_5 = VAR_4 / 32;
    if ((VAR_4 % 32) != 0) VAR_5++;
    if (VAR_5 < VAR_0) VAR_2[VAR_5]--;
}
