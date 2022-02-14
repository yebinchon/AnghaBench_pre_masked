
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int frags; int bufsize; } ;
struct sst_dsp {TYPE_1__ cl_dev; } ;
struct snd_dma_buffer {scalar_t__ area; } ;
typedef int phys_addr_t ;
typedef int __le32 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct sst_dsp *VAR_0,
  struct snd_dma_buffer *VAR_1,
  __le32 **VAR_2, int VAR_3, int VAR_4)
{
 __le32 *VAR_5 = *VAR_2;

 VAR_0->cl_dev.frags = 0;
 while (VAR_3 > 0) {
  phys_addr_t VAR_6 = FUNC_3(VAR_1->area +
    (VAR_0->cl_dev.frags * VAR_0->cl_dev.bufsize));

  VAR_5[0] = FUNC_0(FUNC_1(VAR_6));
  VAR_5[1] = FUNC_0(FUNC_2(VAR_6));

  VAR_5[2] = FUNC_0(VAR_0->cl_dev.bufsize);

  VAR_3 -= VAR_0->cl_dev.bufsize;
  VAR_5[3] = (VAR_3 || !VAR_4) ? 0 : FUNC_0(0x01);

  VAR_5 += 4;
  VAR_0->cl_dev.frags++;
 }
}
