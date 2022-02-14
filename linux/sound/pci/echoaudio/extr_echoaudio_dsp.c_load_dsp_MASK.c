
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct echoaudio {int* dsp_code; int bad_board; int asic_loaded; int comm_page_phys; TYPE_1__* card; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct echoaudio*,int ) ;
 int FUNC_4 (struct echoaudio*) ;
 scalar_t__ FUNC_5 (struct echoaudio*) ;
 scalar_t__ FUNC_6 (struct echoaudio*,int ) ;
 int FUNC_7 (struct echoaudio*,int ,int) ;
 int FUNC_8 (int) ;
 scalar_t__ FUNC_9 (struct echoaudio*,int) ;

__attribute__((used)) static int FUNC_10(struct echoaudio *VAR_7, u16 *VAR_8)
{
 u32 VAR_9, VAR_10;
 int VAR_11, VAR_12, VAR_13;

 if (VAR_7->dsp_code == VAR_8) {
  FUNC_2(VAR_7->card->dev, "DSP is already loaded!\n");
  return 0;
 }
 VAR_7->bad_board = 1;
 VAR_7->dsp_code = ((void*)0);
 VAR_7->asic_loaded = 0;

 FUNC_0(VAR_7->card->dev, "load_dsp: Set bad_board to true\n");
 if (FUNC_6(VAR_7, VAR_5) < 0) {
  FUNC_1(VAR_7->card->dev,
   "LoadDsp: send_vector DSP_VC_RESET failed, Critical Failure\n");
  return -VAR_6;
 }

 FUNC_8(10);


 for (VAR_13 = 0; VAR_13 < 1000; VAR_13++) {
  if (FUNC_3(VAR_7, VAR_1) &
      VAR_2)
   break;
  FUNC_8(10);
 }

 if (VAR_13 == 1000) {
  FUNC_1(VAR_7->card->dev,
   "load_dsp: Timeout waiting for CHI32_STATUS_REG_HF3\n");
  return -VAR_6;
 }


 FUNC_7(VAR_7, VAR_0,
    FUNC_3(VAR_7, VAR_0) | 0x900);



 VAR_11 = VAR_8[0];
 for (;;) {
  int VAR_14, VAR_15;


  VAR_11++;


  VAR_14 = VAR_8[VAR_11];
  if (VAR_14 == 4)
   break;

  VAR_11++;


  VAR_15 = VAR_8[VAR_11++];


  VAR_12 = VAR_8[VAR_11++];
  if (VAR_12 == 0)
   break;


  VAR_9 = ((u32)VAR_8[VAR_11] << 16) + VAR_8[VAR_11 + 1];
  VAR_11 += 2;

  if (FUNC_9(VAR_7, VAR_12) < 0) {
   FUNC_1(VAR_7->card->dev,
    "load_dsp: failed to write number of DSP words\n");
   return -VAR_6;
  }
  if (FUNC_9(VAR_7, VAR_9) < 0) {
   FUNC_1(VAR_7->card->dev,
    "load_dsp: failed to write DSP address\n");
   return -VAR_6;
  }
  if (FUNC_9(VAR_7, VAR_15) < 0) {
   FUNC_1(VAR_7->card->dev,
    "load_dsp: failed to write DSP memory type\n");
   return -VAR_6;
  }

  for (VAR_13 = 0; VAR_13 < VAR_12; VAR_13++, VAR_11+=2) {
   VAR_10 = ((u32)VAR_8[VAR_11] << 16) + VAR_8[VAR_11 + 1];
   if (FUNC_9(VAR_7, VAR_10) < 0) {
    FUNC_1(VAR_7->card->dev,
     "load_dsp: failed to write DSP data\n");
    return -VAR_6;
   }
  }
 }

 if (FUNC_9(VAR_7, 0) < 0) {
  FUNC_1(VAR_7->card->dev,
   "load_dsp: Failed to write final zero\n");
  return -VAR_6;
 }
 FUNC_8(10);

 for (VAR_13 = 0; VAR_13 < 5000; VAR_13++) {

  if (FUNC_3(VAR_7, VAR_1) &
      VAR_3) {
   FUNC_7(VAR_7, VAR_0,
      FUNC_3(VAR_7, VAR_0) & ~0x1b00);

   if (FUNC_9(VAR_7, VAR_4) < 0) {
    FUNC_1(VAR_7->card->dev,
     "load_dsp: Failed to write DSP_FNC_SET_COMMPAGE_ADDR\n");
    return -VAR_6;
   }

   if (FUNC_9(VAR_7, VAR_7->comm_page_phys) < 0) {
    FUNC_1(VAR_7->card->dev,
     "load_dsp: Failed to write comm page address\n");
    return -VAR_6;
   }





   if (FUNC_5(VAR_7) < 0) {
    FUNC_1(VAR_7->card->dev,
     "load_dsp: Failed to read serial number\n");
    return -VAR_6;
   }

   VAR_7->dsp_code = VAR_8;
   VAR_7->bad_board = 0;
   return 0;
  }
  FUNC_8(100);
 }

 FUNC_1(VAR_7->card->dev,
  "load_dsp: DSP load timed out waiting for HF4\n");
 return -VAR_6;
}
