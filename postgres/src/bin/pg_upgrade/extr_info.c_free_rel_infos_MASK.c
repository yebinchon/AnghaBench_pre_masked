
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* tablespace; scalar_t__ tblsp_alloc; struct TYPE_5__* relname; struct TYPE_5__* nspname; scalar_t__ nsp_alloc; } ;
struct TYPE_4__ {int nrels; TYPE_2__* rels; } ;
typedef TYPE_1__ RelInfoArr ;


 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_1(RelInfoArr *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->nrels; VAR_1++)
 {
  if (VAR_0->rels[VAR_1].nsp_alloc)
   FUNC_0(VAR_0->rels[VAR_1].nspname);
  FUNC_0(VAR_0->rels[VAR_1].relname);
  if (VAR_0->rels[VAR_1].tblsp_alloc)
   FUNC_0(VAR_0->rels[VAR_1].tablespace);
 }
 FUNC_0(VAR_0->rels);
 VAR_0->nrels = 0;
}
