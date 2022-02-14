
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sbitmap {unsigned int map_nr; unsigned int shift; TYPE_1__* map; } ;
struct TYPE_2__ {int depth; int word; } ;


 int FUNC_0 (struct sbitmap*,unsigned int) ;
 unsigned int FUNC_1 (struct sbitmap*,unsigned int) ;
 int FUNC_2 (int *,int ,int ,int) ;
 int FUNC_3 (int ,unsigned long) ;
 scalar_t__ FUNC_4 (struct sbitmap*,unsigned int) ;

int FUNC_5(struct sbitmap *VAR_0, unsigned int VAR_1,
   unsigned long VAR_2)
{
 unsigned int VAR_3, VAR_4;
 int VAR_5 = -1;

 VAR_4 = FUNC_1(VAR_0, VAR_1);

 for (VAR_3 = 0; VAR_3 < VAR_0->map_nr; VAR_3++) {
again:
  VAR_5 = FUNC_2(&VAR_0->map[VAR_4].word,
     FUNC_3(VAR_0->map[VAR_4].depth, VAR_2),
     FUNC_0(VAR_0, VAR_1), 1);
  if (VAR_5 != -1) {
   VAR_5 += VAR_4 << VAR_0->shift;
   break;
  }

  if (FUNC_4(VAR_0, VAR_4))
   goto again;


  VAR_4++;
  VAR_1 = VAR_4 << VAR_0->shift;

  if (VAR_4 >= VAR_0->map_nr) {
   VAR_4 = 0;
   VAR_1 = 0;
  }
 }

 return VAR_5;
}
