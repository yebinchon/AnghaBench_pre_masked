
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* array; } ;
struct slideshow {float elapsed; size_t cur_item; int stop; int paused; TYPE_2__ files; int transition; } ;
struct TYPE_3__ {int source; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1(void *VAR_0)
{
 struct slideshow *VAR_1 = VAR_0;

 VAR_1->elapsed = 0.0f;
 VAR_1->cur_item = 0;

 FUNC_0(VAR_1->transition,
      VAR_1->files.array[VAR_1->cur_item].source);

 VAR_1->stop = 0;
 VAR_1->paused = 0;
}
