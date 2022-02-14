
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ prokind; } ;
typedef int StringInfo ;
typedef int Oid ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_proc ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ,char*,int ) ;

__attribute__((used)) static void
FUNC_7(StringInfo VAR_4, Oid VAR_5)
{
 HeapTuple VAR_6;
 Form_pg_proc VAR_7;

 VAR_6 = FUNC_4(VAR_1,
         FUNC_2(VAR_5));
 if (!FUNC_1(VAR_6))
  FUNC_6(VAR_0, "cache lookup failed for procedure %u", VAR_5);
 VAR_7 = (Form_pg_proc) FUNC_0(VAR_6);

 if (VAR_7->prokind == VAR_2)
  FUNC_5(VAR_4, "aggregate");
 else if (VAR_7->prokind == VAR_3)
  FUNC_5(VAR_4, "procedure");
 else
  FUNC_5(VAR_4, "function");

 FUNC_3(VAR_6);
}
