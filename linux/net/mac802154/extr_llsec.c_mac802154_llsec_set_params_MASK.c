
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int coord_shortaddr; int coord_hwaddr; int hwaddr; int pan_id; int default_key_source; int out_key; int out_level; int frame_counter; int enabled; } ;
struct mac802154_llsec {int lock; TYPE_1__ params; } ;
struct ieee802154_llsec_params {int coord_shortaddr; int coord_hwaddr; int hwaddr; int pan_id; int default_key_source; int out_key; int out_level; int frame_counter; int enabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

int FUNC_2(struct mac802154_llsec *VAR_9,
          const struct ieee802154_llsec_params *VAR_10,
          int VAR_11)
{
 FUNC_0(&VAR_9->lock);

 if (VAR_11 & VAR_2)
  VAR_9->params.enabled = VAR_10->enabled;
 if (VAR_11 & VAR_3)
  VAR_9->params.frame_counter = VAR_10->frame_counter;
 if (VAR_11 & VAR_7)
  VAR_9->params.out_level = VAR_10->out_level;
 if (VAR_11 & VAR_6)
  VAR_9->params.out_key = VAR_10->out_key;
 if (VAR_11 & VAR_5)
  VAR_9->params.default_key_source = VAR_10->default_key_source;
 if (VAR_11 & VAR_8)
  VAR_9->params.pan_id = VAR_10->pan_id;
 if (VAR_11 & VAR_4)
  VAR_9->params.hwaddr = VAR_10->hwaddr;
 if (VAR_11 & VAR_0)
  VAR_9->params.coord_hwaddr = VAR_10->coord_hwaddr;
 if (VAR_11 & VAR_1)
  VAR_9->params.coord_shortaddr = VAR_10->coord_shortaddr;

 FUNC_1(&VAR_9->lock);

 return 0;
}
