
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* rd_rel; } ;
struct TYPE_6__ {scalar_t__ relkind; } ;
typedef TYPE_2__* Relation ;
typedef int Oid ;
typedef int LOCKMODE ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int ) ;
 TYPE_2__* FUNC_4 (int ,int ) ;

Relation
FUNC_5(Oid VAR_4, LOCKMODE VAR_5)
{
 Relation VAR_6;

 VAR_6 = FUNC_4(VAR_4, VAR_5);

 if (VAR_6->rd_rel->relkind != VAR_2 &&
  VAR_6->rd_rel->relkind != VAR_3)
  FUNC_1(VAR_1,
    (FUNC_2(VAR_0),
     FUNC_3("\"%s\" is not an index",
      FUNC_0(VAR_6))));

 return VAR_6;
}
