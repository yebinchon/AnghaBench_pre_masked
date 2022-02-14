
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_progress {int next; int step; int total; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct ui_progress *VAR_1)
{
 VAR_1->next = VAR_1->step = VAR_1->total / (VAR_0 - 2) ?: 1;
}
