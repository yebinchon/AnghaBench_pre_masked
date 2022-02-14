
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int amname; } ;
struct TYPE_3__ {int opfname; int opfnamespace; int opfmethod; } ;
typedef int StringInfo ;
typedef int Oid ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_opfamily ;
typedef TYPE_2__* Form_pg_am ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int ,int ,int ,int ) ;
 int FUNC_9 (int ,char*,int ) ;
 char* FUNC_10 (int ) ;
 int FUNC_11 (char*,int ) ;

__attribute__((used)) static void
FUNC_12(StringInfo VAR_3, Oid VAR_4)
{
 HeapTuple VAR_5;
 Form_pg_opfamily VAR_6;
 HeapTuple VAR_7;
 Form_pg_am VAR_8;
 char *VAR_9;

 VAR_5 = FUNC_6(VAR_2, FUNC_3(VAR_4));
 if (!FUNC_1(VAR_5))
  FUNC_9(VAR_1, "cache lookup failed for opfamily %u", VAR_4);
 VAR_6 = (Form_pg_opfamily) FUNC_0(VAR_5);

 VAR_7 = FUNC_6(VAR_0, FUNC_3(VAR_6->opfmethod));
 if (!FUNC_1(VAR_7))
  FUNC_9(VAR_1, "cache lookup failed for access method %u",
    VAR_6->opfmethod);
 VAR_8 = (Form_pg_am) FUNC_0(VAR_7);


 if (FUNC_4(VAR_4))
  VAR_9 = ((void*)0);
 else
  VAR_9 = FUNC_10(VAR_6->opfnamespace);

 FUNC_8(VAR_3, FUNC_7("operator family %s for access method %s"),
      FUNC_11(VAR_9,
            FUNC_2(VAR_6->opfname)),
      FUNC_2(VAR_8->amname));

 FUNC_5(VAR_7);
 FUNC_5(VAR_5);
}
