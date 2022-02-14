
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int nsessions; TYPE_1__** sessions; } ;
typedef TYPE_2__ TestSpec ;
struct TYPE_5__ {size_t nsteps; int ** steps; } ;
typedef int Step ;


 size_t* VAR_0 ;
 int FUNC_0 (TYPE_2__*,int,int **) ;

__attribute__((used)) static void
FUNC_1(TestSpec *VAR_1, int VAR_2, Step **VAR_3)
{
 int VAR_4;
 int VAR_5 = 0;

 for (VAR_4 = 0; VAR_4 < VAR_1->nsessions; VAR_4++)
 {

  if (VAR_0[VAR_4] < VAR_1->sessions[VAR_4]->nsteps)
  {
   VAR_3[VAR_2] = VAR_1->sessions[VAR_4]->steps[VAR_0[VAR_4]];
   VAR_0[VAR_4]++;

   FUNC_1(VAR_1, VAR_2 + 1, VAR_3);

   VAR_0[VAR_4]--;

   VAR_5 = 1;
  }
 }


 if (!VAR_5)
  FUNC_0(VAR_1, VAR_2, VAR_3);
}
