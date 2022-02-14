
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* pending_next; struct TYPE_4__* pending_prev; } ;
typedef TYPE_1__ TocEntry ;



__attribute__((used)) static void
FUNC_0(TocEntry *VAR_0, TocEntry *VAR_1)
{
 VAR_1->pending_prev = VAR_0->pending_prev;
 VAR_0->pending_prev->pending_next = VAR_1;
 VAR_0->pending_prev = VAR_1;
 VAR_1->pending_next = VAR_0;
}
