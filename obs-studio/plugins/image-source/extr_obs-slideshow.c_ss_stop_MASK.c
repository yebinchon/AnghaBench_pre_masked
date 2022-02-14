
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slideshow {float elapsed; int stop; int paused; scalar_t__ cur_item; } ;


 int FUNC_0 (struct slideshow*,int) ;

__attribute__((used)) static void FUNC_1(void *VAR_0)
{
 struct slideshow *VAR_1 = VAR_0;

 VAR_1->elapsed = 0.0f;
 VAR_1->cur_item = 0;

 FUNC_0(VAR_1, 1);
 VAR_1->stop = 1;
 VAR_1->paused = 0;
}
