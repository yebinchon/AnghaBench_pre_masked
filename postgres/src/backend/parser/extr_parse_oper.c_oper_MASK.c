
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ParseState ;
typedef int OprCacheKey ;
typedef int Operator ;
typedef int Oid ;
typedef int List ;
typedef int * HeapTuple ;
typedef int FuncDetailCode ;
typedef int * FuncCandidateList ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int * FUNC_3 (int *,char,int) ;
 int * FUNC_4 (int ,int ) ;
 int FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int *,int *,int ,int ,int) ;
 int FUNC_9 (int *,int *,char,int ,int ,int ,int) ;
 int FUNC_10 (int,int *,int *,int *) ;

Operator
FUNC_11(ParseState *VAR_3, List *VAR_4, Oid VAR_5, Oid VAR_6,
  bool VAR_7, int VAR_8)
{
 Oid VAR_9;
 OprCacheKey VAR_10;
 bool VAR_11;
 FuncDetailCode VAR_12 = VAR_0;
 HeapTuple VAR_13 = ((void*)0);




 VAR_11 = FUNC_8(VAR_3, &VAR_10, VAR_4, VAR_5, VAR_6, VAR_8);

 if (VAR_11)
 {
  VAR_9 = FUNC_6(&VAR_10);
  if (FUNC_2(VAR_9))
  {
   VAR_13 = FUNC_4(VAR_2, FUNC_1(VAR_9));
   if (FUNC_0(VAR_13))
    return (Operator) VAR_13;
  }
 }




 VAR_9 = FUNC_5(VAR_4, VAR_5, VAR_6);
 if (!FUNC_2(VAR_9))
 {



  FuncCandidateList VAR_14;


  VAR_14 = FUNC_3(VAR_4, 'b', 0);


  if (VAR_14 != ((void*)0))
  {




   Oid VAR_15[2];

   if (VAR_6 == VAR_1)
    VAR_6 = VAR_5;
   else if (VAR_5 == VAR_1)
    VAR_5 = VAR_6;
   VAR_15[0] = VAR_5;
   VAR_15[1] = VAR_6;
   VAR_12 = FUNC_10(2, VAR_15, VAR_14, &VAR_9);
  }
 }

 if (FUNC_2(VAR_9))
  VAR_13 = FUNC_4(VAR_2, FUNC_1(VAR_9));

 if (FUNC_0(VAR_13))
 {
  if (VAR_11)
   FUNC_7(&VAR_10, VAR_9);
 }
 else if (!VAR_7)
  FUNC_9(VAR_3, VAR_4, 'b', VAR_5, VAR_6, VAR_12, VAR_8);

 return (Operator) VAR_13;
}
