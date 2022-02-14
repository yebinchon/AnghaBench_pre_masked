
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tx_desc {int sdl; int cown; } ;
struct _tx_ring {int num_used; int free_index; struct tx_desc* desc; int * phys_tab; struct sk_buff** buff_tab; } ;
struct sw {int dev; struct _tx_ring tx_ring; } ;
struct sk_buff {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (struct _tx_ring*) ;

__attribute__((used)) static void FUNC_3(struct sw *VAR_2)
{
 struct _tx_ring *VAR_3 = &VAR_2->tx_ring;
 struct tx_desc *VAR_4;
 int VAR_5;
 int VAR_6;
 int VAR_7 = VAR_3->num_used;
 struct sk_buff *VAR_8;

 VAR_6 = VAR_3->free_index;
 VAR_4 = &(VAR_3)->desc[VAR_6];

 for (VAR_5 = 0; VAR_5 < VAR_7; VAR_5++) {
  if (!VAR_4->cown)
   break;

  VAR_8 = VAR_3->buff_tab[VAR_6];
  VAR_3->buff_tab[VAR_6] = 0;

  if (VAR_8)
   FUNC_0(VAR_8);

  FUNC_1(VAR_2->dev, VAR_3->phys_tab[VAR_6], VAR_4->sdl, VAR_0);

  if (VAR_6 == VAR_1 - 1) {
   VAR_6 = 0;
   VAR_4 = &(VAR_3)->desc[VAR_6];
  } else {
   VAR_6++;
   VAR_4++;
  }
 }

 VAR_3->free_index = VAR_6;
 VAR_3->num_used -= VAR_5;
 FUNC_2(VAR_3);
}
