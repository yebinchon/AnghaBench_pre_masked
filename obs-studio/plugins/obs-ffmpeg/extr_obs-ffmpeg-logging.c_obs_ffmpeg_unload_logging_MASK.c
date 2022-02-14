
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t num; int * array; } ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 TYPE_1__ VAR_2 ;
 int FUNC_2 (TYPE_1__) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int *) ;

void FUNC_4(void)
{
 if (!VAR_4)
  return;

 VAR_4 = 0;

 FUNC_0(VAR_1);
 FUNC_3(&VAR_3);

 for (size_t VAR_5 = 0; VAR_5 < VAR_0.num; VAR_5++) {
  FUNC_1(VAR_0.array[VAR_5]);
 }
 for (size_t VAR_6 = 0; VAR_6 < VAR_2.num; VAR_6++) {
  FUNC_1(VAR_2.array[VAR_6]);
 }

 FUNC_2(VAR_0);
 FUNC_2(VAR_2);
}
