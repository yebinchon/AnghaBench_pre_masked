
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
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_1__* VAR_8 ;
 size_t VAR_9 ;

int
FUNC_1(void)
{
 ErrorData *VAR_10 = &VAR_8[VAR_9];


 FUNC_0();

 switch (VAR_10->saved_errno)
 {

  case 129:
  case 139:

  case 128:

   VAR_10->sqlerrcode = VAR_2;
   break;


  case 133:
   VAR_10->sqlerrcode = VAR_6;
   break;


  case 138:
   VAR_10->sqlerrcode = VAR_1;
   break;


  case 131:
  case 136:

  case 130:

   VAR_10->sqlerrcode = VAR_7;
   break;


  case 132:
   VAR_10->sqlerrcode = VAR_0;
   break;

  case 134:
  case 135:
   VAR_10->sqlerrcode = VAR_3;
   break;


  case 137:
   VAR_10->sqlerrcode = VAR_5;
   break;


  default:
   VAR_10->sqlerrcode = VAR_4;
   break;
 }

 return 0;
}
