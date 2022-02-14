
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flags; } ;
typedef TYPE_1__ ExprState ;
typedef int ExprContext ;
typedef int Datum ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__*,int *,int*) ;

bool
FUNC_3(ExprState *VAR_1, ExprContext *VAR_2)
{
 Datum VAR_3;
 bool VAR_4;


 if (VAR_1 == ((void*)0))
  return 1;


 FUNC_0(!(VAR_1->flags & VAR_0));

 VAR_3 = FUNC_2(VAR_1, VAR_2, &VAR_4);

 if (VAR_4)
  return 1;

 return FUNC_1(VAR_3);
}
