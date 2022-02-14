
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fp_info {int funcid; int fname; int argtypes; int rettype; int namespace; int flinfo; } ;
struct TYPE_3__ {int values; } ;
struct TYPE_4__ {int pronargs; int proname; TYPE_1__ proargtypes; int prorettype; int pronamespace; } ;
typedef int Oid ;
typedef int HeapTuple ;
typedef TYPE_2__* Form_pg_proc ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int FUNC_3 (struct fp_info*,int ,int) ;
 int VAR_4 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int VAR_5 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,char*,int ,int) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (char*,int ) ;
 int FUNC_13 (int ,int *) ;
 int FUNC_14 (int ,int ,int) ;
 int FUNC_15 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_16(Oid VAR_6, struct fp_info *VAR_7)
{
 HeapTuple VAR_8;
 Form_pg_proc VAR_9;

 FUNC_0(FUNC_6(VAR_6));
 FUNC_0(VAR_7 != ((void*)0));
 FUNC_3(VAR_7, 0, sizeof(struct fp_info));
 VAR_7->funcid = VAR_3;

 FUNC_13(VAR_6, &VAR_7->flinfo);

 VAR_8 = FUNC_8(VAR_5, FUNC_5(VAR_6));
 if (!FUNC_2(VAR_8))
  FUNC_10(VAR_1,
    (FUNC_11(VAR_0),
     FUNC_12("function with OID %u does not exist", VAR_6)));
 VAR_9 = (Form_pg_proc) FUNC_1(VAR_8);


 if (VAR_9->pronargs > VAR_2)
  FUNC_9(VAR_1, "function %s has more than %d arguments",
    FUNC_4(VAR_9->proname), VAR_2);

 VAR_7->namespace = VAR_9->pronamespace;
 VAR_7->rettype = VAR_9->prorettype;
 FUNC_14(VAR_7->argtypes, VAR_9->proargtypes.values, VAR_9->pronargs * sizeof(Oid));
 FUNC_15(VAR_7->fname, FUNC_4(VAR_9->proname), VAR_4);

 FUNC_7(VAR_8);




 VAR_7->funcid = VAR_6;
}
