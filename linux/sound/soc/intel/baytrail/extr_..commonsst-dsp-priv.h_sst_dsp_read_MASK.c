
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_4__ {scalar_t__ lpe; } ;
struct sst_dsp {TYPE_2__ addr; TYPE_1__* ops; } ;
struct TYPE_3__ {int (* ram_read ) (struct sst_dsp*,void*,scalar_t__,size_t) ;} ;


 int FUNC_0 (struct sst_dsp*,void*,scalar_t__,size_t) ;

__attribute__((used)) static inline void FUNC_1(struct sst_dsp *VAR_0, void *VAR_1,
 u32 VAR_2, size_t VAR_3)
{
 VAR_0->ops->ram_read(VAR_0, VAR_1, VAR_0->addr.lpe + VAR_2, VAR_3);
}
