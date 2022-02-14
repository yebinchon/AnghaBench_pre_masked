
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ag71xx_ring {scalar_t__ curr; int dirty; TYPE_2__* buf; int order; } ;
struct ag71xx_desc {int ctrl; } ;
struct ag71xx {TYPE_1__* dev; struct ag71xx_ring rx_ring; } ;
struct TYPE_4__ {int rx_buf; } ;
struct TYPE_3__ {int name; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,unsigned int) ;
 int VAR_0 ;
 int FUNC_2 (struct ag71xx*) ;
 int FUNC_3 (struct ag71xx*,TYPE_2__*,int,int ) ;
 struct ag71xx_desc* FUNC_4 (struct ag71xx_ring*,unsigned int) ;
 int VAR_1 ;
 int FUNC_5 () ;

__attribute__((used)) static int FUNC_6(struct ag71xx *VAR_2)
{
 struct ag71xx_ring *VAR_3 = &VAR_2->rx_ring;
 int VAR_4 = FUNC_0(VAR_3->order) - 1;
 unsigned int VAR_5;
 int VAR_6 = FUNC_2(VAR_2);

 VAR_5 = 0;
 for (; VAR_3->curr - VAR_3->dirty > 0; VAR_3->dirty++) {
  struct ag71xx_desc *VAR_7;
  unsigned int VAR_8;

  VAR_8 = VAR_3->dirty & VAR_4;
  VAR_7 = FUNC_4(VAR_3, VAR_8);

  if (!VAR_3->buf[VAR_8].rx_buf &&
      !FUNC_3(VAR_2, &VAR_3->buf[VAR_8], VAR_6,
     VAR_1))
   break;

  VAR_7->ctrl = VAR_0;
  VAR_5++;
 }


 FUNC_5();

 FUNC_1("%s: %u rx descriptors refilled\n", VAR_2->dev->name, VAR_5);

 return VAR_5;
}
