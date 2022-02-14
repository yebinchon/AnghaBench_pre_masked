
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int opcname; int opcnamespace; int opcmethod; } ;
typedef scalar_t__ Oid ;
typedef int List ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_opclass ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (int ) ;
 int * VAR_2 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,char*,scalar_t__) ;
 char* FUNC_8 (int ) ;
 int * FUNC_9 (int ,int ) ;
 int FUNC_10 (char*) ;
 char* FUNC_11 (int ) ;

__attribute__((used)) static List *
FUNC_12(Oid VAR_3, Oid VAR_4)
{
 List *VAR_5 = VAR_2;
 HeapTuple VAR_6;
 Form_pg_opclass VAR_7;

 VAR_6 = FUNC_6(VAR_0, FUNC_4(VAR_3));
 if (!FUNC_2(VAR_6))
  FUNC_7(VAR_1, "cache lookup failed for opclass %u", VAR_3);
 VAR_7 = (Form_pg_opclass) FUNC_0(VAR_6);

 if (FUNC_1(VAR_4, VAR_7->opcmethod) != VAR_3)
 {

  char *VAR_8 = FUNC_8(VAR_7->opcnamespace);
  char *VAR_9 = FUNC_11(FUNC_3(VAR_7->opcname));

  VAR_5 = FUNC_9(FUNC_10(VAR_8), FUNC_10(VAR_9));
 }

 FUNC_5(VAR_6);
 return VAR_5;
}
