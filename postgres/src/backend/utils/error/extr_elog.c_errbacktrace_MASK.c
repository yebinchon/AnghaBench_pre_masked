
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int assoc_context; } ;
typedef int MemoryContext ;
typedef TYPE_1__ ErrorData ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 TYPE_1__* VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (TYPE_1__*,int) ;

int
FUNC_4(void)
{
 ErrorData *VAR_3 = &VAR_0[VAR_1];
 MemoryContext VAR_4;

 FUNC_0(0);

 VAR_2++;
 FUNC_1();
 VAR_4 = FUNC_2(VAR_3->assoc_context);

 FUNC_3(VAR_3, 1);

 FUNC_2(VAR_4);
 VAR_2--;

 return 0;
}
