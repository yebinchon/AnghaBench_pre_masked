
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char oprkind; scalar_t__ oprleft; scalar_t__ oprright; int oprnamespace; int oprname; } ;
typedef int StringInfo ;
typedef scalar_t__ Oid ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_operator ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 char* FUNC_3 (int ) ;
 int VAR_1 ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,scalar_t__) ;
 int FUNC_8 (int ,char*,char const*) ;
 int FUNC_9 (int ,char const*) ;
 int FUNC_10 (int ,char*,scalar_t__) ;
 char* FUNC_11 (int ) ;
 char const* FUNC_12 (char*) ;

void
FUNC_13(StringInfo VAR_2,
       const char *VAR_3, Oid VAR_4,
       Oid VAR_5,
       const char *VAR_6, Oid VAR_7)
{
 HeapTuple VAR_8;
 Form_pg_operator VAR_9;
 char *VAR_10;
 char *VAR_11;

 VAR_8 = FUNC_6(VAR_1, FUNC_4(VAR_5));
 if (!FUNC_2(VAR_8))
  FUNC_10(VAR_0, "cache lookup failed for operator %u", VAR_5);
 VAR_9 = (Form_pg_operator) FUNC_1(VAR_8);
 FUNC_0(VAR_9->oprkind == 'b');
 VAR_10 = FUNC_3(VAR_9->oprname);

 VAR_11 = FUNC_11(VAR_9->oprnamespace);

 FUNC_9(VAR_2, VAR_3);
 if (VAR_4 != VAR_9->oprleft)
  FUNC_7(VAR_2, VAR_9->oprleft);
 FUNC_8(VAR_2, " OPERATOR(%s.", FUNC_12(VAR_11));
 FUNC_9(VAR_2, VAR_10);
 FUNC_8(VAR_2, ") %s", VAR_6);
 if (VAR_7 != VAR_9->oprright)
  FUNC_7(VAR_2, VAR_9->oprright);

 FUNC_5(VAR_8);
}
