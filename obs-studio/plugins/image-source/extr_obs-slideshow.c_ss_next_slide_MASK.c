
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ num; } ;
struct slideshow {scalar_t__ cur_item; TYPE_1__ files; int transition; } ;


 int FUNC_0 (struct slideshow*,int) ;
 float FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(void *VAR_0)
{
 struct slideshow *VAR_1 = VAR_0;

 if (!VAR_1->files.num || FUNC_1(VAR_1->transition) < 1.0f)
  return;

 if (++VAR_1->cur_item >= VAR_1->files.num)
  VAR_1->cur_item = 0;

 FUNC_0(VAR_1, 0);
}
