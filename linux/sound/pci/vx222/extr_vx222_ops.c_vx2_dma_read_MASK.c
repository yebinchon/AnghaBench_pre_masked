
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vx_pipe {int hw_ptr; int buffer_bytes; } ;
struct vx_core {int dummy; } ;
struct snd_pcm_runtime {scalar_t__ dma_area; } ;


 int VAR_0 ;
 void* FUNC_0 (unsigned long) ;
 scalar_t__ FUNC_1 (int) ;
 unsigned long FUNC_2 (struct vx_core*,int ) ;
 int FUNC_3 (struct vx_core*) ;
 int FUNC_4 (struct vx_core*,int ) ;

__attribute__((used)) static void FUNC_5(struct vx_core *VAR_1, struct snd_pcm_runtime *VAR_2,
    struct vx_pipe *VAR_3, int VAR_4)
{
 int VAR_5 = VAR_3->hw_ptr;
 u32 *VAR_6 = (u32 *)(VAR_2->dma_area + VAR_5);
 unsigned long VAR_7 = FUNC_2(VAR_1, VAR_0);

 if (FUNC_1(VAR_4 % 4))
  return;

 FUNC_4(VAR_1, 0);


 if (VAR_5 + VAR_4 >= VAR_3->buffer_bytes) {
  int VAR_8 = VAR_3->buffer_bytes - VAR_5;
  VAR_4 -= VAR_8;
  VAR_8 >>= 2;

  for (; VAR_8 > 0; VAR_8--)
   *VAR_6++ = FUNC_0(VAR_7);
  VAR_6 = (u32 *)VAR_2->dma_area;
  VAR_3->hw_ptr = 0;
 }
 VAR_3->hw_ptr += VAR_4;
 VAR_4 >>= 2;

 for (; VAR_4 > 0; VAR_4--)
  *VAR_6++ = FUNC_0(VAR_7);

 FUNC_3(VAR_1);
}
