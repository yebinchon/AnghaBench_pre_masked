
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_dai {unsigned int tx_mask; unsigned int rx_mask; TYPE_1__* driver; } ;
struct TYPE_4__ {int (* set_tdm_slot ) (struct snd_soc_dai*,unsigned int,unsigned int,int,int) ;int (* xlate_tdm_slot_mask ) (int,unsigned int*,unsigned int*) ;} ;
struct TYPE_3__ {TYPE_2__* ops; } ;


 int VAR_0 ;
 int FUNC_0 (int,unsigned int*,unsigned int*) ;
 int FUNC_1 (int,unsigned int*,unsigned int*) ;
 int FUNC_2 (struct snd_soc_dai*,unsigned int,unsigned int,int,int) ;

int FUNC_3(struct snd_soc_dai *VAR_1,
        unsigned int VAR_2, unsigned int VAR_3,
        int VAR_4, int VAR_5)
{
 if (VAR_1->driver->ops->xlate_tdm_slot_mask)
  VAR_1->driver->ops->xlate_tdm_slot_mask(VAR_4,
            &VAR_2, &VAR_3);
 else
  FUNC_0(VAR_4, &VAR_2, &VAR_3);

 VAR_1->tx_mask = VAR_2;
 VAR_1->rx_mask = VAR_3;

 if (VAR_1->driver->ops->set_tdm_slot)
  return VAR_1->driver->ops->set_tdm_slot(VAR_1, VAR_2, VAR_3,
            VAR_4, VAR_5);
 else
  return -VAR_0;
}
