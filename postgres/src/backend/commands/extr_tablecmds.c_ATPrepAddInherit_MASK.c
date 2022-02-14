
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* rd_rel; } ;
struct TYPE_4__ {scalar_t__ relkind; scalar_t__ relispartition; scalar_t__ reloftype; } ;
typedef TYPE_2__* Relation ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void
FUNC_3(Relation VAR_3)
{
 if (VAR_3->rd_rel->reloftype)
  FUNC_0(VAR_1,
    (FUNC_1(VAR_0),
     FUNC_2("cannot change inheritance of typed table")));

 if (VAR_3->rd_rel->relispartition)
  FUNC_0(VAR_1,
    (FUNC_1(VAR_0),
     FUNC_2("cannot change inheritance of a partition")));

 if (VAR_3->rd_rel->relkind == VAR_2)
  FUNC_0(VAR_1,
    (FUNC_1(VAR_0),
     FUNC_2("cannot change inheritance of partitioned table")));
}
