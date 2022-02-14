
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TypeName ;
typedef int Oid ;
typedef int List ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *,int *) ;

__attribute__((used)) static void
FUNC_8(List *VAR_3, Oid *VAR_4, Oid *VAR_5)
{
 TypeName *VAR_6;

 FUNC_0(VAR_3 != VAR_2);

 VAR_6 = (TypeName *) FUNC_4(VAR_3);
 *VAR_4 = FUNC_7(((void*)0), VAR_6);

 if (FUNC_5(VAR_3) > 1)
 {
  VAR_6 = (TypeName *) FUNC_6(VAR_3);
  *VAR_5 = FUNC_7(((void*)0), VAR_6);
 }
 else
  *VAR_5 = *VAR_4;

 if (FUNC_5(VAR_3) > 2)
  FUNC_1(VAR_1,
    (FUNC_2(VAR_0),
     FUNC_3("one or two argument types must be specified")));
}
