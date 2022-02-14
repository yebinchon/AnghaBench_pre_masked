
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
typedef int List ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_opfamily ;
typedef TYPE_2__* Form_pg_am ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 char* FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,char*,int ,char*) ;
 int FUNC_7 (int ,char*,int ) ;
 char* FUNC_8 (int ) ;
 int * FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char*,char*) ;

__attribute__((used)) static void
FUNC_12(StringInfo VAR_3, Oid VAR_4, List **VAR_5)
{
 HeapTuple VAR_6;
 Form_pg_opfamily VAR_7;
 HeapTuple VAR_8;
 Form_pg_am VAR_9;
 char *VAR_10;

 VAR_6 = FUNC_5(VAR_2, FUNC_3(VAR_4));
 if (!FUNC_1(VAR_6))
  FUNC_7(VAR_1, "cache lookup failed for opfamily %u", VAR_4);
 VAR_7 = (Form_pg_opfamily) FUNC_0(VAR_6);

 VAR_8 = FUNC_5(VAR_0, FUNC_3(VAR_7->opfmethod));
 if (!FUNC_1(VAR_8))
  FUNC_7(VAR_1, "cache lookup failed for access method %u",
    VAR_7->opfmethod);
 VAR_9 = (Form_pg_am) FUNC_0(VAR_8);

 VAR_10 = FUNC_8(VAR_7->opfnamespace);
 FUNC_6(VAR_3, "%s USING %s",
      FUNC_11(VAR_10,
            FUNC_2(VAR_7->opfname)),
      FUNC_2(VAR_9->amname));

 if (VAR_5)
  *VAR_5 = FUNC_9(FUNC_10(FUNC_2(VAR_9->amname)),
        FUNC_10(VAR_10),
        FUNC_10(FUNC_2(VAR_7->opfname)));

 FUNC_4(VAR_8);
 FUNC_4(VAR_6);
}
