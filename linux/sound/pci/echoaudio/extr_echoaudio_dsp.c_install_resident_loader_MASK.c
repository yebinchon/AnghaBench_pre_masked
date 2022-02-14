
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct firmware {scalar_t__ data; } ;
struct echoaudio {scalar_t__ device_id; TYPE_1__* card; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct firmware const*,struct echoaudio*) ;
 int FUNC_4 (struct echoaudio*,int ) ;
 int FUNC_5 (struct firmware const**,struct echoaudio*,int ) ;
 int FUNC_6 (struct echoaudio*,int ,int) ;
 int FUNC_7 (int) ;
 scalar_t__ FUNC_8 (struct echoaudio*,int) ;

__attribute__((used)) static int FUNC_9(struct echoaudio *VAR_6)
{
 u32 VAR_7;
 int VAR_8, VAR_9, VAR_10;
 u16 *VAR_11;
 u32 VAR_12;
 const struct firmware *VAR_13;



 if (VAR_6->device_id != VAR_3)
  return 0;



 VAR_12 = FUNC_4(VAR_6, VAR_1);
 if (VAR_12 & VAR_2) {
  FUNC_0(VAR_6->card->dev,
   "Resident loader already installed; status is 0x%x\n",
    VAR_12);
  return 0;
 }

 VAR_10 = FUNC_5(&VAR_13, VAR_6, VAR_5);
 if (VAR_10 < 0) {
  FUNC_2(VAR_6->card->dev, "Firmware not found !\n");
  return VAR_10;
 }
 FUNC_6(VAR_6, VAR_0,
    FUNC_4(VAR_6, VAR_0) | 0x900);

 VAR_11 = (u16 *)VAR_13->data;




 VAR_8 = VAR_11[0];


 VAR_8 += 3;


 VAR_9 = VAR_11[VAR_8++];


 VAR_7 = ((u32)VAR_11[VAR_8] << 16) + VAR_11[VAR_8 + 1];
 VAR_8 += 2;


 if (FUNC_8(VAR_6, VAR_9)) {
  FUNC_1(VAR_6->card->dev,
   "install_resident_loader: Failed to write word count!\n");
  goto irl_error;
 }

 if (FUNC_8(VAR_6, VAR_7)) {
  FUNC_1(VAR_6->card->dev,
   "install_resident_loader: Failed to write DSP address!\n");
  goto irl_error;
 }

 for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++) {
  u32 VAR_14;

  VAR_14 = ((u32)VAR_11[VAR_8] << 16) + VAR_11[VAR_8 + 1];
  if (FUNC_8(VAR_6, VAR_14)) {
   FUNC_1(VAR_6->card->dev,
    "install_resident_loader: Failed to write DSP code\n");
   goto irl_error;
  }
  VAR_8 += 2;
 }


 for (VAR_10 = 0; VAR_10 < 200; VAR_10++) {
  FUNC_7(50);
  VAR_12 = FUNC_4(VAR_6, VAR_1);
  if (VAR_12 & VAR_2)
   break;
 }

 if (VAR_10 == 200) {
  FUNC_1(VAR_6->card->dev, "Resident loader failed to set HF5\n");
  goto irl_error;
 }

 FUNC_0(VAR_6->card->dev, "Resident loader successfully installed\n");
 FUNC_3(VAR_13, VAR_6);
 return 0;

irl_error:
 FUNC_3(VAR_13, VAR_6);
 return -VAR_4;
}
