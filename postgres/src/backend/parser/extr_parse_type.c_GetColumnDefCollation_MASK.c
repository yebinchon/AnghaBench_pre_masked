
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int location; int collOid; TYPE_1__* collClause; } ;
struct TYPE_4__ {int location; int collname; } ;
typedef int ParseState ;
typedef int Oid ;
typedef TYPE_2__ ColumnDef ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,int) ;

Oid
FUNC_8(ParseState *VAR_2, ColumnDef *VAR_3, Oid VAR_4)
{
 Oid VAR_5;
 Oid VAR_6 = FUNC_6(VAR_4);
 int VAR_7 = VAR_3->location;

 if (VAR_3->collClause)
 {

  VAR_7 = VAR_3->collClause->location;
  VAR_5 = FUNC_0(VAR_2, VAR_3->collClause->collname,
         VAR_7);
 }
 else if (FUNC_1(VAR_3->collOid))
 {

  VAR_5 = VAR_3->collOid;
 }
 else
 {

  VAR_5 = VAR_6;
 }


 if (FUNC_1(VAR_5) && !FUNC_1(VAR_6))
  FUNC_2(VAR_1,
    (FUNC_3(VAR_0),
     FUNC_4("collations are not supported by type %s",
      FUNC_5(VAR_4)),
     FUNC_7(VAR_2, VAR_7)));

 return VAR_5;
}
