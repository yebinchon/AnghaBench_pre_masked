
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Page ;
typedef int GinBtreeStack ;
typedef int GinBtree ;
typedef int Buffer ;
typedef int BlockNumber ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int *,void*,int ,void*) ;
 int FUNC_3 (int ,int ,int *,void*,void*) ;

__attribute__((used)) static void
FUNC_4(GinBtree VAR_0, Buffer VAR_1, GinBtreeStack *VAR_2,
     void *VAR_3, BlockNumber VAR_4,
     void *VAR_5)
{
 Page VAR_6 = FUNC_0(VAR_1);

 if (FUNC_1(VAR_6))
  FUNC_3(VAR_0, VAR_1, VAR_2, VAR_3,
        VAR_5);
 else
  FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3,
         VAR_4, VAR_5);
}
