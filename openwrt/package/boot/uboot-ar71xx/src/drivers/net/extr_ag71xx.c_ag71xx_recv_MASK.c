
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct eth_device {int name; scalar_t__ priv; } ;
struct ag71xx_ring {unsigned int curr; TYPE_1__* buf; } ;
struct ag71xx_desc {int ctrl; } ;
struct ag71xx {struct ag71xx_ring rx_ring; } ;
struct TYPE_2__ {struct ag71xx_desc* desc; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (char*,int ,unsigned int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (scalar_t__,int) ;
 scalar_t__* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (struct ag71xx_desc*) ;
 int FUNC_3 (struct ag71xx_desc*) ;
 int FUNC_4 (struct ag71xx*,int ) ;
 int FUNC_5 (struct ag71xx*,int ,int) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static int FUNC_7(struct eth_device *VAR_7)
{
    struct ag71xx *VAR_8 = (struct ag71xx *) VAR_7->priv;
 struct ag71xx_ring *VAR_9 = &VAR_8->rx_ring;

    for (;;) {
  unsigned int VAR_10 = VAR_9->curr % VAR_1;
  struct ag71xx_desc *VAR_11 = VAR_9->buf[VAR_10].desc;
  int VAR_12;

  if (FUNC_2(VAR_11))
   break;

  FUNC_0("%s: rx packets, curr=%u\n", VAR_7->name, VAR_9->curr);

        VAR_12 = FUNC_3(VAR_11);
  VAR_12 -= VAR_3;


  FUNC_1(VAR_4[VAR_10] , VAR_12);
  FUNC_6( (u32) VAR_4[VAR_10], VAR_5);

        VAR_9->buf[VAR_10].desc->ctrl = VAR_2;
  VAR_9->curr++;
  if (VAR_9->curr >= VAR_1){
   VAR_9->curr = 0;
  }

    }

 if ((FUNC_4(VAR_8, VAR_0) & VAR_6) == 0) {

  FUNC_5(VAR_8, VAR_0, VAR_6);
 }

 return 0;
}
