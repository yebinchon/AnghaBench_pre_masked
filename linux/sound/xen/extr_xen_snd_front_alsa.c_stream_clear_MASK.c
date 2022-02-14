
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xen_snd_front_pcm_stream_info {int is_open; scalar_t__ num_pages; int * pages; scalar_t__ buffer_sz; int * buffer; int shbuf; int evt_pair; int hw_ptr; scalar_t__ out_frames; scalar_t__ be_cur_frame; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct xen_snd_front_pcm_stream_info *VAR_0)
{
 VAR_0->is_open = 0;
 VAR_0->be_cur_frame = 0;
 VAR_0->out_frames = 0;
 FUNC_0(&VAR_0->hw_ptr, 0);
 FUNC_2(VAR_0->evt_pair);
 FUNC_1(&VAR_0->shbuf, 0, sizeof(VAR_0->shbuf));
 VAR_0->buffer = ((void*)0);
 VAR_0->buffer_sz = 0;
 VAR_0->pages = ((void*)0);
 VAR_0->num_pages = 0;
}
