
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_2__ {int out_base; } ;
struct sst_dsp {TYPE_1__ mailbox; } ;


 int FUNC_0 (int ,void*,size_t) ;
 int FUNC_1 (size_t,size_t) ;
 int FUNC_2 (size_t) ;

void FUNC_3(struct sst_dsp *VAR_0, void *VAR_1, size_t VAR_2)
{
 u32 VAR_3;

 FUNC_2(VAR_2);

 FUNC_0(VAR_0->mailbox.out_base, VAR_1, VAR_2);

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3 += 4)
  FUNC_1(VAR_3, *(u32 *)(VAR_1 + VAR_3));
}
