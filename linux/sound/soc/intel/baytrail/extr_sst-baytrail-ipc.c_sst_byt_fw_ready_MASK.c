
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct sst_byt {int boot_complete; int boot_wait; int dev; } ;


 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct sst_byt *VAR_0, u64 VAR_1)
{
 FUNC_0(VAR_0->dev, "ipc: DSP is ready 0x%llX\n", VAR_1);

 VAR_0->boot_complete = 1;
 FUNC_1(&VAR_0->boot_wait);
}
