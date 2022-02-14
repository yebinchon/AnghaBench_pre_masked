
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct sst_runtime_stream {int id; TYPE_9__* compr_ops; } ;
struct sst_data {int dummy; } ;
struct sst_compress_cb {int drain_notify; struct snd_compr_stream* drain_cb_param; int compr_cb; struct snd_compr_stream* param; } ;
struct TYPE_18__ {int sg_count; int frag_size; TYPE_6__* ring_buf_info; } ;
struct TYPE_13__ {int pcm_wd_sz; int externalsr; int bs_format; int num_chan; } ;
struct TYPE_12__ {int pcm_wd_sz; int num_chan; } ;
struct TYPE_14__ {TYPE_2__ aac_params; TYPE_1__ mp3_params; } ;
struct TYPE_15__ {TYPE_3__ uc; } ;
struct snd_sst_params {TYPE_7__ aparams; TYPE_4__ sparams; int codec; } ;
struct snd_soc_pcm_runtime {int dummy; } ;
struct snd_soc_component {int dummy; } ;
struct snd_compr_stream {TYPE_8__* runtime; struct snd_soc_pcm_runtime* private_data; } ;
struct TYPE_16__ {int id; int format; int sample_rate; int ch_in; } ;
struct snd_compr_params {TYPE_5__ codec; } ;
typedef int str_params ;
struct TYPE_20__ {int (* open ) (int ,struct snd_sst_params*,struct sst_compress_cb*) ;} ;
struct TYPE_19__ {int fragment_size; int buffer_size; int buffer; struct sst_runtime_stream* private_data; } ;
struct TYPE_17__ {int size; int addr; } ;
struct TYPE_11__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct snd_sst_params*,int ,int) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*,int) ;
 struct sst_data* FUNC_3 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_4 (struct snd_soc_pcm_runtime*,int ) ;
 TYPE_10__* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_5 (struct snd_compr_stream*,struct sst_data*,struct snd_sst_params*,int) ;
 int FUNC_6 (int ,struct snd_sst_params*,struct sst_compress_cb*) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct snd_compr_stream *VAR_11,
     struct snd_compr_params *VAR_12)
{
 struct sst_runtime_stream *VAR_13;
 int VAR_14;
 struct snd_sst_params VAR_15;
 struct sst_compress_cb VAR_16;
 struct snd_soc_pcm_runtime *VAR_17 = VAR_11->private_data;
 struct snd_soc_component *VAR_18 = FUNC_4(VAR_17, VAR_2);
 struct sst_data *VAR_19 = FUNC_3(VAR_18);

 VAR_13 = VAR_11->runtime->private_data;

 FUNC_0(&VAR_15, 0, sizeof(VAR_15));


 VAR_14 = FUNC_5(VAR_11, VAR_19, &VAR_15, 1);
 FUNC_1("compr_set_params: fill stream params ret_val = 0x%x\n", VAR_14);
 if (VAR_14 < 0)
  return VAR_14;

 switch (VAR_12->codec.id) {
 case 128: {
  VAR_15.codec = VAR_7;
  VAR_15.sparams.uc.mp3_params.num_chan = VAR_12->codec.ch_in;
  VAR_15.sparams.uc.mp3_params.pcm_wd_sz = 16;
  break;
 }

 case 129: {
  VAR_15.codec = VAR_6;
  VAR_15.sparams.uc.aac_params.num_chan = VAR_12->codec.ch_in;
  VAR_15.sparams.uc.aac_params.pcm_wd_sz = 16;
  if (VAR_12->codec.format == VAR_4)
   VAR_15.sparams.uc.aac_params.bs_format =
       VAR_0;
  else if (VAR_12->codec.format == VAR_5)
   VAR_15.sparams.uc.aac_params.bs_format =
       VAR_1;
  else {
   FUNC_2("Undefined format%d\n", VAR_12->codec.format);
   return -VAR_3;
  }
  VAR_15.sparams.uc.aac_params.externalsr =
      VAR_12->codec.sample_rate;
  break;
 }

 default:
  FUNC_2("codec not supported, id =%d\n", VAR_12->codec.id);
  return -VAR_3;
 }

 VAR_15.aparams.ring_buf_info[0].addr =
     FUNC_7(VAR_11->runtime->buffer);
 VAR_15.aparams.ring_buf_info[0].size =
     VAR_11->runtime->buffer_size;
 VAR_15.aparams.sg_count = 1;
 VAR_15.aparams.frag_size = VAR_11->runtime->fragment_size;

 VAR_16.param = VAR_11;
 VAR_16.compr_cb = VAR_9;
 VAR_16.drain_cb_param = VAR_11;
 VAR_16.drain_notify = VAR_10;

 VAR_14 = VAR_13->compr_ops->open(VAR_8->dev, &VAR_15, &VAR_16);
 if (VAR_14 < 0) {
  FUNC_2("stream allocation failed %d\n", VAR_14);
  return VAR_14;
 }

 VAR_13->id = VAR_14;
 return 0;
}
