
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vx_pipe {int hw_ptr; int buffer_bytes; } ;
struct vx_core {int dummy; } ;
struct snd_pcm_runtime {scalar_t__ dma_area; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (struct vx_core*,int ) ;

__attribute__((used)) static void FUNC_1(struct vx_core *VAR_3, struct snd_pcm_runtime *VAR_4,
      struct vx_pipe *VAR_5)
{
 int VAR_6 = VAR_5->hw_ptr;
 unsigned char *VAR_7 = (unsigned char *)(VAR_4->dma_area + VAR_6);
 *VAR_7++ = FUNC_0(VAR_3, VAR_0);
 if (++VAR_6 >= VAR_5->buffer_bytes) {
  VAR_6 = 0;
  VAR_7 = (unsigned char *)VAR_4->dma_area;
 }
 *VAR_7++ = FUNC_0(VAR_3, VAR_2);
 if (++VAR_6 >= VAR_5->buffer_bytes) {
  VAR_6 = 0;
  VAR_7 = (unsigned char *)VAR_4->dma_area;
 }
 *VAR_7++ = FUNC_0(VAR_3, VAR_1);
 if (++VAR_6 >= VAR_5->buffer_bytes) {
  VAR_6 = 0;
  VAR_7 = (unsigned char *)VAR_4->dma_area;
 }
 VAR_5->hw_ptr = VAR_6;
}
