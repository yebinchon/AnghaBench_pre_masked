
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcxhr_mgr {TYPE_1__* pci; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned char FUNC_0 (struct pcxhr_mgr*,unsigned int) ;
 int FUNC_1 (int *,char*,unsigned int,int) ;
 int FUNC_2 (int *,char*,unsigned int,unsigned char,unsigned char) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (unsigned long,int) ;

__attribute__((used)) static int FUNC_4(struct pcxhr_mgr *VAR_3, unsigned int VAR_4,
          unsigned char VAR_5, unsigned char VAR_6, int VAR_7,
          unsigned char* VAR_8)
{
 int VAR_9 = 0;
 unsigned long VAR_10 = VAR_2 + (VAR_7 * VAR_1 + 999) / 1000;
 do {
  *VAR_8 = FUNC_0(VAR_3, VAR_4);
  if ((*VAR_8 & VAR_5) == VAR_6) {
   if (VAR_9 > 100)
    FUNC_1(&VAR_3->pci->dev,
     "ATTENTION! check_reg(%x) loopcount=%d\n",
         VAR_4, VAR_9);
   return 0;
  }
  VAR_9++;
 } while (FUNC_3(VAR_10, VAR_2));
 FUNC_2(&VAR_3->pci->dev,
     "pcxhr_check_reg_bit: timeout, reg=%x, mask=0x%x, val=%x\n",
     VAR_4, VAR_5, *VAR_8);
 return -VAR_0;
}
