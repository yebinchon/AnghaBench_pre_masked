
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Oid ;
typedef int List ;
typedef int FuncLookupError ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int FUNC_0 (int *,int,int const*,int,int*) ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (int *,int,int ,int const*) ;

Oid
FUNC_8(List *VAR_5, int VAR_6, const Oid *VAR_7, bool VAR_8)
{
 Oid VAR_9;
 FuncLookupError VAR_10;

 VAR_9 = FUNC_0(VAR_5, VAR_6, VAR_7, VAR_8,
          &VAR_10);

 if (FUNC_2(VAR_9))
  return VAR_9;

 switch (VAR_10)
 {
  case 128:

   if (VAR_8)
    return VAR_3;

   if (VAR_6 < 0)
    FUNC_3(VAR_2,
      (FUNC_4(VAR_1),
       FUNC_6("could not find a function named \"%s\"",
        FUNC_1(VAR_5))));
   else
    FUNC_3(VAR_2,
      (FUNC_4(VAR_1),
       FUNC_6("function %s does not exist",
        FUNC_7(VAR_5, VAR_6,
               VAR_4, VAR_7))));
   break;

  case 129:

   FUNC_3(VAR_2,
     (FUNC_4(VAR_0),
      FUNC_6("function name \"%s\" is not unique",
       FUNC_1(VAR_5)),
      FUNC_5("Specify the argument list to select the function unambiguously.")));
   break;
 }

 return VAR_3;
}
