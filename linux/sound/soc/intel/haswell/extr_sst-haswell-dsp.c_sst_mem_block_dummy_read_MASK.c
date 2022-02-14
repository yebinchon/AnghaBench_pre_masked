
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct sst_mem_block {int size; scalar_t__ offset; struct sst_dsp* dsp; } ;
struct TYPE_2__ {scalar_t__ lpe; } ;
struct sst_dsp {TYPE_1__ addr; } ;


 int FUNC_0 (int *,scalar_t__,int) ;

__attribute__((used)) static void FUNC_1(struct sst_mem_block *VAR_0)
{
 u32 VAR_1;
 u8 VAR_2[4];
 struct sst_dsp *VAR_3 = VAR_0->dsp;

 VAR_1 = VAR_0->size > 4 ? 4 : VAR_0->size;
 FUNC_0(VAR_2, VAR_3->addr.lpe + VAR_0->offset, VAR_1);
}
