
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ relkind; } ;
struct TYPE_5__ {int relname; } ;
typedef TYPE_1__ RangeVar ;
typedef int Oid ;
typedef int HeapTuple ;
typedef TYPE_2__* Form_pg_class ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,TYPE_2__*) ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ,int ) ;
 int VAR_8 ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (char*,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,int ) ;

__attribute__((used)) static void
FUNC_14(const RangeVar *VAR_9, Oid VAR_10, Oid VAR_11,
         void *VAR_12)
{
 HeapTuple VAR_13;
 Form_pg_class VAR_14;

 VAR_13 = FUNC_6(VAR_7, FUNC_4(VAR_10));
 if (!FUNC_2(VAR_13))
  return;
 VAR_14 = (Form_pg_class) FUNC_0(VAR_13);


 if (VAR_14->relkind != VAR_5 &&
  VAR_14->relkind != VAR_6 &&
  VAR_14->relkind != VAR_4)
  FUNC_8(VAR_3,
    (FUNC_9(VAR_2),
     FUNC_10("\"%s\" is not a table or view", VAR_9->relname)));

 if (!VAR_8 && FUNC_3(VAR_10, VAR_14))
  FUNC_8(VAR_3,
    (FUNC_9(VAR_1),
     FUNC_10("permission denied: \"%s\" is a system catalog",
      VAR_9->relname)));


 if (!FUNC_13(VAR_10, FUNC_1()))
  FUNC_7(VAR_0, FUNC_12(FUNC_11(VAR_10)), VAR_9->relname);

 FUNC_5(VAR_13);
}
