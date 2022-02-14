
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct list_head* next; struct list_head* prev; } ;
struct snd_emu10k1_memblk {int mapped_page; int pages; int first_page; int last_page; TYPE_1__ mapped_order_link; TYPE_1__ mapped_link; } ;
struct list_head {int dummy; } ;
struct snd_emu10k1 {scalar_t__ address_mode; struct list_head mapped_link_head; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct snd_emu10k1_memblk* FUNC_0 (struct list_head*,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_2 (struct snd_emu10k1*,int) ;

__attribute__((used)) static int FUNC_3(struct snd_emu10k1 *VAR_3, struct snd_emu10k1_memblk *VAR_4)
{
 int VAR_5, VAR_6, VAR_7, VAR_8;
 struct list_head *VAR_9;
 struct snd_emu10k1_memblk *VAR_10;


 if ((VAR_9 = VAR_4->mapped_link.prev) != &VAR_3->mapped_link_head) {
  VAR_10 = FUNC_0(VAR_9, VAR_2);
  VAR_5 = VAR_10->mapped_page + VAR_10->pages;
 } else
  VAR_5 = 1;
 if ((VAR_9 = VAR_4->mapped_link.next) != &VAR_3->mapped_link_head) {
  VAR_10 = FUNC_0(VAR_9, VAR_2);
  VAR_6 = VAR_10->mapped_page;
 } else
  VAR_6 = (VAR_3->address_mode ? VAR_1 : VAR_0);


 FUNC_1(&VAR_4->mapped_link);
 FUNC_1(&VAR_4->mapped_order_link);

 VAR_7 = VAR_4->mapped_page;
 for (VAR_8 = VAR_4->first_page; VAR_8 <= VAR_4->last_page; VAR_8++) {
  FUNC_2(VAR_3, VAR_7);
  VAR_7++;
 }
 VAR_4->mapped_page = -1;
 return VAR_6 - VAR_5;
}
