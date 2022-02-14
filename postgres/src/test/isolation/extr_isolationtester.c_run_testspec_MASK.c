
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int nallsteps; TYPE_1__** allsteps; scalar_t__ permutations; } ;
typedef TYPE_2__ TestSpec ;
struct TYPE_6__ {char* name; int used; } ;


 int FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_3(TestSpec *VAR_1)
{
 int VAR_2;

 if (VAR_1->permutations)
  FUNC_2(VAR_1);
 else
  FUNC_1(VAR_1);





 for (VAR_2 = 0; VAR_2 < VAR_1->nallsteps; VAR_2++)
 {
  if (!VAR_1->allsteps[VAR_2]->used)
   FUNC_0(VAR_0, "unused step name: %s\n",
     VAR_1->allsteps[VAR_2]->name);
 }
}
