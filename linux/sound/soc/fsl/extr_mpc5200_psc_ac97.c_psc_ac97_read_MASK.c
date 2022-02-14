
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_ac97 {int dummy; } ;
struct TYPE_6__ {int mutex; TYPE_2__* psc_regs; } ;
struct TYPE_4__ {int status; } ;
struct TYPE_5__ {int ac97_data; TYPE_1__ sr_csr; int ac97_cmd; } ;


 unsigned short VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 unsigned int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (char*,...) ;
 TYPE_3__* VAR_3 ;
 int FUNC_6 (int,int,int ) ;

__attribute__((used)) static unsigned short FUNC_7(struct snd_ac97 *VAR_4, unsigned short VAR_5)
{
 int VAR_6;
 unsigned int VAR_7;

 FUNC_2(&VAR_3->mutex);


 VAR_6 = FUNC_6(!(FUNC_0(&VAR_3->psc_regs->sr_csr.status) &
    VAR_1), 100, 0);
 if (VAR_6 == 0) {
  FUNC_5("timeout on ac97 bus (rdy)\n");
  FUNC_3(&VAR_3->mutex);
  return -VAR_0;
 }


 FUNC_1(&VAR_3->psc_regs->ac97_data);


 FUNC_4(&VAR_3->psc_regs->ac97_cmd, (1<<31) | ((VAR_5 & 0x7f) << 24));


 VAR_6 = FUNC_6((FUNC_0(&VAR_3->psc_regs->sr_csr.status) &
    VAR_2), 100, 0);
 if (VAR_6 == 0) {
  FUNC_5("timeout on ac97 read (val) %x\n",
    FUNC_0(&VAR_3->psc_regs->sr_csr.status));
  FUNC_3(&VAR_3->mutex);
  return -VAR_0;
 }

 VAR_7 = FUNC_1(&VAR_3->psc_regs->ac97_data);
 if (((VAR_7 >> 24) & 0x7f) != VAR_5) {
  FUNC_5("reg echo error on ac97 read\n");
  FUNC_3(&VAR_3->mutex);
  return -VAR_0;
 }
 VAR_7 = (VAR_7 >> 8) & 0xffff;

 FUNC_3(&VAR_3->mutex);
 return (unsigned short) VAR_7;
}
