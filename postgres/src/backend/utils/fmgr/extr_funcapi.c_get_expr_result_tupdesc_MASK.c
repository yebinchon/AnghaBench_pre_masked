
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ TypeFuncClass ;
typedef int * TupleDesc ;
typedef scalar_t__ Oid ;
typedef int Node ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,...) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (int *,int *,int **) ;

TupleDesc
FUNC_6(Node *VAR_5, bool VAR_6)
{
 TupleDesc VAR_7;
 TypeFuncClass VAR_8;

 VAR_8 = FUNC_5(VAR_5, ((void*)0), &VAR_7);

 if (VAR_8 == VAR_3 ||
  VAR_8 == VAR_4)
  return VAR_7;

 if (!VAR_6)
 {
  Oid VAR_9 = FUNC_3(VAR_5);

  if (VAR_9 != VAR_2)
   FUNC_0(VAR_1,
     (FUNC_1(VAR_0),
      FUNC_2("type %s is not composite",
       FUNC_4(VAR_9))));
  else
   FUNC_0(VAR_1,
     (FUNC_1(VAR_0),
      FUNC_2("record type has not been registered")));
 }

 return ((void*)0);
}
