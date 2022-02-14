
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int oprright; int oprleft; } ;
typedef int ParseState ;
typedef scalar_t__ Operator ;
typedef int Oid ;
typedef int List ;
typedef TYPE_1__* Form_pg_operator ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (int *,char,int ,int ) ;
 scalar_t__ FUNC_7 (int *,int *,int ,int ,int,int) ;
 int FUNC_8 (int *,int) ;

Operator
FUNC_9(ParseState *VAR_2, List *VAR_3, Oid VAR_4, Oid VAR_5,
    bool VAR_6, int VAR_7)
{
 Operator VAR_8;
 Form_pg_operator VAR_9;


 VAR_8 = FUNC_7(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
 if (VAR_8 == (Operator) ((void*)0))
  return (Operator) ((void*)0);


 VAR_9 = (Form_pg_operator) FUNC_0(VAR_8);
 if (FUNC_1(VAR_4, VAR_9->oprleft) &&
  FUNC_1(VAR_5, VAR_9->oprright))
  return VAR_8;


 FUNC_2(VAR_8);

 if (!VAR_6)
  FUNC_3(VAR_1,
    (FUNC_4(VAR_0),
     FUNC_5("operator requires run-time type coercion: %s",
      FUNC_6(VAR_3, 'b', VAR_4, VAR_5)),
     FUNC_8(VAR_2, VAR_7)));

 return (Operator) ((void*)0);
}
