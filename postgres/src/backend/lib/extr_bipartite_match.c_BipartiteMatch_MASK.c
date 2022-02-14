
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int u_size; int v_size; short** adjacency; short* pair_uv; short* pair_vu; short* distance; short* queue; scalar_t__ matching; } ;
typedef TYPE_1__ BipartiteMatchState ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int) ;
 TYPE_1__* FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;

BipartiteMatchState *
FUNC_6(int VAR_2, int VAR_3, short **VAR_4)
{
 BipartiteMatchState *VAR_5 = FUNC_4(sizeof(BipartiteMatchState));

 if (VAR_2 < 0 || VAR_2 >= VAR_1 ||
  VAR_3 < 0 || VAR_3 >= VAR_1)
  FUNC_1(VAR_0, "invalid set size for BipartiteMatch");

 VAR_5->u_size = VAR_2;
 VAR_5->v_size = VAR_3;
 VAR_5->adjacency = VAR_4;
 VAR_5->matching = 0;
 VAR_5->pair_uv = (short *) FUNC_5((VAR_2 + 1) * sizeof(short));
 VAR_5->pair_vu = (short *) FUNC_5((VAR_3 + 1) * sizeof(short));
 VAR_5->distance = (short *) FUNC_4((VAR_2 + 1) * sizeof(short));
 VAR_5->queue = (short *) FUNC_4((VAR_2 + 2) * sizeof(short));

 while (FUNC_2(VAR_5))
 {
  int VAR_6;

  for (VAR_6 = 1; VAR_6 <= VAR_2; VAR_6++)
  {
   if (VAR_5->pair_uv[VAR_6] == 0)
    if (FUNC_3(VAR_5, VAR_6))
     VAR_5->matching++;
  }

  FUNC_0();
 }

 return VAR_5;
}
