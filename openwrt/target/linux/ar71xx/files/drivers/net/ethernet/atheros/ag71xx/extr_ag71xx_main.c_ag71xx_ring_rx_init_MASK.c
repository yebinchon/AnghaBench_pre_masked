
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct ag71xx_ring {scalar_t__ dirty; scalar_t__ curr; int * buf; scalar_t__ descs_dma; int order; } ;
struct ag71xx_desc {int ctrl; scalar_t__ next; } ;
struct ag71xx {struct ag71xx_ring rx_ring; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,struct ag71xx_desc*,scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct ag71xx*) ;
 int FUNC_3 (struct ag71xx*,int *,int,int ) ;
 struct ag71xx_desc* FUNC_4 (struct ag71xx_ring*,unsigned int) ;
 int VAR_3 ;
 int FUNC_5 () ;

__attribute__((used)) static int FUNC_6(struct ag71xx *VAR_4)
{
 struct ag71xx_ring *VAR_5 = &VAR_4->rx_ring;
 int VAR_6 = FUNC_0(VAR_5->order);
 int VAR_7 = FUNC_0(VAR_5->order) - 1;
 unsigned int VAR_8;
 int VAR_9;
 int VAR_10 = FUNC_2(VAR_4);

 VAR_9 = 0;
 for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++) {
  struct ag71xx_desc *VAR_11 = FUNC_4(VAR_5, VAR_8);

  VAR_11->next = (u32) (VAR_5->descs_dma +
   VAR_0 * ((VAR_8 + 1) & VAR_7));

  FUNC_1("ag71xx: RX desc at %p, next is %08x\n",
   VAR_11, VAR_11->next);
 }

 for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++) {
  struct ag71xx_desc *VAR_12 = FUNC_4(VAR_5, VAR_8);

  if (!FUNC_3(VAR_4, &VAR_5->buf[VAR_8], VAR_10,
     VAR_3)) {
   VAR_9 = -VAR_2;
   break;
  }

  VAR_12->ctrl = VAR_1;
 }


 FUNC_5();

 VAR_5->curr = 0;
 VAR_5->dirty = 0;

 return VAR_9;
}
