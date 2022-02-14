
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u32 ;
struct ag71xx_ring {unsigned int desc_size; scalar_t__ curr; TYPE_1__* buf; scalar_t__ descs_dma; } ;
struct ag71xx {struct ag71xx_ring rx_ring; } ;
struct TYPE_4__ {int ctrl; void* data; void* next; } ;
struct TYPE_3__ {TYPE_2__* desc; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (char*,TYPE_2__*,void*) ;
 int VAR_1 ;
 scalar_t__* VAR_2 ;
 scalar_t__ FUNC_1 (scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct ag71xx *VAR_3)
{
 struct ag71xx_ring *VAR_4 = &VAR_3->rx_ring;
 unsigned int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  VAR_4->buf[VAR_5].desc->next = (u32) FUNC_1((VAR_4->descs_dma +
   VAR_4->desc_size * ((VAR_5 + 1) % VAR_0)));

  FUNC_0("ag71xx: RX desc at %p, next is %08x\n",
   VAR_4->buf[VAR_5].desc,
   VAR_4->buf[VAR_5].desc->next);
 }

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  VAR_4->buf[VAR_5].desc->data = (u32) FUNC_1(VAR_2[VAR_5]);
  VAR_4->buf[VAR_5].desc->ctrl = VAR_1;
 }

 VAR_4->curr = 0;

 return 0;
}
