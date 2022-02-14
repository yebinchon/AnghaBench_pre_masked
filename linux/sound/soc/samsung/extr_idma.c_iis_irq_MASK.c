
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct idma_ctrl {int period; int token; int (* cb ) (int ,int ) ;scalar_t__ start; scalar_t__ end; scalar_t__ periodsz; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int lp_tx_addr; scalar_t__ regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 TYPE_1__ VAR_5 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_6, void *VAR_7)
{
 struct idma_ctrl *VAR_8 = (struct idma_ctrl *)VAR_7;
 u32 VAR_9, VAR_10, VAR_11;

 VAR_9 = FUNC_0(VAR_5.regs + VAR_2);

 VAR_10 = (VAR_9 & VAR_1) ? VAR_0 : 0;

 if (VAR_10) {
  VAR_9 |= VAR_10;
  FUNC_2(VAR_9, VAR_5.regs + VAR_2);

  VAR_11 = FUNC_0(VAR_5.regs + VAR_3) - VAR_5.lp_tx_addr;
  VAR_11 += VAR_8->periodsz;
  VAR_11 %= (u32)(VAR_8->end - VAR_8->start);
  VAR_11 += VAR_5.lp_tx_addr;

  FUNC_2(VAR_11, VAR_5.regs + VAR_3);

  if (VAR_8->cb)
   VAR_8->cb(VAR_8->token, VAR_8->period);
 }

 return VAR_4;
}
