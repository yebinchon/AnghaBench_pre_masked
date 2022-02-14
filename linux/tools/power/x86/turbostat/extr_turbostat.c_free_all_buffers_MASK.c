
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {int * put_ids; } ;
struct TYPE_13__ {int max_cpu_num; } ;


 int FUNC_0 (int *) ;
 TYPE_2__* VAR_0 ;
 TYPE_2__* VAR_1 ;
 int * VAR_2 ;
 scalar_t__ VAR_3 ;
 int * VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_2__* VAR_6 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 () ;
 TYPE_2__* VAR_7 ;
 TYPE_2__* VAR_8 ;
 int * VAR_9 ;
 TYPE_2__* VAR_10 ;
 TYPE_2__* VAR_11 ;
 TYPE_2__* VAR_12 ;
 TYPE_2__* VAR_13 ;
 TYPE_2__* VAR_14 ;
 TYPE_1__ VAR_15 ;

void FUNC_3(void)
{
 int VAR_16;

 FUNC_0(VAR_4);
 VAR_4 = ((void*)0);
 VAR_5 = 0;

 FUNC_0(VAR_2);
 VAR_2 = ((void*)0);
 VAR_3 = 0;

 FUNC_1(VAR_13);
 FUNC_1(VAR_0);
 FUNC_1(VAR_11);

 VAR_13 = ((void*)0);
 VAR_0 = ((void*)0);
 VAR_11 = ((void*)0);

 FUNC_1(VAR_14);
 FUNC_1(VAR_1);
 FUNC_1(VAR_12);

 VAR_14 = ((void*)0);
 VAR_1 = ((void*)0);
 VAR_12 = ((void*)0);

 FUNC_1(VAR_10);
 VAR_10 = ((void*)0);
 VAR_9 = ((void*)0);

 FUNC_2();

 FUNC_1(VAR_7);
 FUNC_1(VAR_8);

 for (VAR_16 = 0; VAR_16 <= VAR_15.max_cpu_num; ++VAR_16) {
  if (VAR_6[VAR_16].put_ids)
   FUNC_0(VAR_6[VAR_16].put_ids);
 }
 FUNC_1(VAR_6);
}
