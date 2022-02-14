
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int use_posbuf; int corbrp_self_clear; int align_bdle_4k; int sync_write; int bdl_pos_adj; int snoop; } ;
struct hda_bus {char const* modelname; int mixer_assigned; int allow_bus_reset; TYPE_2__ core; int pci; int prepare_mutex; TYPE_1__* card; } ;
struct azx {scalar_t__* get_position; int driver_caps; TYPE_1__* card; int bdl_pos_adj; int pci; struct hda_bus bus; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct azx*) ;
 int VAR_4 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*,int ,int *) ;

int FUNC_4(struct azx *VAR_5, const char *VAR_6)
{
 struct hda_bus *VAR_7 = &VAR_5->bus;
 int VAR_8;

 VAR_8 = FUNC_3(&VAR_7->core, VAR_5->card->dev, &VAR_4);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_7->card = VAR_5->card;
 FUNC_2(&VAR_7->prepare_mutex);
 VAR_7->pci = VAR_5->pci;
 VAR_7->modelname = VAR_6;
 VAR_7->mixer_assigned = -1;
 VAR_7->core.snoop = FUNC_0(VAR_5);
 if (VAR_5->get_position[0] != VAR_3 ||
     VAR_5->get_position[1] != VAR_3)
  VAR_7->core.use_posbuf = 1;
 VAR_7->core.bdl_pos_adj = VAR_5->bdl_pos_adj;
 if (VAR_5->driver_caps & VAR_1)
  VAR_7->core.corbrp_self_clear = 1;

 if (VAR_5->driver_caps & VAR_0)
  VAR_7->core.align_bdle_4k = 1;





 if (VAR_5->driver_caps & VAR_2) {
  FUNC_1(VAR_5->card->dev, "Enable sync_write for stable communication\n");
  VAR_7->core.sync_write = 1;
  VAR_7->allow_bus_reset = 1;
 }

 return 0;
}
