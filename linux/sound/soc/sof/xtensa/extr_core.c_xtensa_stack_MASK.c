
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int stackptr; } ;
struct sof_ipc_dsp_oops_xtensa {TYPE_1__ plat_hdr; } ;
struct snd_sof_dev {int dev; } ;
typedef int buf ;


 int FUNC_0 (int ,char*,int,...) ;
 int FUNC_1 (int*,int,int,int,unsigned char*,int,int) ;

__attribute__((used)) static void FUNC_2(struct snd_sof_dev *VAR_0, void *VAR_1, u32 *VAR_2,
    u32 VAR_3)
{
 struct sof_ipc_dsp_oops_xtensa *VAR_4 = VAR_1;
 u32 VAR_5 = VAR_4->plat_hdr.stackptr;

 unsigned char VAR_6[4 * 8 + 3 + 1];
 int VAR_7;

 FUNC_0(VAR_0->dev, "stack dump from 0x%8.8x\n", VAR_5);





 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7 += 4) {
  FUNC_1(VAR_2 + VAR_7 * 4, 16, 16, 4,
       VAR_6, sizeof(VAR_6), 0);
  FUNC_0(VAR_0->dev, "0x%08x: %s\n", VAR_5 + VAR_7, VAR_6);
 }
}
