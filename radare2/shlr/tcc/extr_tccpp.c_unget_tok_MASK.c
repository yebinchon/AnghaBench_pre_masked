
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * tab; } ;


 int* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 int* VAR_4 ;
 int* VAR_5 ;

void FUNC_1(int VAR_6)
{
 int VAR_7, VAR_8;
 int *VAR_9;
 if (VAR_3) {


 } else {
  VAR_5 = VAR_0;
  VAR_3 = 1;
 }
 VAR_9 = VAR_4;
 VAR_0 = VAR_9;
 *VAR_9++ = VAR_1;
 VAR_8 = FUNC_0 (VAR_1) - 1;
 for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {
  *VAR_9++ = VAR_2.tab[VAR_7];
 }
 *VAR_9 = 0;
 VAR_1 = VAR_6;
}
