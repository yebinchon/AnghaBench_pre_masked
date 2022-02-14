
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct ui_progress {int next; int step; int total; char const* title; int size; scalar_t__ curr; } ;
struct TYPE_2__ {int (* init ) (struct ui_progress*) ;} ;


 int FUNC_0 (struct ui_progress*) ;
 TYPE_1__* VAR_0 ;

void FUNC_1(struct ui_progress *VAR_1, u64 VAR_2,
    const char *VAR_3, bool VAR_4)
{
 VAR_1->curr = 0;
 VAR_1->next = VAR_1->step = VAR_2 / 16 ?: 1;
 VAR_1->total = VAR_2;
 VAR_1->title = VAR_3;
 VAR_1->size = VAR_4;

 if (VAR_0->init)
  VAR_0->init(VAR_1);
}
