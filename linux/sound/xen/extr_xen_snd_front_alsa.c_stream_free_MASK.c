
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xen_snd_front_pcm_stream_info {int pages; int buffer_sz; scalar_t__ buffer; int shbuf; } ;


 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct xen_snd_front_pcm_stream_info*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct xen_snd_front_pcm_stream_info *VAR_0)
{
 FUNC_4(&VAR_0->shbuf);
 FUNC_3(&VAR_0->shbuf);
 if (VAR_0->buffer)
  FUNC_0(VAR_0->buffer, VAR_0->buffer_sz);
 FUNC_1(VAR_0->pages);
 FUNC_2(VAR_0);
}
