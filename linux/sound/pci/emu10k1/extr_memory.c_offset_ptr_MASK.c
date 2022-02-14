
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_emu10k1 {int max_cache_pages; char** page_ptr_table; TYPE_1__* card; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static inline void *FUNC_2(struct snd_emu10k1 *VAR_1, int VAR_2, int VAR_3)
{
 char *VAR_4;
 if (FUNC_1(VAR_2 < 0 || VAR_2 >= VAR_1->max_cache_pages))
  return ((void*)0);
 VAR_4 = VAR_1->page_ptr_table[VAR_2];
 if (! VAR_4) {
  FUNC_0(VAR_1->card->dev,
   "access to NULL ptr: page = %d\n", VAR_2);
  return ((void*)0);
 }
 VAR_4 += VAR_3 & (VAR_0 - 1);
 return (void*)VAR_4;
}
