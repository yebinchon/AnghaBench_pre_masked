
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int ctx; TYPE_1__* pages; } ;
struct TYPE_6__ {int list; int page; struct TYPE_6__* next; TYPE_2__* doc; } ;
typedef TYPE_1__ MuOfficePage ;
typedef TYPE_2__ MuOfficeDoc ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,TYPE_1__*) ;

void FUNC_4(MuOfficePage *VAR_0)
{
 MuOfficeDoc *VAR_1;
 MuOfficePage **VAR_2;

 if (!VAR_0)
  return;


 VAR_1 = VAR_0->doc;
 VAR_2 = &VAR_1->pages;
 while (*VAR_2 && *VAR_2 != VAR_0)
  VAR_2 = &(*VAR_2)->next;
 FUNC_0(*VAR_2);
 *VAR_2 = VAR_0->next;

 FUNC_2(VAR_1->ctx, VAR_0->page);
 FUNC_1(VAR_1->ctx, VAR_0->list);
 FUNC_3(VAR_1->ctx, VAR_0);
}
