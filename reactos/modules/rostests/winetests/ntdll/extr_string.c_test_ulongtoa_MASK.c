
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int mask; } ;


 int VAR_0 ;
 int FUNC_0 (int,TYPE_1__*) ;
 int FUNC_1 (int,TYPE_1__*) ;
 int FUNC_2 (int,TYPE_1__*) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static void FUNC_3(void)
{
    int VAR_2;

    for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
 if (VAR_1[VAR_2].mask & 0x01) {
     FUNC_0(VAR_2, &VAR_1[VAR_2]);
 }
 if (VAR_1[VAR_2].mask & 0x02) {
     FUNC_1(VAR_2, &VAR_1[VAR_2]);
 }
 if (VAR_1[VAR_2].mask & 0x04) {
     FUNC_2(VAR_2, &VAR_1[VAR_2]);
 }
    }
}
