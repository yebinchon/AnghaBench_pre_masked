
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct sst_generic_ipc {int dev; struct sst_dsp* dsp; } ;
struct sst_dsp {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,char const*,int ,int ,int ,int ) ;
 int FUNC_1 (struct sst_dsp*,int ) ;

__attribute__((used)) static void FUNC_2(struct sst_generic_ipc *VAR_4, const char *VAR_5)
{
 struct sst_dsp *VAR_6 = VAR_4->dsp;
 u64 VAR_7, VAR_8, VAR_9, VAR_10;

 VAR_10 = FUNC_1(VAR_6, VAR_2);
 VAR_7 = FUNC_1(VAR_6, VAR_3);
 VAR_8 = FUNC_1(VAR_6, VAR_1);
 VAR_9 = FUNC_1(VAR_6, VAR_0);

 FUNC_0(VAR_4->dev,
  "ipc: --%s-- ipcx 0x%llx isr 0x%llx ipcd 0x%llx imrx 0x%llx\n",
  VAR_5, VAR_10, VAR_7, VAR_8, VAR_9);
}
