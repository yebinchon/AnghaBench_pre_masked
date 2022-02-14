
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {short* distance; short* pair_uv; short* pair_vu; short** adjacency; } ;
typedef TYPE_1__ BipartiteMatchState ;


 short VAR_0 ;
 int FUNC_0 () ;

__attribute__((used)) static bool
FUNC_1(BipartiteMatchState *VAR_1, int VAR_2)
{
 short *VAR_3 = VAR_1->distance;
 short *VAR_4 = VAR_1->pair_uv;
 short *VAR_5 = VAR_1->pair_vu;
 short *VAR_6 = VAR_1->adjacency[VAR_2];
 int VAR_7 = VAR_6 ? VAR_6[0] : 0;
 short VAR_8;

 if (VAR_2 == 0)
  return 1;
 if (VAR_3[VAR_2] == VAR_0)
  return 0;
 VAR_8 = VAR_3[VAR_2] + 1;

 FUNC_0();

 for (; VAR_7 > 0; VAR_7--)
 {
  int VAR_9 = VAR_6[VAR_7];

  if (VAR_3[VAR_5[VAR_9]] == VAR_8)
  {
   if (FUNC_1(VAR_1, VAR_5[VAR_9]))
   {
    VAR_5[VAR_9] = VAR_2;
    VAR_4[VAR_2] = VAR_9;
    return 1;
   }
  }
 }

 VAR_3[VAR_2] = VAR_0;
 return 0;
}
