
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int subtype; } ;
struct TYPE_9__ {TYPE_1__* rd_rel; } ;
struct TYPE_8__ {scalar_t__ relkind; scalar_t__ reloftype; } ;
typedef TYPE_2__* Relation ;
typedef int List ;
typedef int LOCKMODE ;
typedef TYPE_3__ AlterTableCmd ;


 int FUNC_0 (int **,TYPE_2__*,TYPE_3__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void
FUNC_4(List **VAR_4, Relation VAR_5, bool VAR_6, bool VAR_7,
     AlterTableCmd *VAR_8, LOCKMODE VAR_9)
{
 if (VAR_5->rd_rel->reloftype && !VAR_7)
  FUNC_1(VAR_2,
    (FUNC_2(VAR_1),
     FUNC_3("cannot drop column from typed table")));

 if (VAR_5->rd_rel->relkind == VAR_3)
  FUNC_0(VAR_4, VAR_5, VAR_8, VAR_9);

 if (VAR_6)
  VAR_8->subtype = VAR_0;
}
