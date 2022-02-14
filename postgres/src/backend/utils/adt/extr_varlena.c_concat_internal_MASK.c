
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int text ;
struct TYPE_12__ {scalar_t__ fn_extra; } ;
struct TYPE_11__ {TYPE_4__* flinfo; } ;
struct TYPE_10__ {int data; int len; } ;
typedef TYPE_1__ StringInfoData ;
typedef TYPE_2__* FunctionCallInfo ;
typedef int FmgrInfo ;
typedef int Datum ;
typedef int ArrayType ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 char const* FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int) ;
 int * FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 () ;
 int FUNC_7 (TYPE_1__*,char const*) ;
 int * FUNC_8 (TYPE_2__*,int *,char const*,int *) ;
 int * FUNC_9 (TYPE_2__*,int) ;
 int * FUNC_10 (int ,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (TYPE_4__*,int) ;
 scalar_t__ FUNC_13 (TYPE_4__*) ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (int ) ;

__attribute__((used)) static text *
FUNC_16(const char *VAR_0, int VAR_1,
    FunctionCallInfo VAR_2)
{
 text *VAR_3;
 StringInfoData VAR_4;
 FmgrInfo *VAR_5;
 bool VAR_6 = 1;
 int VAR_7;






 if (FUNC_13(VAR_2->flinfo))
 {
  ArrayType *VAR_8;


  FUNC_0(VAR_1 == FUNC_6() - 1);


  if (FUNC_3(VAR_1))
   return ((void*)0);
  FUNC_0(FUNC_1(FUNC_11(FUNC_12(VAR_2->flinfo, VAR_1))));


  VAR_8 = FUNC_4(VAR_1);





  return FUNC_8(VAR_2, VAR_8, VAR_0, ((void*)0));
 }


 FUNC_14(&VAR_4);


 VAR_5 = (FmgrInfo *) VAR_2->flinfo->fn_extra;
 if (VAR_5 == ((void*)0))
  VAR_5 = FUNC_9(VAR_2, VAR_1);

 for (VAR_7 = VAR_1; VAR_7 < FUNC_6(); VAR_7++)
 {
  if (!FUNC_3(VAR_7))
  {
   Datum VAR_9 = FUNC_5(VAR_7);


   if (VAR_6)
    VAR_6 = 0;
   else
    FUNC_7(&VAR_4, VAR_0);


   FUNC_7(&VAR_4,
           FUNC_2(&VAR_5[VAR_7], VAR_9));
  }
 }

 VAR_3 = FUNC_10(VAR_4.data, VAR_4.len);
 FUNC_15(VAR_4.data);

 return VAR_3;
}
