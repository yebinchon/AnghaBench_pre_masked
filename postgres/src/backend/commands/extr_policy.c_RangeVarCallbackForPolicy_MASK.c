
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {char relkind; } ;
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
 char VAR_4 ;
 char VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ,int ) ;
 int VAR_7 ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (char*,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,int ) ;

__attribute__((used)) static void
FUNC_14(const RangeVar *VAR_8, Oid VAR_9, Oid VAR_10,
        void *VAR_11)
{
 HeapTuple VAR_12;
 Form_pg_class VAR_13;
 char VAR_14;

 VAR_12 = FUNC_6(VAR_6, FUNC_4(VAR_9));
 if (!FUNC_2(VAR_12))
  return;

 VAR_13 = (Form_pg_class) FUNC_0(VAR_12);
 VAR_14 = VAR_13->relkind;


 if (!FUNC_13(VAR_9, FUNC_1()))
  FUNC_7(VAR_0, FUNC_12(FUNC_11(VAR_9)), VAR_8->relname);


 if (!VAR_7 && FUNC_3(VAR_9, VAR_13))
  FUNC_8(VAR_3,
    (FUNC_9(VAR_1),
     FUNC_10("permission denied: \"%s\" is a system catalog",
      VAR_8->relname)));


 if (VAR_14 != VAR_5 && VAR_14 != VAR_4)
  FUNC_8(VAR_3,
    (FUNC_9(VAR_2),
     FUNC_10("\"%s\" is not a table", VAR_8->relname)));

 FUNC_5(VAR_12);
}
