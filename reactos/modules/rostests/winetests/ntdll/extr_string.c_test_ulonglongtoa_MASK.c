
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int mask; } ;


 int VAR_0 ;
 int FUNC_0 (int,TYPE_1__*) ;
 int FUNC_1 (int,TYPE_1__*) ;
 int * VAR_1 ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static void FUNC_2(void)
{
    int VAR_3;

    for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
 if (VAR_2[VAR_3].mask & 0x01) {
     FUNC_0(VAR_3, &VAR_2[VAR_3]);
 }
        if (VAR_1 != ((void*)0)) {
     if (VAR_2[VAR_3].mask & 0x02) {
  FUNC_1(VAR_3, &VAR_2[VAR_3]);
     }
 }
    }
}
