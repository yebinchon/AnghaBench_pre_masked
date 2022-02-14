
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int depth; int visual; } ;
struct TYPE_4__ {int ** pool; TYPE_1__ visual; int * shminfo; int display; scalar_t__ lastused; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int ,int ,int *,int ,int ,int ) ;
 TYPE_2__ VAR_3 ;

__attribute__((used)) static int
FUNC_1(void)
{
 int VAR_4;

 VAR_3.lastused = 0;

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  VAR_3.pool[VAR_4] = ((void*)0);
 }

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  VAR_3.pool[VAR_4] = FUNC_0(VAR_3.display,
   VAR_3.visual.visual, &VAR_3.shminfo[VAR_4], VAR_3.visual.depth,
   VAR_2, VAR_0);
  if (!VAR_3.pool[VAR_4]) {
   return 0;
  }
 }

 return 1;
}
