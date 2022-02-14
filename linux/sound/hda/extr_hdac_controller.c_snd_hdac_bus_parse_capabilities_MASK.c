
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdac_bus {int dev; int remap_addr; int drsmcap; int spbcap; int ppcap; int gtscap; int mlcap; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;





 unsigned int VAR_5 ;
 int VAR_6 ;
 unsigned int FUNC_0 (struct hdac_bus*,unsigned int) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,char*,...) ;
 unsigned int FUNC_3 (struct hdac_bus*,int ) ;

int FUNC_4(struct hdac_bus *VAR_7)
{
 unsigned int VAR_8;
 unsigned int VAR_9;
 unsigned int VAR_10 = 0;

 VAR_9 = FUNC_3(VAR_7, VAR_6);


 do {
  VAR_8 = FUNC_0(VAR_7, VAR_9);

  FUNC_1(VAR_7->dev, "Capability version: 0x%x\n",
   (VAR_8 & VAR_3) >> VAR_4);

  FUNC_1(VAR_7->dev, "HDA capability ID: 0x%x\n",
   (VAR_8 & VAR_0) >> VAR_1);

  if (VAR_8 == -1) {
   FUNC_1(VAR_7->dev, "Invalid capability reg read\n");
   break;
  }

  switch ((VAR_8 & VAR_0) >> VAR_1) {
  case 130:
   FUNC_1(VAR_7->dev, "Found ML capability\n");
   VAR_7->mlcap = VAR_7->remap_addr + VAR_9;
   break;

  case 131:
   FUNC_1(VAR_7->dev, "Found GTS capability offset=%x\n", VAR_9);
   VAR_7->gtscap = VAR_7->remap_addr + VAR_9;
   break;

  case 129:

   FUNC_1(VAR_7->dev, "Found PP capability offset=%x\n", VAR_9);
   VAR_7->ppcap = VAR_7->remap_addr + VAR_9;
   break;

  case 128:

   FUNC_1(VAR_7->dev, "Found SPB capability\n");
   VAR_7->spbcap = VAR_7->remap_addr + VAR_9;
   break;

  case 132:

   FUNC_1(VAR_7->dev, "Found DRSM capability\n");
   VAR_7->drsmcap = VAR_7->remap_addr + VAR_9;
   break;

  default:
   FUNC_2(VAR_7->dev, "Unknown capability %d\n", VAR_8);
   VAR_8 = 0;
   break;
  }

  VAR_10++;

  if (VAR_10 > VAR_5) {
   FUNC_2(VAR_7->dev, "We exceeded HDAC capabilities!!!\n");
   break;
  }


  VAR_9 = VAR_8 & VAR_2;

 } while (VAR_9);

 return 0;
}
