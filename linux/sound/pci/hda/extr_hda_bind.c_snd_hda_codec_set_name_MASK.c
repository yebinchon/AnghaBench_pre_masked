
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ addr; char* vendor_name; char* chip_name; } ;
struct hda_codec {TYPE_3__ core; TYPE_2__* bus; TYPE_1__* card; } ;
struct TYPE_5__ {scalar_t__ mixer_assigned; } ;
struct TYPE_4__ {int * mixername; } ;


 int FUNC_0 (TYPE_3__*,char const*) ;
 int FUNC_1 (int *,int,char*,char*,char*) ;

int FUNC_2(struct hda_codec *VAR_0, const char *VAR_1)
{
 int VAR_2;

 if (!VAR_1)
  return 0;
 VAR_2 = FUNC_0(&VAR_0->core, VAR_1);
 if (VAR_2 < 0)
  return VAR_2;


 if (!*VAR_0->card->mixername ||
     VAR_0->bus->mixer_assigned >= VAR_0->core.addr) {
  FUNC_1(VAR_0->card->mixername,
    sizeof(VAR_0->card->mixername), "%s %s",
    VAR_0->core.vendor_name, VAR_0->core.chip_name);
  VAR_0->bus->mixer_assigned = VAR_0->core.addr;
 }

 return 0;
}
