
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ typtype; int typrelid; } ;
typedef int Relation ;
typedef int Oid ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_type ;


 int FUNC_0 (int ,int ,int,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int VAR_2 ;
 int FUNC_7 (int ,int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (int ,char*,int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,int ) ;

void
FUNC_12(Oid VAR_6, Oid VAR_7, bool VAR_8)
{
 Relation VAR_9;
 HeapTuple VAR_10;
 Form_pg_type VAR_11;

 VAR_9 = FUNC_11(VAR_5, VAR_2);

 VAR_10 = FUNC_7(VAR_3, FUNC_5(VAR_6));
 if (!FUNC_3(VAR_10))
  FUNC_9(VAR_1, "cache lookup failed for type %u", VAR_6);
 VAR_11 = (Form_pg_type) FUNC_2(VAR_10);






 if (VAR_11->typtype == VAR_4)
  FUNC_0(VAR_11->typrelid, VAR_7, 1, VAR_0);
 else
  FUNC_1(VAR_6, VAR_7);


 if (VAR_8)
  FUNC_8(VAR_5, VAR_6, VAR_7);

 FUNC_4(VAR_5, VAR_6, 0);

 FUNC_6(VAR_10);
 FUNC_10(VAR_9, VAR_2);
}
