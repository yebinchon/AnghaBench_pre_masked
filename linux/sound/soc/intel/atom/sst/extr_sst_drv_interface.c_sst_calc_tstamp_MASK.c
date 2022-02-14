
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct snd_sst_tstamp {scalar_t__ ring_buffer_counter; scalar_t__ hardware_counter; } ;
struct snd_pcm_substream {scalar_t__ stream; TYPE_1__* runtime; } ;
struct pcm_stream_info {int buffer_ptr; size_t pcm_delay; } ;
struct intel_sst_drv {int dev; } ;
struct TYPE_3__ {int channels; } ;


 scalar_t__ VAR_0 ;
 size_t FUNC_0 (TYPE_1__*,size_t) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (int ,char*,int,...) ;
 int FUNC_3 (scalar_t__,size_t,int*) ;
 size_t FUNC_4 (struct snd_pcm_substream*) ;

__attribute__((used)) static inline int FUNC_5(struct intel_sst_drv *VAR_1,
  struct pcm_stream_info *VAR_2,
  struct snd_pcm_substream *VAR_3,
  struct snd_sst_tstamp *VAR_4)
{
 size_t VAR_5, VAR_6;
 size_t VAR_7;
 u32 VAR_8, VAR_9;

 FUNC_2(VAR_1->dev, "mrfld ring_buffer_counter %llu in bytes\n",
   VAR_4->ring_buffer_counter);
 FUNC_2(VAR_1->dev, "mrfld hardware_counter %llu in bytes\n",
    VAR_4->hardware_counter);
 if (VAR_3->stream == VAR_0)
  VAR_5 = (size_t) (VAR_4->ring_buffer_counter -
     VAR_4->hardware_counter);
 else
  VAR_5 = (size_t) (VAR_4->hardware_counter -
     VAR_4->ring_buffer_counter);
 VAR_6 = FUNC_0(VAR_3->runtime, VAR_5);
 VAR_7 = FUNC_4(VAR_3);
 FUNC_3(VAR_4->ring_buffer_counter, VAR_7, &VAR_8);
 VAR_9 = FUNC_1(VAR_3->runtime, VAR_8);

 FUNC_2(VAR_1->dev, "pcm delay %zu in bytes\n", VAR_5);

 VAR_2->buffer_ptr = VAR_9 / VAR_3->runtime->channels;

 VAR_2->pcm_delay = VAR_6;
 FUNC_2(VAR_1->dev, "buffer ptr %llu pcm_delay rep: %llu\n",
   VAR_2->buffer_ptr, VAR_2->pcm_delay);
 return 0;
}
