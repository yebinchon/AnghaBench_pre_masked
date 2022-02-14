
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int StringInfo ;
typedef int Relation ;
typedef int RangeTblEntry ;
typedef int Node ;
typedef int List ;
typedef int Index ;
typedef int Bitmapset ;


 scalar_t__ VAR_0 ;
 int * VAR_1 ;
 int * FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int *,int ,int ,int,int *,int,int **) ;
 int FUNC_2 (int *,int ,int **) ;

__attribute__((used)) static void
FUNC_3(StringInfo VAR_2, RangeTblEntry *VAR_3,
      Index VAR_4, Relation VAR_5,
      bool VAR_6,
      List *VAR_7,
      List *VAR_8,
      List **VAR_9)
{
 Bitmapset *VAR_10 = ((void*)0);

 if (VAR_6)
 {

  VAR_10 =
   FUNC_0(0 - VAR_0);
 }

 if (VAR_7 != VAR_1)
 {
  FUNC_2((Node *) VAR_7, VAR_4,
        &VAR_10);
 }

 if (VAR_8 != VAR_1)
 {




  FUNC_2((Node *) VAR_8, VAR_4,
        &VAR_10);
 }

 if (VAR_10 != ((void*)0))
  FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5, 1, VAR_10, 0,
        VAR_9);
 else
  *VAR_9 = VAR_1;
}
