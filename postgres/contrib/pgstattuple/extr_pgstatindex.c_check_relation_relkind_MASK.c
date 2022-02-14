
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* rd_rel; } ;
struct TYPE_5__ {scalar_t__ relkind; } ;
typedef TYPE_2__* Relation ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int ) ;

__attribute__((used)) static void
FUNC_4(Relation VAR_7)
{
 if (VAR_7->rd_rel->relkind != VAR_4 &&
  VAR_7->rd_rel->relkind != VAR_2 &&
  VAR_7->rd_rel->relkind != VAR_3 &&
  VAR_7->rd_rel->relkind != VAR_5 &&
  VAR_7->rd_rel->relkind != VAR_6)
  FUNC_1(VAR_1,
    (FUNC_2(VAR_0),
     FUNC_3("\"%s\" is not a table, index, materialized view, sequence, or TOAST table",
      FUNC_0(VAR_7))));
}
