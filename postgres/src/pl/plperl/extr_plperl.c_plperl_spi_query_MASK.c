
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int message; } ;
struct TYPE_6__ {int name; } ;
typedef int SV ;
typedef int * SPIPlanPtr ;
typedef int ResourceOwner ;
typedef TYPE_1__* Portal ;
typedef int MemoryContext ;
typedef TYPE_2__ ErrorData ;


 int FUNC_0 (int *) ;
 TYPE_2__* FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 TYPE_1__* FUNC_10 (int *,int *,int *,int *,int) ;
 int FUNC_11 (int *) ;
 int * FUNC_12 (char*,int ,int *) ;
 int VAR_3 ;
 int FUNC_13 (int ) ;
 int FUNC_14 () ;
 int FUNC_15 (int ) ;
 int * FUNC_16 (int ) ;
 int FUNC_17 (int ,char*,int ) ;
 int FUNC_18 (char*,int ,int) ;
 int FUNC_19 (char*) ;

SV *
FUNC_20(char *VAR_4)
{
 SV *VAR_5;





 MemoryContext VAR_6 = VAR_0;
 ResourceOwner VAR_7 = VAR_1;

 FUNC_14();

 FUNC_0(((void*)0));

 FUNC_3(VAR_6);

 FUNC_6();
 {
  SPIPlanPtr VAR_8;
  Portal VAR_9;


  FUNC_18(VAR_4, FUNC_19(VAR_4), 0);


  VAR_8 = FUNC_12(VAR_4, 0, ((void*)0));
  if (VAR_8 == ((void*)0))
   FUNC_17(VAR_2, "SPI_prepare() failed:%s",
     FUNC_13(VAR_3));

  VAR_9 = FUNC_10(((void*)0), VAR_8, ((void*)0), ((void*)0), 0);
  FUNC_11(VAR_8);
  if (VAR_9 == ((void*)0))
   FUNC_17(VAR_2, "SPI_cursor_open() failed:%s",
     FUNC_13(VAR_3));
  VAR_5 = FUNC_16(VAR_9->name);

  FUNC_7(VAR_9);


  FUNC_8();
  FUNC_3(VAR_6);
  VAR_1 = VAR_7;
 }
 FUNC_4();
 {
  ErrorData *VAR_10;


  FUNC_3(VAR_6);
  VAR_10 = FUNC_1();
  FUNC_2();


  FUNC_9();
  FUNC_3(VAR_6);
  VAR_1 = VAR_7;


  FUNC_15(VAR_10->message);


  return ((void*)0);
 }
 FUNC_5();

 return VAR_5;
}
