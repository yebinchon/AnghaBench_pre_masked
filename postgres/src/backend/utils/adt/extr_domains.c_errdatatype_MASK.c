
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int typname; int typnamespace; } ;
typedef int Oid ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_type ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int VAR_3 ;
 int FUNC_6 (int ,char*,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;

int
FUNC_9(Oid VAR_4)
{
 HeapTuple VAR_5;
 Form_pg_type VAR_6;

 VAR_5 = FUNC_5(VAR_3, FUNC_3(VAR_4));
 if (!FUNC_1(VAR_5))
  FUNC_6(VAR_0, "cache lookup failed for type %u", VAR_4);
 VAR_6 = (Form_pg_type) FUNC_0(VAR_5);

 FUNC_7(VAR_2,
        FUNC_8(VAR_6->typnamespace));
 FUNC_7(VAR_1, FUNC_2(VAR_6->typname));

 FUNC_4(VAR_5);

 return 0;
}
