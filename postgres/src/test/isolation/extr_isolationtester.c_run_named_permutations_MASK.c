
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int npermutations; int nallsteps; int allsteps; TYPE_2__** permutations; } ;
typedef TYPE_1__ TestSpec ;
struct TYPE_6__ {int nsteps; char** stepnames; } ;
typedef int Step ;
typedef TYPE_2__ Permutation ;


 scalar_t__ FUNC_0 (char*,int ,int ,int,int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,char*) ;
 int FUNC_3 (int **) ;
 int ** FUNC_4 (int) ;
 int FUNC_5 (TYPE_1__*,int,int **) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_6(TestSpec *VAR_2)
{
 int VAR_3,
    VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_2->npermutations; VAR_3++)
 {
  Permutation *VAR_5 = VAR_2->permutations[VAR_3];
  Step **VAR_6;

  VAR_6 = FUNC_4(VAR_5->nsteps * sizeof(Step *));


  for (VAR_4 = 0; VAR_4 < VAR_5->nsteps; VAR_4++)
  {
   Step **VAR_7 = (Step **) FUNC_0(VAR_5->stepnames[VAR_4],
             VAR_2->allsteps,
             VAR_2->nallsteps,
             sizeof(Step *),
             &VAR_1);

   if (VAR_7 == ((void*)0))
   {
    FUNC_2(VAR_0, "undefined step \"%s\" specified in permutation\n",
      VAR_5->stepnames[VAR_4]);
    FUNC_1(1);
   }
   VAR_6[VAR_4] = *VAR_7;
  }


  FUNC_5(VAR_2, VAR_5->nsteps, VAR_6);

  FUNC_3(VAR_6);
 }
}
