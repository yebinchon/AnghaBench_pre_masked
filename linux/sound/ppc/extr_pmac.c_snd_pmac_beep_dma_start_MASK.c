
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {unsigned long addr; TYPE_1__* cmds; } ;
struct pmac_stream {int dummy; } ;
struct snd_pmac {TYPE_3__ extra_dma; TYPE_2__* awacs; struct pmac_stream playback; } ;
struct TYPE_5__ {int byteswap; int control; } ;
struct TYPE_4__ {void* command; void* phy_addr; void* cmd_dep; void* xfer_status; void* req_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int) ;
 void* FUNC_1 (unsigned long) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (struct pmac_stream*,int ) ;
 int FUNC_5 (struct pmac_stream*,TYPE_3__*) ;
 int FUNC_6 (struct pmac_stream*) ;

void FUNC_7(struct snd_pmac *VAR_3, int VAR_4, unsigned long VAR_5, int VAR_6)
{
 struct pmac_stream *VAR_7 = &VAR_3->playback;

 FUNC_6(VAR_7);
 VAR_3->extra_dma.cmds->req_count = FUNC_0(VAR_4);
 VAR_3->extra_dma.cmds->xfer_status = FUNC_0(0);
 VAR_3->extra_dma.cmds->cmd_dep = FUNC_1(VAR_3->extra_dma.addr);
 VAR_3->extra_dma.cmds->phy_addr = FUNC_1(VAR_5);
 VAR_3->extra_dma.cmds->command = FUNC_0(VAR_1 + VAR_0);
 FUNC_3(&VAR_3->awacs->control,
   (FUNC_2(&VAR_3->awacs->control) & ~0x1f00)
   | (VAR_6 << 8));
 FUNC_3(&VAR_3->awacs->byteswap, 0);
 FUNC_5(VAR_7, &VAR_3->extra_dma);
 FUNC_4(VAR_7, VAR_2);
}
