
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int nrels; TYPE_1__* rels; } ;
struct TYPE_4__ {int tablespace; int reloid; int relname; int nspname; } ;
typedef TYPE_2__ RelInfoArr ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_1(RelInfoArr *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->nrels; VAR_2++)
  FUNC_0(VAR_0, "relname: %s.%s: reloid: %u reltblspace: %s\n",
      VAR_1->rels[VAR_2].nspname,
      VAR_1->rels[VAR_2].relname,
      VAR_1->rels[VAR_2].reloid,
      VAR_1->rels[VAR_2].tablespace);
}
