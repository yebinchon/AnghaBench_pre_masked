
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t ULONG ;
typedef scalar_t__ UCHAR ;
struct TYPE_4__ {TYPE_1__* normal; TYPE_1__* alted; TYPE_1__* shifted; } ;
struct TYPE_3__ {scalar_t__ s; scalar_t__ a; } ;
typedef TYPE_1__* PSCANTOASCII ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 TYPE_2__* FUNC_2 () ;
 int FUNC_3 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

UCHAR FUNC_4(UCHAR VAR_2)
{
  PSCANTOASCII VAR_3;
  ULONG VAR_4;

  FUNC_1();

  if (VAR_1)
    {
      VAR_3 = FUNC_2()->shifted;
    }
  else if(VAR_0)
    {
      VAR_3 = FUNC_2()->alted;
    }
  else
    {
      VAR_3 = FUNC_2()->normal;
    }


  if (VAR_3)
    {
   for(VAR_4=0;VAR_3[VAR_4].s != 0;VAR_4++)
     {
       if(VAR_3[VAR_4].s==VAR_2)
         {
     FUNC_3();
     return VAR_3[VAR_4].a;
         }
     }
    }

  FUNC_0((0,"AsciiFromScan(): no translation for key\n"));
  FUNC_3();
  return 0;
}
