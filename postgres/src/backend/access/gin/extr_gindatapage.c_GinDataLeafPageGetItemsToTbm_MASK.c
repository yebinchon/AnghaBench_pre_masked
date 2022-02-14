
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TIDBitmap ;
typedef int Size ;
typedef int Page ;
typedef int ItemPointer ;
typedef int GinPostingList ;


 int * FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int*) ;
 int FUNC_4 (int *,int ,int *) ;
 int FUNC_5 (int *,int ,int,int) ;

int
FUNC_6(Page VAR_0, TIDBitmap *VAR_1)
{
 ItemPointer VAR_2;
 int VAR_3;

 if (FUNC_2(VAR_0))
 {
  GinPostingList *VAR_4 = FUNC_0(VAR_0);
  Size VAR_5 = FUNC_1(VAR_0);

  VAR_3 = FUNC_4(VAR_4, VAR_5, VAR_1);
 }
 else
 {
  VAR_2 = FUNC_3(VAR_0, &VAR_3);

  if (VAR_3 > 0)
   FUNC_5(VAR_1, VAR_2, VAR_3, 0);
 }

 return VAR_3;
}
