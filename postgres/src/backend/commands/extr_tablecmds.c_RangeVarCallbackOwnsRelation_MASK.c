
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int relname; } ;
typedef TYPE_1__ RangeVar ;
typedef int Oid ;
typedef int HeapTuple ;
typedef int Form_pg_class ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_3 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ,int ) ;
 int VAR_4 ;
 int FUNC_9 (int ,char*,int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (char*,int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ,int ) ;

void
FUNC_16(const RangeVar *VAR_5,
        Oid VAR_6, Oid VAR_7, void *VAR_8)
{
 HeapTuple VAR_9;


 if (!FUNC_5(VAR_6))
  return;

 VAR_9 = FUNC_7(VAR_3, FUNC_4(VAR_6));
 if (!FUNC_2(VAR_9))
  FUNC_9(VAR_2, "cache lookup failed for relation %u", VAR_6);

 if (!FUNC_15(VAR_6, FUNC_1()))
  FUNC_8(VAR_0, FUNC_14(FUNC_13(VAR_6)),
        VAR_5->relname);

 if (!VAR_4 &&
  FUNC_3(VAR_6, (Form_pg_class) FUNC_0(VAR_9)))
  FUNC_10(VAR_2,
    (FUNC_11(VAR_1),
     FUNC_12("permission denied: \"%s\" is a system catalog",
      VAR_5->relname)));

 FUNC_6(VAR_9);
}
