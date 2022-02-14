
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_emu10k1_memblk {int mapped_page; int first_page; int last_page; int mapped_order_link; int mapped_link; int pages; } ;
struct list_head {int dummy; } ;
struct snd_emu10k1 {int * page_addr_table; struct list_head mapped_order_link_head; TYPE_1__* card; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *,struct list_head*) ;
 int FUNC_2 (struct snd_emu10k1*,int ,struct list_head**) ;
 int FUNC_3 (struct snd_emu10k1*,int,int ) ;

__attribute__((used)) static int FUNC_4(struct snd_emu10k1 *VAR_1, struct snd_emu10k1_memblk *VAR_2)
{
 int VAR_3, VAR_4;
 struct list_head *VAR_5;

 VAR_3 = FUNC_2(VAR_1, VAR_2->pages, &VAR_5);
 if (VAR_3 < 0)
  return VAR_3;
 if (VAR_3 == 0) {
  FUNC_0(VAR_1->card->dev, "trying to map zero (reserved) page\n");
  return -VAR_0;
 }

 FUNC_1(&VAR_2->mapped_link, VAR_5);

 FUNC_1(&VAR_2->mapped_order_link, &VAR_1->mapped_order_link_head);
 VAR_2->mapped_page = VAR_3;

 for (VAR_4 = VAR_2->first_page; VAR_4 <= VAR_2->last_page; VAR_4++) {
  FUNC_3(VAR_1, VAR_3, VAR_1->page_addr_table[VAR_4]);
  VAR_3++;
 }
 return 0;
}
