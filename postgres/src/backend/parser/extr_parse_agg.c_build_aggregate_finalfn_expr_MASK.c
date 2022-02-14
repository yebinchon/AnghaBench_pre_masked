
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Oid ;
typedef int List ;
typedef int Expr ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int *,int ) ;
 int * FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ,int *,int ,int ,int ) ;
 int FUNC_3 (int ,int ) ;

void
FUNC_4(Oid *VAR_2,
        int VAR_3,
        Oid VAR_4,
        Oid VAR_5,
        Oid VAR_6,
        Oid VAR_7,
        Expr **VAR_8)
{
 List *VAR_9;
 int VAR_10;




 VAR_9 = FUNC_1(FUNC_3(VAR_4, VAR_6));


 for (VAR_10 = 0; VAR_10 < VAR_3 - 1; VAR_10++)
 {
  VAR_9 = FUNC_0(VAR_9,
        FUNC_3(VAR_2[VAR_10], VAR_6));
 }

 *VAR_8 = (Expr *) FUNC_2(VAR_7,
           VAR_5,
           VAR_9,
           VAR_1,
           VAR_6,
           VAR_0);

}
