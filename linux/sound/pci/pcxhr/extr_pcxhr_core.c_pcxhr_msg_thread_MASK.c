
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pcxhr_rmh {int* stat; int* cmd; int stat_len; } ;
struct pcxhr_mgr {int src_it_dsp; TYPE_1__* pci; struct pcxhr_rmh* prmh; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (struct pcxhr_mgr*,int,int ,int,int) ;
 int FUNC_3 (struct pcxhr_rmh*,int ) ;
 int FUNC_4 (struct pcxhr_mgr*,struct pcxhr_rmh*) ;

__attribute__((used)) static void FUNC_5(struct pcxhr_mgr *VAR_12)
{
 struct pcxhr_rmh *VAR_13 = VAR_12->prmh;
 int VAR_14;
 int VAR_15, VAR_16;

 if (VAR_12->src_it_dsp & VAR_8)
  FUNC_0(&VAR_12->pci->dev,
   "PCXHR_IRQ_FREQ_CHANGE event occurred\n");
 if (VAR_12->src_it_dsp & VAR_10)
  FUNC_0(&VAR_12->pci->dev,
   "PCXHR_IRQ_TIME_CODE event occurred\n");
 if (VAR_12->src_it_dsp & VAR_9)
  FUNC_0(&VAR_12->pci->dev,
   "PCXHR_IRQ_NOTIFY event occurred\n");
 if (VAR_12->src_it_dsp & (VAR_8 | VAR_10)) {

  FUNC_3(VAR_13, VAR_1);
  VAR_14 = FUNC_4(VAR_12, VAR_13);
  FUNC_0(&VAR_12->pci->dev, "CMD_TEST_IT : err=%x, stat=%x\n",
       VAR_14, VAR_13->stat[0]);
 }
 if (VAR_12->src_it_dsp & VAR_7) {
  FUNC_0(&VAR_12->pci->dev,
   "PCXHR_IRQ_ASYNC event occurred\n");

  FUNC_3(VAR_13, VAR_0);
  VAR_13->cmd[0] |= 1;

  VAR_13->stat_len = VAR_11;
  VAR_14 = FUNC_4(VAR_12, VAR_13);
  if (VAR_14)
   FUNC_1(&VAR_12->pci->dev, "ERROR pcxhr_msg_thread=%x;\n",
       VAR_14);
  VAR_15 = 1;
  while (VAR_15 < VAR_13->stat_len) {
   int VAR_17 = ((VAR_13->stat[VAR_15] >> VAR_2) &
     VAR_3);
   int VAR_18 = ((VAR_13->stat[VAR_15] >> (2*VAR_2)) &
      VAR_3);
   int VAR_19 = VAR_13->stat[VAR_15] & VAR_3;
   int VAR_20 = VAR_13->stat[VAR_15] & 0x400000;
   u32 VAR_21;

   if (VAR_13->stat[VAR_15] & 0x800000) {
    FUNC_0(&VAR_12->pci->dev,
     "TASKLET : End%sPipe %d\n",
         VAR_20 ? "Record" : "Play",
         VAR_19);
   }
   VAR_15++;
   VAR_21 = VAR_13->stat[VAR_15] ? VAR_13->stat[VAR_15] : VAR_13->stat[VAR_15+1];
   if (VAR_21)
    FUNC_2(VAR_12, VAR_21,
             VAR_5,
             VAR_19, VAR_20);
   VAR_15 += 2;
   for (VAR_16 = 0; VAR_16 < VAR_18; VAR_16++) {
    VAR_21 = VAR_13->stat[VAR_15] ?
     VAR_13->stat[VAR_15] : VAR_13->stat[VAR_15+1];
    if (VAR_21)
     FUNC_2(VAR_12, VAR_21,
              VAR_6,
              VAR_19,
              VAR_20);
    VAR_15 += 2;
   }
   for (VAR_16 = 0; VAR_16 < VAR_17; VAR_16++) {
    VAR_21 = VAR_13->stat[VAR_15] ?
     VAR_13->stat[VAR_15] : VAR_13->stat[VAR_15+1];
    if (VAR_21)
     FUNC_2(VAR_12, VAR_21,
              VAR_4,
              VAR_19,
              VAR_20);
    VAR_15 += 2;
   }
  }
 }
}
