
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbitmap_word {int depth; int cleared; int word; } ;
struct sbitmap {unsigned int map_nr; struct sbitmap_word* map; } ;


 scalar_t__ FUNC_0 (int *,int ) ;

__attribute__((used)) static unsigned int FUNC_1(const struct sbitmap *VAR_0, bool VAR_1)
{
 unsigned int VAR_2, VAR_3 = 0;

 for (VAR_2 = 0; VAR_2 < VAR_0->map_nr; VAR_2++) {
  const struct sbitmap_word *VAR_4 = &VAR_0->map[VAR_2];

  if (VAR_1)
   VAR_3 += FUNC_0(&VAR_4->word, VAR_4->depth);
  else
   VAR_3 += FUNC_0(&VAR_4->cleared, VAR_4->depth);
 }
 return VAR_3;
}
