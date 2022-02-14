
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sst_module {int state; } ;
struct sst_ipc_message {int header; int member_0; } ;
struct sst_hsw {int ipc; struct sst_dsp* dsp; struct device* dev; } ;
struct sst_dsp {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int FUNC_3 (struct device*,char*,int) ;
 int FUNC_4 (struct device*,char*,int) ;
 int FUNC_5 (struct device*,char*,int) ;
 int FUNC_6 (struct sst_hsw*,int) ;
 int FUNC_7 (struct sst_hsw*,int) ;
 int FUNC_8 (int *,struct sst_ipc_message,int *) ;
 struct sst_module* FUNC_9 (struct sst_dsp*,int) ;

int FUNC_10(struct sst_hsw *VAR_4,
 u32 VAR_5, u32 VAR_6)
{
 int VAR_7;
 struct sst_ipc_message VAR_8 = {0};
 struct sst_module *VAR_9;
 struct device *VAR_10 = VAR_4->dev;
 struct sst_dsp *VAR_11 = VAR_4->dsp;

 if (!FUNC_7(VAR_4, VAR_5)) {
  FUNC_3(VAR_10, "module %d not loaded\n", VAR_5);
  return 0;
 }

 if (!FUNC_6(VAR_4, VAR_5)) {
  FUNC_5(VAR_10, "module %d already disabled\n", VAR_5);
  return 0;
 }

 VAR_9 = FUNC_9(VAR_11, VAR_5);
 if (VAR_9 == ((void*)0)) {
  FUNC_4(VAR_10, "module %d not valid\n", VAR_5);
  return -VAR_0;
 }

 VAR_8.header = FUNC_0(VAR_1) |
   FUNC_2(VAR_2) |
   FUNC_1(VAR_5);

 VAR_7 = FUNC_8(&VAR_4->ipc, VAR_8, ((void*)0));
 if (VAR_7 < 0)
  FUNC_4(VAR_10, "module disable failed - %d\n", VAR_7);
 else
  VAR_9->state = VAR_3;

 return VAR_7;
}
