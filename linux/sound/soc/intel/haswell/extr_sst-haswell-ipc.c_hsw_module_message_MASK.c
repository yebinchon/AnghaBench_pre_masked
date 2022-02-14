
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sst_hsw {int dev; } ;



 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct sst_hsw*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct sst_hsw *VAR_0, u32 VAR_1)
{
 u32 VAR_2, VAR_3;
 int VAR_4 = 0;

 VAR_2 = FUNC_3(VAR_1);
 VAR_3 = FUNC_2(VAR_1);
 FUNC_0(VAR_0->dev, "received module message header: 0x%8.8x\n",
   VAR_1);
 FUNC_0(VAR_0->dev, "operation: 0x%8.8x module_id: 0x%8.8x\n",
   VAR_2, VAR_3);

 switch (VAR_2) {
 case 128:
  FUNC_0(VAR_0->dev, "module notification received");
  VAR_4 = 1;
  break;
 default:
  VAR_4 = FUNC_1(VAR_0, VAR_1);
  break;
 }

 return VAR_4;
}
