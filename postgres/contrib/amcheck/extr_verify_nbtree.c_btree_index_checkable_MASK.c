
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* rd_index; TYPE_2__* rd_rel; } ;
struct TYPE_8__ {scalar_t__ relkind; scalar_t__ relam; } ;
struct TYPE_7__ {int indisvalid; } ;
typedef TYPE_3__* Relation ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_3__*) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (char*,...) ;

__attribute__((used)) static inline void
FUNC_6(Relation VAR_4)
{
 if (VAR_4->rd_rel->relkind != VAR_3 ||
  VAR_4->rd_rel->relam != VAR_0)
  FUNC_2(VAR_2,
    (FUNC_3(VAR_1),
     FUNC_5("only B-Tree indexes are supported as targets for verification"),
     FUNC_4("Relation \"%s\" is not a B-Tree index.",
         FUNC_1(VAR_4))));

 if (FUNC_0(VAR_4))
  FUNC_2(VAR_2,
    (FUNC_3(VAR_1),
     FUNC_5("cannot access temporary tables of other sessions"),
     FUNC_4("Index \"%s\" is associated with temporary relation.",
         FUNC_1(VAR_4))));

 if (!VAR_4->rd_index->indisvalid)
  FUNC_2(VAR_2,
    (FUNC_3(VAR_1),
     FUNC_5("cannot check index \"%s\"",
      FUNC_1(VAR_4)),
     FUNC_4("Index is not valid.")));
}
