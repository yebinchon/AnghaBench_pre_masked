
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* next; struct TYPE_4__* down; int y; int x; int uri; int page; } ;
typedef TYPE_1__ fz_outline ;
typedef int fz_document ;
typedef int fz_context ;
struct TYPE_5__ {int page; } ;


 TYPE_3__ FUNC_0 (int *,int *,int ,int *,int *) ;

__attribute__((used)) static void
FUNC_1(fz_context *VAR_0, fz_document *VAR_1, fz_outline *VAR_2)
{
 while (VAR_2)
 {
  VAR_2->page = FUNC_0(VAR_0, VAR_1, VAR_2->uri, &VAR_2->x, &VAR_2->y).page;
  FUNC_1(VAR_0, VAR_1, VAR_2->down);
  VAR_2 = VAR_2->next;
 }
}
