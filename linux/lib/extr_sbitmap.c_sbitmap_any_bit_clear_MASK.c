
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbitmap_word {unsigned long word; unsigned long cleared; unsigned long depth; } ;
struct sbitmap {unsigned int map_nr; struct sbitmap_word* map; } ;


 unsigned long FUNC_0 (unsigned long*,unsigned long) ;

bool FUNC_1(const struct sbitmap *VAR_0)
{
 unsigned int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->map_nr; VAR_1++) {
  const struct sbitmap_word *VAR_2 = &VAR_0->map[VAR_1];
  unsigned long VAR_3 = VAR_2->word & ~VAR_2->cleared;
  unsigned long VAR_4;

  VAR_4 = FUNC_0(&VAR_3, VAR_2->depth);
  if (VAR_4 < VAR_2->depth)
   return 1;
 }
 return 0;
}
