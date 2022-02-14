
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int nsessions; TYPE_1__** sessions; } ;
typedef TYPE_2__ TestSpec ;
struct TYPE_5__ {scalar_t__ nsteps; } ;
typedef int Step ;


 void* FUNC_0 (int) ;
 scalar_t__* VAR_0 ;
 int FUNC_1 (TYPE_2__*,int ,int **) ;

__attribute__((used)) static void
FUNC_2(TestSpec *VAR_1)
{
 int VAR_2;
 int VAR_3;
 Step **VAR_4;


 VAR_2 = 0;
 for (VAR_3 = 0; VAR_3 < VAR_1->nsessions; VAR_3++)
  VAR_2 += VAR_1->sessions[VAR_3]->nsteps;

 VAR_4 = FUNC_0(sizeof(Step *) * VAR_2);
 VAR_0 = FUNC_0(sizeof(int) * VAR_1->nsessions);
 for (VAR_3 = 0; VAR_3 < VAR_1->nsessions; VAR_3++)
  VAR_0[VAR_3] = 0;

 FUNC_1(VAR_1, 0, VAR_4);
}
