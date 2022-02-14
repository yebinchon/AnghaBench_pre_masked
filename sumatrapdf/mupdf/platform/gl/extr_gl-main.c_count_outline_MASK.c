
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int page; struct TYPE_4__* next; struct TYPE_4__* down; scalar_t__ is_open; } ;
typedef TYPE_1__ fz_outline ;
struct TYPE_5__ {int page; } ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(fz_outline *VAR_3, int VAR_4)
{
 int VAR_5, VAR_6, VAR_7;
 int VAR_8 = 0;
 while (VAR_3)
 {
  VAR_7 = VAR_3->page;
  VAR_8 += 1;
  VAR_6 = VAR_4;
  if (VAR_3->next && VAR_3->next->page >= 0)
   VAR_6 = VAR_3->next->page;
  VAR_5 = 0;
  if (FUNC_0(VAR_0, VAR_2) == 1)
   VAR_5 = (VAR_7>=0) && (VAR_1.page == VAR_7 || (VAR_1.page > VAR_7 && VAR_1.page < VAR_6));
  if (VAR_3->down && (VAR_3->is_open || VAR_5))
   VAR_8 += FUNC_1(VAR_3->down, VAR_4);
  VAR_3 = VAR_3->next;
 }
 return VAR_8;
}
