
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int assoc_context; int * internalquery; } ;
typedef TYPE_1__ ErrorData ;


 int FUNC_0 () ;
 int * FUNC_1 (int ,char const*) ;
 TYPE_1__* VAR_0 ;
 size_t VAR_1 ;
 int FUNC_2 (int *) ;

int
FUNC_3(const char *VAR_2)
{
 ErrorData *VAR_3 = &VAR_0[VAR_1];


 FUNC_0();

 if (VAR_3->internalquery)
 {
  FUNC_2(VAR_3->internalquery);
  VAR_3->internalquery = ((void*)0);
 }

 if (VAR_2)
  VAR_3->internalquery = FUNC_1(VAR_3->assoc_context, VAR_2);

 return 0;
}
