
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * args; struct TYPE_4__* next; } ;
typedef int ParseState ;
typedef int OprCacheKey ;
typedef int Operator ;
typedef int Oid ;
typedef int List ;
typedef int * HeapTuple ;
typedef int FuncDetailCode ;
typedef TYPE_1__* FuncCandidateList ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (int *,char,int) ;
 int FUNC_4 (int *,int ,int ) ;
 int * FUNC_5 (int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int *,int *,int ,int ,int) ;
 int FUNC_9 (int *,int *,char,int ,int ,int ,int) ;
 int FUNC_10 (int,int *,TYPE_1__*,int *) ;

Operator
FUNC_11(ParseState *VAR_3, List *VAR_4, Oid VAR_5, bool VAR_6, int VAR_7)
{
 Oid VAR_8;
 OprCacheKey VAR_9;
 bool VAR_10;
 FuncDetailCode VAR_11 = VAR_0;
 HeapTuple VAR_12 = ((void*)0);




 VAR_10 = FUNC_8(VAR_3, &VAR_9, VAR_4, VAR_1, VAR_5, VAR_7);

 if (VAR_10)
 {
  VAR_8 = FUNC_6(&VAR_9);
  if (FUNC_2(VAR_8))
  {
   VAR_12 = FUNC_5(VAR_2, FUNC_1(VAR_8));
   if (FUNC_0(VAR_12))
    return (Operator) VAR_12;
  }
 }




 VAR_8 = FUNC_4(VAR_4, VAR_1, VAR_5);
 if (!FUNC_2(VAR_8))
 {



  FuncCandidateList VAR_13;


  VAR_13 = FUNC_3(VAR_4, 'l', 0);


  if (VAR_13 != ((void*)0))
  {





   FuncCandidateList VAR_14;

   for (VAR_14 = VAR_13; VAR_14 != ((void*)0); VAR_14 = VAR_14->next)
   {
    VAR_14->args[0] = VAR_14->args[1];
   }





   VAR_11 = FUNC_10(1, &VAR_5, VAR_13, &VAR_8);
  }
 }

 if (FUNC_2(VAR_8))
  VAR_12 = FUNC_5(VAR_2, FUNC_1(VAR_8));

 if (FUNC_0(VAR_12))
 {
  if (VAR_10)
   FUNC_7(&VAR_9, VAR_8);
 }
 else if (!VAR_6)
  FUNC_9(VAR_3, VAR_4, 'l', VAR_1, VAR_5, VAR_11, VAR_7);

 return (Operator) VAR_12;
}
