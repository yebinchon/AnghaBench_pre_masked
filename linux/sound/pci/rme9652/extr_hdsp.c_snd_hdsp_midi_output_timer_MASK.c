
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct hdsp_midi {int lock; int timer; scalar_t__ istimer; } ;


 struct hdsp_midi* FUNC_0 (int ,struct timer_list*,int ) ;
 struct hdsp_midi* VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (struct hdsp_midi*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_5(struct timer_list *VAR_3)
{
 struct hdsp_midi *VAR_4 = FUNC_0(VAR_4, VAR_3, VAR_2);
 unsigned long VAR_5;

 FUNC_2(VAR_4);
 FUNC_3 (&VAR_4->lock, VAR_5);







 if (VAR_4->istimer)
  FUNC_1(&VAR_4->timer, 1 + VAR_1);

 FUNC_4 (&VAR_4->lock, VAR_5);
}
