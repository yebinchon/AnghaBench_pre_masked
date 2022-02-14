
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int funcvariadic; } ;
typedef int Oid ;
typedef int List ;
typedef TYPE_1__ FuncExpr ;
typedef int Expr ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int * FUNC_1 (int *,int ) ;
 int * FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (int ,int ,int *,int ,int ,int ) ;
 int FUNC_4 (int ,int ) ;

void
FUNC_5(Oid *VAR_2,
        int VAR_3,
        int VAR_4,
        bool VAR_5,
        Oid VAR_6,
        Oid VAR_7,
        Oid VAR_8,
        Oid VAR_9,
        Expr **VAR_10,
        Expr **VAR_11)
{
 List *VAR_12;
 FuncExpr *VAR_13;
 int VAR_14;




 VAR_12 = FUNC_2(FUNC_4(VAR_6, VAR_7));

 for (VAR_14 = VAR_4; VAR_14 < VAR_3; VAR_14++)
 {
  VAR_12 = FUNC_1(VAR_12,
        FUNC_4(VAR_2[VAR_14], VAR_7));
 }

 VAR_13 = FUNC_3(VAR_8,
       VAR_6,
       VAR_12,
       VAR_1,
       VAR_7,
       VAR_0);
 VAR_13->funcvariadic = VAR_5;
 *VAR_10 = (Expr *) VAR_13;




 if (VAR_11 != ((void*)0))
 {
  if (FUNC_0(VAR_9))
  {
   VAR_13 = FUNC_3(VAR_9,
         VAR_6,
         VAR_12,
         VAR_1,
         VAR_7,
         VAR_0);
   VAR_13->funcvariadic = VAR_5;
   *VAR_11 = (Expr *) VAR_13;
  }
  else
   *VAR_11 = ((void*)0);
 }
}
