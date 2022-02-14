
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_emu10k1_memblk {scalar_t__ mapped_page; int pages; scalar_t__ map_locked; int mapped_order_link; } ;
struct list_head {struct list_head* next; } ;
struct snd_emu10k1 {int memblk_lock; struct list_head mapped_order_link_head; } ;


 struct snd_emu10k1_memblk* FUNC_0 (struct list_head*,int ) ;
 int FUNC_1 (int *,struct list_head*) ;
 int FUNC_2 (struct snd_emu10k1*,struct snd_emu10k1_memblk*) ;
 int VAR_0 ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (struct snd_emu10k1*,struct snd_emu10k1_memblk*) ;

int FUNC_6(struct snd_emu10k1 *VAR_1, struct snd_emu10k1_memblk *VAR_2)
{
 int VAR_3;
 int VAR_4;
 struct list_head *VAR_5, *VAR_6;
 struct snd_emu10k1_memblk *VAR_7;
 unsigned long VAR_8;

 FUNC_3(&VAR_1->memblk_lock, VAR_8);
 if (VAR_2->mapped_page >= 0) {

  FUNC_1(&VAR_2->mapped_order_link,
          &VAR_1->mapped_order_link_head);
  FUNC_4(&VAR_1->memblk_lock, VAR_8);
  return 0;
 }
 if ((VAR_3 = FUNC_2(VAR_1, VAR_2)) < 0) {


  VAR_5 = VAR_1->mapped_order_link_head.next;
  for (; VAR_5 != &VAR_1->mapped_order_link_head; VAR_5 = VAR_6) {
   VAR_6 = VAR_5->next;
   VAR_7 = FUNC_0(VAR_5, VAR_0);
   if (VAR_7->map_locked)
    continue;
   VAR_4 = FUNC_5(VAR_1, VAR_7);
   if (VAR_4 >= VAR_2->pages) {

    VAR_3 = FUNC_2(VAR_1, VAR_2);
    break;
   }
  }
 }
 FUNC_4(&VAR_1->memblk_lock, VAR_8);
 return VAR_3;
}
