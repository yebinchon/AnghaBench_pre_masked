
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pcxhr_rmh {int stat_len; scalar_t__ dsp_stat; scalar_t__ cmd_idx; int* stat; } ;
struct pcxhr_mgr {TYPE_1__* pci; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct pcxhr_mgr*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (int *,char*,int,...) ;
 int FUNC_2 (int *,char*,unsigned char,int) ;
 int FUNC_3 (struct pcxhr_mgr*,int ,int ,int ,int ,unsigned char*) ;

__attribute__((used)) static int FUNC_4(struct pcxhr_mgr *VAR_10, struct pcxhr_rmh *VAR_11)
{
 int VAR_12;
 int VAR_13;
 u32 VAR_14;
 u32 VAR_15;
 unsigned char VAR_16;
 int VAR_17;

 if (VAR_11->stat_len < VAR_6)
  VAR_17 = VAR_6;
 else VAR_17 = VAR_11->stat_len;

 for (VAR_13 = 0; VAR_13 < VAR_11->stat_len; VAR_13++) {

  VAR_12 = FUNC_3(VAR_10, VAR_1,
       VAR_5,
       VAR_5,
       VAR_7, &VAR_16);
  if (VAR_12) {
   FUNC_2(&VAR_10->pci->dev,
    "ERROR RMH stat: ISR:RXDF=1 (ISR = %x; i=%d )\n",
    VAR_16, VAR_13);
   return VAR_12;
  }

  VAR_14 = FUNC_0(VAR_10, VAR_2) << 16;
  VAR_14 |= FUNC_0(VAR_10, VAR_4) << 8;
  VAR_14 |= FUNC_0(VAR_10, VAR_3);


  if (!VAR_13) {
   if (VAR_11->dsp_stat != VAR_9) {
    if (VAR_11->dsp_stat == VAR_8) {
     VAR_11->stat_len = (VAR_14 & 0x0000ff) + 1;
     VAR_14 &= 0xffff00;
    } else {

     VAR_11->stat_len = 1;
     VAR_15 = VAR_14;
     while (VAR_15) {
      if (VAR_15 & 1)
       VAR_11->stat_len++;
      VAR_15 >>= 1;
     }
    }
   }
  }




  if (VAR_13 < VAR_17)
   VAR_11->stat[VAR_13] = VAR_14;
 }
 if (VAR_11->stat_len > VAR_17) {
  FUNC_1(&VAR_10->pci->dev, "PCXHR : rmh->stat_len=%x too big\n",
       VAR_11->stat_len);
  VAR_11->stat_len = VAR_17;
 }
 return 0;
}
