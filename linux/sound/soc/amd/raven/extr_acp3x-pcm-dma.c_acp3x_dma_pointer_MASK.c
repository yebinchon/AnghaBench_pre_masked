
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct snd_pcm_substream {TYPE_1__* runtime; int stream; } ;
struct i2s_stream_instance {scalar_t__ bytescount; } ;
typedef int snd_pcm_uframes_t ;
struct TYPE_3__ {int buffer_size; struct i2s_stream_instance* private_data; } ;


 scalar_t__ FUNC_0 (struct i2s_stream_instance*,int ) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (TYPE_1__*,int ) ;

__attribute__((used)) static snd_pcm_uframes_t FUNC_4(struct snd_pcm_substream *VAR_0)
{
 u32 VAR_1 = 0;
 u32 VAR_2 = 0;
 u64 VAR_3 = 0;
 struct i2s_stream_instance *VAR_4 =
  VAR_0->runtime->private_data;

 VAR_2 = FUNC_3(VAR_0->runtime,
         VAR_0->runtime->buffer_size);
 VAR_3 = FUNC_0(VAR_4, VAR_0->stream);
 if (VAR_3 > VAR_4->bytescount)
  VAR_3 -= VAR_4->bytescount;
 VAR_1 = FUNC_2(VAR_3, VAR_2);
 return FUNC_1(VAR_0->runtime, VAR_1);
}
