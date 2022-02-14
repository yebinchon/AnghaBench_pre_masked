
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ cb; } ;
struct TYPE_14__ {TYPE_2__ mkid; } ;
struct TYPE_13__ {TYPE_5__* pidl; struct TYPE_13__* next; struct TYPE_13__* down; } ;
struct TYPE_10__ {scalar_t__ cb; } ;
struct TYPE_12__ {TYPE_1__ mkid; } ;
typedef TYPE_3__* LPCITEMIDLIST ;
typedef TYPE_4__ Entry ;


 int FUNC_0 (TYPE_5__*,TYPE_3__*,scalar_t__) ;

__attribute__((used)) static Entry* FUNC_1(Entry* VAR_0, LPCITEMIDLIST VAR_1)
{
 Entry* VAR_2;

 for(VAR_2=VAR_0->down; VAR_2; VAR_2=VAR_2->next) {
  if (VAR_2->pidl->mkid.cb == VAR_1->mkid.cb &&
   !FUNC_0(VAR_2->pidl, VAR_1, VAR_2->pidl->mkid.cb))
   return VAR_2;
 }

 return 0;
}
