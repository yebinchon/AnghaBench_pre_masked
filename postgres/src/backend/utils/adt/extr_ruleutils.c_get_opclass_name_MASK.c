
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int opcnamespace; int opcname; int opcmethod; } ;
typedef int StringInfo ;
typedef scalar_t__ Oid ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_opclass ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (int ) ;
 char* FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,char*,int ,...) ;
 int FUNC_10 (int ,char*,scalar_t__) ;
 char* FUNC_11 (int ) ;
 int FUNC_12 (char*) ;

__attribute__((used)) static void
FUNC_13(Oid VAR_2, Oid VAR_3,
     StringInfo VAR_4)
{
 HeapTuple VAR_5;
 Form_pg_opclass VAR_6;
 char *VAR_7;
 char *VAR_8;

 VAR_5 = FUNC_8(VAR_0, FUNC_4(VAR_2));
 if (!FUNC_2(VAR_5))
  FUNC_10(VAR_1, "cache lookup failed for opclass %u", VAR_2);
 VAR_6 = (Form_pg_opclass) FUNC_0(VAR_5);

 if (!FUNC_5(VAR_3) ||
  FUNC_1(VAR_3, VAR_6->opcmethod) != VAR_2)
 {

  VAR_7 = FUNC_3(VAR_6->opcname);
  if (FUNC_6(VAR_2))
   FUNC_9(VAR_4, " %s", FUNC_12(VAR_7));
  else
  {
   VAR_8 = FUNC_11(VAR_6->opcnamespace);
   FUNC_9(VAR_4, " %s.%s",
        FUNC_12(VAR_8),
        FUNC_12(VAR_7));
  }
 }
 FUNC_7(VAR_5);
}
