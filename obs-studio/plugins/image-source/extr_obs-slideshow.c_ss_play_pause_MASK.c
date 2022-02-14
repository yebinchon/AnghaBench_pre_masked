
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slideshow {int paused; int manual; } ;



__attribute__((used)) static void FUNC_0(void *VAR_0)
{
 struct slideshow *VAR_1 = VAR_0;

 VAR_1->paused = !VAR_1->paused;
 VAR_1->manual = VAR_1->paused;
}
