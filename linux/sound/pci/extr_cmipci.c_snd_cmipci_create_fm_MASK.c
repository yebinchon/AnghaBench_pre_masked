
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_opl3 {int dummy; } ;
struct cmipci {int chip_version; long iobase; TYPE_1__* card; } ;
struct TYPE_2__ {int dev; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 long VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct cmipci*,int ,unsigned int) ;
 unsigned int FUNC_2 (struct cmipci*,int ) ;
 int FUNC_3 (struct cmipci*,int ,unsigned int) ;
 int FUNC_4 (struct cmipci*,int ,unsigned int) ;
 int FUNC_5 (TYPE_1__*,long,long,int ,int,struct snd_opl3**) ;
 int FUNC_6 (struct snd_opl3*,int ,int,int *) ;

__attribute__((used)) static int FUNC_7(struct cmipci *VAR_11, long VAR_12)
{
 long VAR_13;
 unsigned int VAR_14;
 struct snd_opl3 *VAR_15;
 int VAR_16;

 if (!VAR_12)
  goto disable_fm;

 if (VAR_11->chip_version >= 39) {

  VAR_13 = VAR_11->iobase + VAR_6;
  VAR_16 = FUNC_5(VAR_11->card, VAR_13, VAR_13 + 2,
          VAR_10, 1, &VAR_15);
 } else {
  VAR_16 = -VAR_9;
 }
 if (VAR_16 < 0) {

  VAR_14 = FUNC_2(VAR_11, VAR_7) & ~VAR_4;
  VAR_13 = VAR_12;
  switch (VAR_13) {
  case 0x3E8: VAR_14 |= VAR_3; break;
  case 0x3E0: VAR_14 |= VAR_2; break;
  case 0x3C8: VAR_14 |= VAR_1; break;
  case 0x388: VAR_14 |= VAR_0; break;
  default:
   goto disable_fm;
  }
  FUNC_4(VAR_11, VAR_7, VAR_14);

  FUNC_3(VAR_11, VAR_8, VAR_5);

  if (FUNC_5(VAR_11->card, VAR_13, VAR_13 + 2,
        VAR_10, 0, &VAR_15) < 0) {
   FUNC_0(VAR_11->card->dev,
    "no OPL device at %#lx, skipping...\n",
    VAR_13);
   goto disable_fm;
  }
 }
 if ((VAR_16 = FUNC_6(VAR_15, 0, 1, ((void*)0))) < 0) {
  FUNC_0(VAR_11->card->dev, "cannot create OPL3 hwdep\n");
  return VAR_16;
 }
 return 0;

 disable_fm:
 FUNC_1(VAR_11, VAR_7, VAR_4);
 FUNC_1(VAR_11, VAR_8, VAR_5);
 return 0;
}
