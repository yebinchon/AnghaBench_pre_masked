
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct azx {int driver_caps; TYPE_1__* card; int pci; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned short VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (struct azx*) ;
 char* FUNC_1 (struct azx*) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int ,int ,unsigned short*) ;
 int FUNC_4 (int ,int ,unsigned short) ;
 int FUNC_5 (int ,int ,int,int ) ;

__attribute__((used)) static void FUNC_6(struct azx *VAR_14)
{
 int VAR_15 = FUNC_0(VAR_14);







 if (!(VAR_14->driver_caps & VAR_2)) {
  FUNC_2(VAR_14->card->dev, "Clearing TCSEL\n");
  FUNC_5(VAR_14->pci, VAR_3, 0x07, 0);
 }




 if (VAR_15 == VAR_4) {
  FUNC_2(VAR_14->card->dev, "Setting ATI snoop: %d\n",
   FUNC_1(VAR_14));
  FUNC_5(VAR_14->pci,
    VAR_1, 0x07,
    FUNC_1(VAR_14) ? VAR_0 : 0);
 }


 if (VAR_15 == VAR_5) {
  FUNC_2(VAR_14->card->dev, "Setting Nvidia snoop: %d\n",
   FUNC_1(VAR_14));
  FUNC_5(VAR_14->pci,
    VAR_13,
    0x0f, VAR_10);
  FUNC_5(VAR_14->pci,
    VAR_11,
    0x01, VAR_9);
  FUNC_5(VAR_14->pci,
    VAR_12,
    0x01, VAR_9);
 }


 if (VAR_15 == VAR_6) {
  unsigned short VAR_16;
  FUNC_3(VAR_14->pci, VAR_7, &VAR_16);
  if ((!FUNC_1(VAR_14) && !(VAR_16 & VAR_8)) ||
      (FUNC_1(VAR_14) && (VAR_16 & VAR_8))) {
   VAR_16 &= ~VAR_8;
   if (!FUNC_1(VAR_14))
    VAR_16 |= VAR_8;
   FUNC_4(VAR_14->pci, VAR_7, VAR_16);
   FUNC_3(VAR_14->pci,
    VAR_7, &VAR_16);
  }
  FUNC_2(VAR_14->card->dev, "SCH snoop: %s\n",
   (VAR_16 & VAR_8) ?
   "Disabled" : "Enabled");
        }
}
