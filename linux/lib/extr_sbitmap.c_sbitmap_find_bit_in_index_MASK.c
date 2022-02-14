
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sbitmap {TYPE_1__* map; } ;
struct TYPE_2__ {int depth; int word; } ;


 int FUNC_0 (int *,int ,unsigned int,int) ;
 int FUNC_1 (struct sbitmap*,int) ;

__attribute__((used)) static int FUNC_2(struct sbitmap *VAR_0, int VAR_1,
         unsigned int VAR_2, bool VAR_3)
{
 int VAR_4;

 do {
  VAR_4 = FUNC_0(&VAR_0->map[VAR_1].word,
     VAR_0->map[VAR_1].depth, VAR_2,
     !VAR_3);
  if (VAR_4 != -1)
   break;
  if (!FUNC_1(VAR_0, VAR_1))
   break;
 } while (1);

 return VAR_4;
}
