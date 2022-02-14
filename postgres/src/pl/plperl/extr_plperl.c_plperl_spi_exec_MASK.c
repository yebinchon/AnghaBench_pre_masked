
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* prodesc; } ;
struct TYPE_6__ {int message; } ;
struct TYPE_5__ {int fn_readonly; } ;
typedef int ResourceOwner ;
typedef int MemoryContext ;
typedef int HV ;
typedef TYPE_2__ ErrorData ;


 int FUNC_0 (int *) ;
 TYPE_2__* FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (char*,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_10 () ;
 int FUNC_11 (int ) ;
 TYPE_3__* VAR_4 ;
 int FUNC_12 (char*,int ,int) ;
 int * FUNC_13 (int ,int ,int) ;
 int FUNC_14 (char*) ;

HV *
FUNC_15(char *VAR_5, int VAR_6)
{
 HV *VAR_7;





 MemoryContext VAR_8 = VAR_0;
 ResourceOwner VAR_9 = VAR_1;

 FUNC_10();

 FUNC_0(((void*)0));

 FUNC_3(VAR_8);

 FUNC_6();
 {
  int VAR_10;

  FUNC_12(VAR_5, FUNC_14(VAR_5), 0);

  VAR_10 = FUNC_9(VAR_5, VAR_4->prodesc->fn_readonly,
        VAR_6);
  VAR_7 = FUNC_13(VAR_3, VAR_2,
             VAR_10);


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


  FUNC_11(VAR_11->message);


  return ((void*)0);
 }
 FUNC_5();

 return VAR_7;
}
