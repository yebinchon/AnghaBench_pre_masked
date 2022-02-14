
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sst_hsw {int dev; int boot_complete; struct sst_dsp* dsp; } ;
struct sst_dsp {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int,int) ;
 int FUNC_1 (struct sst_hsw*,int) ;
 int FUNC_2 (struct sst_hsw*,int) ;
 int FUNC_3 (struct sst_hsw*,int) ;
 int FUNC_4 (struct sst_hsw*,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct sst_dsp*,int ) ;
 int FUNC_7 (char*,int) ;

__attribute__((used)) static int FUNC_8(struct sst_hsw *VAR_2)
{
 struct sst_dsp *VAR_3 = VAR_2->dsp;
 u32 VAR_4, VAR_5;
 int VAR_6 = 1;

 VAR_5 = FUNC_6(VAR_3, VAR_1);
 VAR_4 = FUNC_5(VAR_5);

 FUNC_7("processing -->", VAR_5);


 if (!VAR_2->boot_complete && VAR_5 & VAR_0) {
  FUNC_1(VAR_2, VAR_5);
  return VAR_6;
 }

 switch (VAR_4) {
 case 136:
 case 142:
 case 139:
 case 137:
 case 132:
 case 138:
 case 130:
 case 140:
 case 135:
 case 134:
 case 131:
 case 129:
  FUNC_0(VAR_2->dev, "error: message type %d header 0x%x\n",
   VAR_4, VAR_5);
  break;
 case 128:
  VAR_6 = FUNC_4(VAR_2, VAR_5);
  break;
 case 141:
  VAR_6 = FUNC_2(VAR_2, VAR_5);
  break;
 case 133:
  VAR_6 = FUNC_3(VAR_2, VAR_5);
  break;
 default:
  FUNC_0(VAR_2->dev, "error: unexpected type %d hdr 0x%8.8x\n",
   VAR_4, VAR_5);
  break;
 }

 return VAR_6;
}
