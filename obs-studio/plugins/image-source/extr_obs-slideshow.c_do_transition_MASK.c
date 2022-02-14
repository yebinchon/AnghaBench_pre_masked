
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {TYPE_2__* array; } ;
struct slideshow {size_t cur_item; int tr_speed; int transition; TYPE_1__ files; scalar_t__ use_cut; } ;
struct TYPE_4__ {int * source; } ;


 int VAR_0 ;
 int FUNC_0 (struct slideshow*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int ,int ,int *) ;

__attribute__((used)) static void FUNC_3(void *VAR_1, bool VAR_2)
{
 struct slideshow *VAR_3 = VAR_1;
 bool VAR_4 = FUNC_0(VAR_3);

 if (VAR_4 && VAR_3->use_cut)
  FUNC_1(VAR_3->transition,
       VAR_3->files.array[VAR_3->cur_item].source);

 else if (VAR_4 && !VAR_2)
  FUNC_2(VAR_3->transition, VAR_0,
         VAR_3->tr_speed,
         VAR_3->files.array[VAR_3->cur_item].source);

 else
  FUNC_2(VAR_3->transition, VAR_0,
         VAR_3->tr_speed, ((void*)0));
}
