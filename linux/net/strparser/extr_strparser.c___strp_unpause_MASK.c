
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strparser {scalar_t__ need_bytes; scalar_t__ paused; } ;


 scalar_t__ FUNC_0 (struct strparser*) ;
 int FUNC_1 (struct strparser*) ;

void FUNC_2(struct strparser *VAR_0)
{
 VAR_0->paused = 0;

 if (VAR_0->need_bytes) {
  if (FUNC_0(VAR_0) < VAR_0->need_bytes)
   return;
 }
 FUNC_1(VAR_0);
}
