
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16 ;
typedef int Size ;
typedef int Page ;
typedef scalar_t__ Item ;
typedef int IndexTupleData ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ,scalar_t__,int ,int,int,int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int *,char*,int) ;

__attribute__((used)) static void
FUNC_5(Page VAR_3, char *VAR_4, int VAR_5)
{
 IndexTupleData VAR_6;
 Size VAR_7;
 char *VAR_8 = VAR_4 + VAR_5;
 Item VAR_9[VAR_1];
 uint16 VAR_10[VAR_1];
 int VAR_11;
 int VAR_12;






 VAR_11 = 0;
 while (VAR_4 < VAR_8)
 {







  FUNC_4(&VAR_6, VAR_4, sizeof(IndexTupleData));
  VAR_7 = FUNC_0(&VAR_6);
  VAR_7 = FUNC_1(VAR_7);

  VAR_9[VAR_11] = (Item) VAR_4;
  VAR_10[VAR_11] = VAR_7;
  VAR_11++;

  VAR_4 += VAR_7;
 }
 VAR_12 = VAR_11;

 for (VAR_11 = VAR_12 - 1; VAR_11 >= 0; VAR_11--)
 {
  if (FUNC_2(VAR_3, VAR_9[VAR_11], VAR_10[VAR_11], VAR_12 - VAR_11,
      0, 0) == VAR_0)
   FUNC_3(VAR_2, "_bt_restore_page: cannot add item to page");
  VAR_4 += VAR_7;
 }
}
