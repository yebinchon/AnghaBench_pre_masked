
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct loopback_pcm {unsigned int buf_pos; unsigned int pcm_buffer_size; } ;



__attribute__((used)) static inline void FUNC_0(struct loopback_pcm *VAR_0,
      unsigned int VAR_1)
{
 VAR_0->buf_pos += VAR_1;
 VAR_0->buf_pos %= VAR_0->pcm_buffer_size;
}
