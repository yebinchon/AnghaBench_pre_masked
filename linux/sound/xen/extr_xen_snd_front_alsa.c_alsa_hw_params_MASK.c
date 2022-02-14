
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xen_snd_front_pcm_stream_info {int index; int shbuf; int pages; int num_pages; struct xen_snd_front_info* front_info; } ;
struct xen_snd_front_info {TYPE_1__* xb_dev; } ;
struct xen_front_pgdir_shbuf_cfg {int pages; int num_pages; int * pgdir; TYPE_1__* xb_dev; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
typedef int buf_cfg ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (struct xen_front_pgdir_shbuf_cfg*,int ,int) ;
 int FUNC_2 (struct snd_pcm_hw_params*) ;
 int FUNC_3 (struct xen_snd_front_pcm_stream_info*,int ) ;
 int FUNC_4 (struct xen_snd_front_pcm_stream_info*) ;
 struct xen_snd_front_pcm_stream_info* FUNC_5 (struct snd_pcm_substream*) ;
 int FUNC_6 (struct xen_front_pgdir_shbuf_cfg*) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct snd_pcm_substream *VAR_0,
     struct snd_pcm_hw_params *VAR_1)
{
 struct xen_snd_front_pcm_stream_info *VAR_2 = FUNC_5(VAR_0);
 struct xen_snd_front_info *VAR_3 = VAR_2->front_info;
 struct xen_front_pgdir_shbuf_cfg VAR_4;
 int VAR_5;





 FUNC_4(VAR_2);
 VAR_5 = FUNC_3(VAR_2, FUNC_2(VAR_1));
 if (VAR_5 < 0)
  goto fail;

 FUNC_1(&VAR_4, 0, sizeof(VAR_4));
 VAR_4.xb_dev = VAR_3->xb_dev;
 VAR_4.pgdir = &VAR_2->shbuf;
 VAR_4.num_pages = VAR_2->num_pages;
 VAR_4.pages = VAR_2->pages;

 VAR_5 = FUNC_6(&VAR_4);
 if (VAR_5 < 0)
  goto fail;

 VAR_5 = FUNC_7(&VAR_2->shbuf);
 if (VAR_5 < 0)
  goto fail;

 return 0;

fail:
 FUNC_4(VAR_2);
 FUNC_0(&VAR_3->xb_dev->dev,
  "Failed to allocate buffers for stream with index %d\n",
  VAR_2->index);
 return VAR_5;
}
