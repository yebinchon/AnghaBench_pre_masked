
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int tupdesc; int * vals; } ;
struct TYPE_5__ {int message; } ;
typedef int SV ;
typedef int ResourceOwner ;
typedef int Portal ;
typedef int MemoryContext ;
typedef TYPE_1__ ErrorData ;


 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int VAR_2 ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int,int) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (TYPE_2__*) ;
 scalar_t__ VAR_3 ;
 TYPE_2__* VAR_4 ;
 int FUNC_13 (int ) ;
 int FUNC_14 () ;
 int FUNC_15 (int ) ;
 int VAR_5 ;
 int * FUNC_16 (int ,int ,int) ;

SV *
FUNC_17(char *VAR_6)
{
 SV *VAR_7;





 MemoryContext VAR_8 = VAR_0;
 ResourceOwner VAR_9 = VAR_1;

 FUNC_14();

 FUNC_0(((void*)0));

 FUNC_3(VAR_8);

 FUNC_6();
 {
  VAR_5;
  Portal VAR_10 = FUNC_11(VAR_6);

  if (!VAR_10)
  {
   VAR_7 = &VAR_2;
  }
  else
  {
   FUNC_10(VAR_10, 1, 1);
   if (VAR_3 == 0)
   {
    FUNC_13(VAR_10);
    FUNC_9(VAR_10);
    VAR_7 = &VAR_2;
   }
   else
   {
    VAR_7 = FUNC_16(VAR_4->vals[0],
            VAR_4->tupdesc,
            1);
   }
   FUNC_12(VAR_4);
  }


  FUNC_7();
  FUNC_3(VAR_8);
  VAR_1 = VAR_9;
 }
 FUNC_4();
 {
  ErrorData *VAR_11;


  FUNC_3(VAR_8);
  VAR_11 = FUNC_1();
  FUNC_2();


  FUNC_8();
  FUNC_3(VAR_8);
  VAR_1 = VAR_9;


  FUNC_15(VAR_11->message);


  return ((void*)0);
 }
 FUNC_5();

 return VAR_7;
}
