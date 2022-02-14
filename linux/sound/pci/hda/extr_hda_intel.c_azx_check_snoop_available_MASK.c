
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct azx {int snoop; int uc_buffer; scalar_t__ driver_type; int driver_caps; TYPE_1__* card; TYPE_2__* pci; } ;
struct TYPE_4__ {int revision; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (struct azx*) ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_4 ;
 int FUNC_2 (TYPE_2__*,int,int*) ;

__attribute__((used)) static void FUNC_3(struct azx *VAR_5)
{
 int VAR_6 = VAR_4;

 if (VAR_6 >= 0) {
  FUNC_1(VAR_5->card->dev, "Force to %s mode by module option\n",
    VAR_6 ? "snoop" : "non-snoop");
  VAR_5->snoop = VAR_6;
  VAR_5->uc_buffer = !VAR_6;
  return;
 }

 VAR_6 = 1;
 if (FUNC_0(VAR_5) == VAR_3 &&
     VAR_5->driver_type == VAR_2) {



  u8 VAR_7;
  FUNC_2(VAR_5->pci, 0x42, &VAR_7);
  if (!(VAR_7 & 0x80) && (VAR_5->pci->revision == 0x30 ||
          VAR_5->pci->revision == 0x20))
   VAR_6 = 0;
 }

 if (VAR_5->driver_caps & VAR_0)
  VAR_6 = 0;

 VAR_5->snoop = VAR_6;
 if (!VAR_6) {
  FUNC_1(VAR_5->card->dev, "Force to non-snoop mode\n");

  if (VAR_5->driver_type != VAR_1)
   VAR_5->uc_buffer = 1;
 }
}
