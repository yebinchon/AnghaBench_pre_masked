
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcxhr_rmh {unsigned int* cmd; int cmd_len; } ;
struct pcxhr_mgr {unsigned int io_num_reg_cont; int msg_lock; TYPE_1__* pci; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int *,char*,unsigned int,unsigned int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct pcxhr_rmh*,int ) ;
 int FUNC_4 (struct pcxhr_mgr*,struct pcxhr_rmh*) ;

int FUNC_5(struct pcxhr_mgr *VAR_2, unsigned int VAR_3,
    unsigned int VAR_4, int *VAR_5)
{
 struct pcxhr_rmh VAR_6;
 int VAR_7;

 FUNC_1(&VAR_2->msg_lock);
 if ((VAR_2->io_num_reg_cont & VAR_3) == VAR_4) {
  FUNC_0(&VAR_2->pci->dev,
   "IO_NUM_REG_CONT mask %x already is set to %x\n",
       VAR_3, VAR_4);
  if (VAR_5)
   *VAR_5 = 0;
  FUNC_2(&VAR_2->msg_lock);
  return 0;
 }
 FUNC_3(&VAR_6, VAR_0);
 VAR_6.cmd[0] |= VAR_1;
 VAR_6.cmd[1] = VAR_3;
 VAR_6.cmd[2] = VAR_4;
 VAR_6.cmd_len = 3;
 VAR_7 = FUNC_4(VAR_2, &VAR_6);
 if (VAR_7 == 0) {
  VAR_2->io_num_reg_cont &= ~VAR_3;
  VAR_2->io_num_reg_cont |= VAR_4;
  if (VAR_5)
   *VAR_5 = 1;
 }
 FUNC_2(&VAR_2->msg_lock);
 return VAR_7;
}
