
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ size; scalar_t__ offset; } ;
struct snd_emu10k1_memblk {int mapped_page; void* first_page; void* last_page; void* pages; TYPE_1__ mem; scalar_t__ map_locked; int mapped_order_link; int mapped_link; } ;


 int FUNC_0 (int *) ;
 void* FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct snd_emu10k1_memblk *VAR_0)
{
 VAR_0->mapped_page = -1;
 FUNC_0(&VAR_0->mapped_link);
 FUNC_0(&VAR_0->mapped_order_link);
 VAR_0->map_locked = 0;

 VAR_0->first_page = FUNC_1(VAR_0->mem.offset);
 VAR_0->last_page = FUNC_1(VAR_0->mem.offset + VAR_0->mem.size - 1);
 VAR_0->pages = VAR_0->last_page - VAR_0->first_page + 1;
}
