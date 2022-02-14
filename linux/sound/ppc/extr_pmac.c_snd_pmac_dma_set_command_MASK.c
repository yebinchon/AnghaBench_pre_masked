
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pmac_stream {TYPE_1__* dma; } ;
struct pmac_dbdma {int addr; } ;
struct TYPE_2__ {int cmdptr; } ;


 int FUNC_0 (int *,int ) ;

__attribute__((used)) static inline void FUNC_1(struct pmac_stream *VAR_0, struct pmac_dbdma *VAR_1)
{
 FUNC_0(&VAR_0->dma->cmdptr, VAR_1->addr);
}
