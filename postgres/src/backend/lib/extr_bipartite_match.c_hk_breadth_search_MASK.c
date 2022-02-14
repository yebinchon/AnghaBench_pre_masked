
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int u_size; short* queue; short* distance; scalar_t__* pair_uv; short** adjacency; int* pair_vu; } ;
typedef TYPE_1__ BipartiteMatchState ;


 int FUNC_0 (int) ;
 short VAR_0 ;

__attribute__((used)) static bool
FUNC_1(BipartiteMatchState *VAR_1)
{
 int VAR_2 = VAR_1->u_size;
 short *VAR_3 = VAR_1->queue;
 short *VAR_4 = VAR_1->distance;
 int VAR_5 = 0;
 int VAR_6 = 0;
 int VAR_7;

 VAR_4[0] = VAR_0;

 for (VAR_7 = 1; VAR_7 <= VAR_2; VAR_7++)
 {
  if (VAR_1->pair_uv[VAR_7] == 0)
  {
   VAR_4[VAR_7] = 0;
   VAR_3[VAR_5++] = VAR_7;
  }
  else
   VAR_4[VAR_7] = VAR_0;
 }

 while (VAR_6 < VAR_5)
 {
  VAR_7 = VAR_3[VAR_6++];

  if (VAR_4[VAR_7] < VAR_4[0])
  {
   short *VAR_8 = VAR_1->adjacency[VAR_7];
   int VAR_9 = VAR_8 ? VAR_8[0] : 0;

   for (; VAR_9 > 0; VAR_9--)
   {
    int VAR_10 = VAR_1->pair_vu[VAR_8[VAR_9]];

    if (VAR_4[VAR_10] == VAR_0)
    {
     VAR_4[VAR_10] = 1 + VAR_4[VAR_7];
     FUNC_0(VAR_5 < VAR_2 + 2);
     VAR_3[VAR_5++] = VAR_10;
    }
   }
  }
 }

 return (VAR_4[0] != VAR_0);
}
