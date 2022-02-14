
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tmplname; int tmplinit; } ;
typedef int Oid ;
typedef int List ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_ts_template ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;
 int VAR_3 ;
 int * FUNC_9 (int *) ;
 int FUNC_10 (int ,char*,int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (char*,int ) ;

__attribute__((used)) static void
FUNC_14(Oid VAR_4, List *VAR_5)
{
 HeapTuple VAR_6;
 Form_pg_ts_template VAR_7;
 Oid VAR_8;
 if (!VAR_2)
  return;

 VAR_6 = FUNC_8(VAR_3, FUNC_3(VAR_4));
 if (!FUNC_1(VAR_6))
  FUNC_10(VAR_1, "cache lookup failed for text search template %u",
    VAR_4);
 VAR_7 = (Form_pg_ts_template) FUNC_0(VAR_6);

 VAR_8 = VAR_7->tmplinit;

 if (!FUNC_5(VAR_8))
 {

  if (VAR_5)
   FUNC_11(VAR_1,
     (FUNC_12(VAR_0),
      FUNC_13("text search template \"%s\" does not accept options",
       FUNC_2(VAR_7->tmplname))));
 }
 else
 {




  VAR_5 = FUNC_9(VAR_5);





  (void) FUNC_4(VAR_8, FUNC_6(VAR_5));
 }

 FUNC_7(VAR_6);
}
