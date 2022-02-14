
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct davinci_mcasp {scalar_t__ fifo_base; int txnumevt; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct davinci_mcasp*,scalar_t__) ;

__attribute__((used)) static inline u32 FUNC_1(struct davinci_mcasp *VAR_1)
{
 if (!VAR_1->txnumevt)
  return 0;

 return FUNC_0(VAR_1, VAR_1->fifo_base + VAR_0);
}
