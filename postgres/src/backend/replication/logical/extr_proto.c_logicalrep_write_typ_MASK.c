
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int typname; int typnamespace; } ;
typedef int StringInfo ;
typedef int Oid ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_type ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int VAR_1 ;
 int FUNC_6 (int ,char*,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,char) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,int ) ;

void
FUNC_12(StringInfo VAR_2, Oid VAR_3)
{
 Oid VAR_4 = FUNC_7(VAR_3);
 HeapTuple VAR_5;
 Form_pg_type VAR_6;

 FUNC_9(VAR_2, 'Y');

 VAR_5 = FUNC_5(VAR_1, FUNC_3(VAR_4));
 if (!FUNC_1(VAR_5))
  FUNC_6(VAR_0, "cache lookup failed for type %u", VAR_4);
 VAR_6 = (Form_pg_type) FUNC_0(VAR_5);


 FUNC_10(VAR_2, VAR_3);


 FUNC_8(VAR_2, VAR_6->typnamespace);
 FUNC_11(VAR_2, FUNC_2(VAR_6->typname));

 FUNC_4(VAR_5);
}
