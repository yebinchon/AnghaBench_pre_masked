
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct snd_mixart {int card; int mgr; } ;
struct TYPE_3__ {int addr; } ;
struct mixart_mgr {int board_type; int num_cards; TYPE_2__* pci; struct snd_mixart** chip; TYPE_1__ flowinfo; } ;
struct firmware {int size; scalar_t__ data; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct mixart_mgr*,int) ;

 int VAR_7 ;

 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int ,scalar_t__,int) ;
 int FUNC_4 (struct mixart_mgr*) ;
 int FUNC_5 (struct mixart_mgr*,struct firmware const*) ;
 int FUNC_6 (struct mixart_mgr*,int,int,int,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct snd_mixart*) ;
 int FUNC_11 (struct mixart_mgr*) ;
 int FUNC_12 (int,int ) ;

__attribute__((used)) static int FUNC_13(struct mixart_mgr* VAR_18, int VAR_19, const struct firmware *VAR_20)
{
 int VAR_21, VAR_22;
 u32 VAR_23, VAR_24, VAR_25;
 u32 VAR_26;


 VAR_23 = FUNC_7( FUNC_0( VAR_18,VAR_17 ));

 VAR_24 = FUNC_7( FUNC_0( VAR_18,VAR_14 ));

 VAR_25 = FUNC_7( FUNC_0( VAR_18,VAR_13 ));


 if (VAR_23 == 5) {
  FUNC_2(&VAR_18->pci->dev, "miXart is resetting !\n");
  return -VAR_1;
 }

 switch (VAR_19) {
 case 128:


  if (VAR_23 == 4) {
   FUNC_1(&VAR_18->pci->dev, "xilinx is already loaded !\n");
   return 0;
  }

  if (VAR_23 != 0) {
   FUNC_2(&VAR_18->pci->dev,
    "xilinx load error ! status = %d\n",
       VAR_23);
   return -VAR_3;
  }


  if (((u32*)(VAR_20->data))[0] == 0xffffffff)
   return -VAR_2;
  if (VAR_20->size % 4)
   return -VAR_2;


  FUNC_12( 1, FUNC_0( VAR_18, VAR_17 ));


  FUNC_12( VAR_7, FUNC_0( VAR_18,VAR_15 ));

  FUNC_12( VAR_20->size, FUNC_0( VAR_18, VAR_16 ));


  FUNC_3( FUNC_0( VAR_18, VAR_7), VAR_20->data, VAR_20->size);


  FUNC_12( 2, FUNC_0( VAR_18, VAR_17 ));


  return 0;

 case 129:

  if (VAR_24 == 4) {
   FUNC_1(&VAR_18->pci->dev, "elf file already loaded !\n");
   return 0;
  }


  if (VAR_24 != 0) {
   FUNC_2(&VAR_18->pci->dev,
    "elf load error ! status = %d\n",
       VAR_24);
   return -VAR_3;
  }


  VAR_21 = FUNC_6( VAR_18, VAR_17, 1, 4, 500);
  if (VAR_21 < 0) {
   FUNC_2(&VAR_18->pci->dev, "xilinx was not loaded or "
       "could not be started\n");
   return VAR_21;
  }


  FUNC_12( 0, FUNC_0( VAR_18, VAR_8 ) );
  FUNC_12( 0, FUNC_0( VAR_18, VAR_6 ) );


  FUNC_12( 1, FUNC_0( VAR_18, VAR_14 ));


  VAR_21 = FUNC_5( VAR_18, VAR_20 );
  if (VAR_21 < 0) return VAR_21;


  FUNC_12( 2, FUNC_0( VAR_18, VAR_14 ));


  VAR_21 = FUNC_6( VAR_18, VAR_14, 1, 4, 300);
  if (VAR_21 < 0) {
   FUNC_2(&VAR_18->pci->dev, "elf could not be started\n");
   return VAR_21;
  }


  FUNC_12( (u32)VAR_18->flowinfo.addr, FUNC_0( VAR_18, VAR_6 ) );

  return 0;

 case 130:
 default:


  if (VAR_24 != 4 || VAR_23 != 4) {
   FUNC_2(&VAR_18->pci->dev, "xilinx or elf not "
          "successfully loaded\n");
   return -VAR_3;
  }


  VAR_21 = FUNC_6( VAR_18, VAR_9, 0, 0, 30);
  if (VAR_21 < 0) {
   FUNC_2(&VAR_18->pci->dev, "error starting elf file\n");
   return VAR_21;
  }


  VAR_18->board_type = (VAR_0 & FUNC_7( FUNC_0( VAR_18, VAR_10)));

  if (VAR_18->board_type == VAR_5)
   break;


  if (VAR_18->board_type != VAR_4 )
   return -VAR_2;


  if (VAR_25 != 0) {
   FUNC_2(&VAR_18->pci->dev,
    "daughter load error ! status = %d\n",
          VAR_25);
   return -VAR_3;
  }


  if (((u32*)(VAR_20->data))[0] == 0xffffffff)
   return -VAR_2;
  if (VAR_20->size % 4)
   return -VAR_2;


  FUNC_12( VAR_20->size, FUNC_0( VAR_18, VAR_12 ));


  FUNC_12( 1, FUNC_0( VAR_18, VAR_13 ));


  VAR_21 = FUNC_6( VAR_18, VAR_13, 1, 2, 30);
  if (VAR_21 < 0) {
   FUNC_2(&VAR_18->pci->dev, "daughter board load error\n");
   return VAR_21;
  }


  VAR_26 = FUNC_7( FUNC_0( VAR_18, VAR_11 ));
  if (!VAR_26)
   return -VAR_2;


  FUNC_3( FUNC_0( VAR_18, VAR_26), VAR_20->data, VAR_20->size);


  FUNC_12( 4, FUNC_0( VAR_18, VAR_13 ));


  break;
 }


        VAR_21 = FUNC_6( VAR_18, VAR_13, 1, 3, 300);
        if (VAR_21 < 0) {
  FUNC_2(&VAR_18->pci->dev,
      "daughter board could not be initialised\n");
  return VAR_21;
 }


 FUNC_11(VAR_18);


 VAR_21 = FUNC_4(VAR_18);
        if (VAR_21 < 0) {
  FUNC_2(&VAR_18->pci->dev, "miXart could not be set up\n");
  return VAR_21;
 }


        for (VAR_22 = 0; VAR_22 < VAR_18->num_cards; VAR_22++) {
  struct snd_mixart *VAR_27 = VAR_18->chip[VAR_22];

  if ((VAR_21 = FUNC_10(VAR_27)) < 0)
   return VAR_21;

  if (VAR_22 == 0) {
   if ((VAR_21 = FUNC_9(VAR_27->mgr)) < 0)
           return VAR_21;
  }

  if ((VAR_21 = FUNC_8(VAR_27->card)) < 0)
   return VAR_21;
 }

 FUNC_1(&VAR_18->pci->dev,
  "miXart firmware downloaded and successfully set up\n");

 return 0;
}
