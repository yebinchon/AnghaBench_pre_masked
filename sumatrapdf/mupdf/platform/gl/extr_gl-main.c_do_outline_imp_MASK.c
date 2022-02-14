
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct list {int dummy; } ;
struct TYPE_7__ {int page; int is_open; struct TYPE_7__* next; struct TYPE_7__* down; int y; int x; int uri; int title; } ;
typedef TYPE_1__ fz_outline ;
struct TYPE_8__ {int page; } ;


 int VAR_0 ;
 TYPE_3__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 TYPE_3__ FUNC_1 (int ,int ,int ,int *,int *) ;
 int FUNC_2 (TYPE_3__,int ,int ) ;
 int FUNC_3 (int,int ,int ) ;
 scalar_t__ FUNC_4 (struct list*,TYPE_1__*,int ,int,int,int,int*) ;

__attribute__((used)) static void FUNC_5(struct list *VAR_3, int VAR_4, fz_outline *VAR_5, int VAR_6)
{
 int VAR_7, VAR_8, VAR_9;

 while (VAR_5)
 {
  int VAR_10 = VAR_5->page;
  VAR_9 = VAR_4;
  if (VAR_5->next && VAR_5->next->page >= 0)
   VAR_9 = VAR_5->next->page;

  VAR_8 = VAR_5->is_open;
  VAR_7 = 0;
  if (FUNC_0(VAR_0, VAR_2) == 1)
   VAR_7 = (VAR_10>=0) && (VAR_1.page == VAR_10 || (VAR_1.page > VAR_10 && VAR_1.page < VAR_9));
  if (FUNC_4(VAR_3, VAR_5, VAR_5->title, VAR_7, VAR_6, !!VAR_5->down, &VAR_5->is_open))
  {
   if (VAR_10 < 0)
   {
    VAR_1 = FUNC_1(VAR_0, VAR_2, VAR_5->uri, &VAR_5->x, &VAR_5->y);
    FUNC_2(VAR_1, VAR_5->x, VAR_5->y);
   }
   else
   {
    FUNC_3(VAR_10, VAR_5->x, VAR_5->y);
   }
  }

  if (VAR_5->down && (VAR_8 || VAR_7))
   FUNC_5(VAR_3, VAR_9, VAR_5->down, VAR_6 + 1);
  VAR_5 = VAR_5->next;
 }
}
