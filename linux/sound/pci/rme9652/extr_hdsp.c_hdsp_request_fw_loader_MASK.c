
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct hdsp {int io_type; int firmware_rev; int state; TYPE_2__* card; struct firmware const* firmware; TYPE_1__* pci; } ;
struct firmware {scalar_t__ size; } ;
struct TYPE_5__ {int dev; } ;
struct TYPE_4__ {int dev; } ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;


 int VAR_7 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct hdsp*) ;
 int FUNC_2 (struct firmware const*) ;
 scalar_t__ FUNC_3 (struct firmware const**,char const*,int *) ;
 int FUNC_4 (TYPE_2__*,struct hdsp*) ;
 int FUNC_5 (TYPE_2__*,struct hdsp*) ;
 int FUNC_6 (struct hdsp*) ;
 int FUNC_7 (struct hdsp*) ;
 int FUNC_8 (struct hdsp*) ;
 int FUNC_9 (struct hdsp*) ;

__attribute__((used)) static int FUNC_10(struct hdsp *VAR_8)
{
 const char *VAR_9;
 const struct firmware *VAR_10;
 int VAR_11;

 if (VAR_8->io_type == VAR_3 || VAR_8->io_type == VAR_2)
  return 0;
 if (VAR_8->io_type == VAR_7) {
  if ((VAR_11 = FUNC_1(VAR_8)) < 0)
   return VAR_11;
  if (VAR_8->io_type == VAR_3 || VAR_8->io_type == VAR_2)
   return 0;
 }


 switch (VAR_8->io_type) {
 case 128:
  VAR_9 = "rpm_firmware.bin";
  break;
 case 129:
  if (VAR_8->firmware_rev == 0xa)
   VAR_9 = "multiface_firmware.bin";
  else
   VAR_9 = "multiface_firmware_rev11.bin";
  break;
 case 130:
  if (VAR_8->firmware_rev == 0xa)
   VAR_9 = "digiface_firmware.bin";
  else
   VAR_9 = "digiface_firmware_rev11.bin";
  break;
 default:
  FUNC_0(VAR_8->card->dev,
   "invalid io_type %d\n", VAR_8->io_type);
  return -VAR_0;
 }

 if (FUNC_3(&VAR_10, VAR_9, &VAR_8->pci->dev)) {
  FUNC_0(VAR_8->card->dev,
   "cannot load firmware %s\n", VAR_9);
  return -VAR_1;
 }
 if (VAR_10->size < VAR_4) {
  FUNC_0(VAR_8->card->dev,
   "too short firmware size %d (expected %d)\n",
      (int)VAR_10->size, VAR_4);
  FUNC_2(VAR_10);
  return -VAR_0;
 }

 VAR_8->firmware = VAR_10;

 VAR_8->state |= VAR_5;

 if ((VAR_11 = FUNC_9(VAR_8)) < 0)
  return VAR_11;

 if (!(VAR_8->state & VAR_6)) {
  if ((VAR_11 = FUNC_6(VAR_8)) < 0)
   return VAR_11;

  if ((VAR_11 = FUNC_5(VAR_8->card, VAR_8)) < 0) {
   FUNC_0(VAR_8->card->dev,
    "error creating hwdep device\n");
   return VAR_11;
  }
  FUNC_7(VAR_8);
  FUNC_8(VAR_8);
  if ((VAR_11 = FUNC_4(VAR_8->card, VAR_8)) < 0) {
   FUNC_0(VAR_8->card->dev,
    "error creating alsa devices\n");
   return VAR_11;
  }
 }
 return 0;
}
