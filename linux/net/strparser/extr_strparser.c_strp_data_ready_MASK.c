
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strparser {scalar_t__ need_bytes; int work; int sk; scalar_t__ paused; int stopped; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct strparser*) ;
 int FUNC_3 (struct strparser*) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (int ) ;

void FUNC_5(struct strparser *VAR_2)
{
 if (FUNC_4(VAR_2->stopped) || VAR_2->paused)
  return;
 if (FUNC_1(VAR_2->sk)) {
  FUNC_0(VAR_1, &VAR_2->work);
  return;
 }

 if (VAR_2->need_bytes) {
  if (FUNC_2(VAR_2) < VAR_2->need_bytes)
   return;
 }

 if (FUNC_3(VAR_2) == -VAR_0)
  FUNC_0(VAR_1, &VAR_2->work);
}
