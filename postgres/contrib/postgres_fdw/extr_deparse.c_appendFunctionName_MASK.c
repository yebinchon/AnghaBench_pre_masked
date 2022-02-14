
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int buf; } ;
typedef TYPE_1__ deparse_expr_cxt ;
struct TYPE_5__ {scalar_t__ pronamespace; int proname; } ;
typedef int StringInfo ;
typedef int Oid ;
typedef int HeapTuple ;
typedef TYPE_2__* Form_pg_proc ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,char*,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,char*,int ) ;
 char* FUNC_9 (scalar_t__) ;
 int FUNC_10 (char const*) ;

__attribute__((used)) static void
FUNC_11(Oid VAR_3, deparse_expr_cxt *VAR_4)
{
 StringInfo VAR_5 = VAR_4->buf;
 HeapTuple VAR_6;
 Form_pg_proc VAR_7;
 const char *VAR_8;

 VAR_6 = FUNC_5(VAR_2, FUNC_3(VAR_3));
 if (!FUNC_1(VAR_6))
  FUNC_8(VAR_0, "cache lookup failed for function %u", VAR_3);
 VAR_7 = (Form_pg_proc) FUNC_0(VAR_6);


 if (VAR_7->pronamespace != VAR_1)
 {
  const char *VAR_9;

  VAR_9 = FUNC_9(VAR_7->pronamespace);
  FUNC_6(VAR_5, "%s.", FUNC_10(VAR_9));
 }


 VAR_8 = FUNC_2(VAR_7->proname);
 FUNC_7(VAR_5, FUNC_10(VAR_8));

 FUNC_4(VAR_6);
}
