
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int saved_errno; int sqlerrcode; } ;
typedef TYPE_1__ ErrorData ;


 int FUNC_0 () ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 size_t VAR_3 ;

int
FUNC_1(void)
{
 ErrorData *VAR_4 = &VAR_2[VAR_3];


 FUNC_0();

 switch (VAR_4->saved_errno)
 {

  case 128:

  case 129:

   VAR_4->sqlerrcode = VAR_0;
   break;


  default:
   VAR_4->sqlerrcode = VAR_1;
   break;
 }

 return 0;
}
