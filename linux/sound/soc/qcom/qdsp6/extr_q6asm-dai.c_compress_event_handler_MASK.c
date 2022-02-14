
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
struct snd_compr_stream {int dummy; } ;
struct q6asm_dai_rtd {int lock; scalar_t__ pcm_count; scalar_t__ bytes_sent; int audio_client; scalar_t__ bytes_received; int state; scalar_t__ copied_total; struct snd_compr_stream* cstream; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,scalar_t__,int ,int ,int ) ;
 int FUNC_1 (struct snd_compr_stream*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(uint32_t VAR_3, uint32_t VAR_4,
       uint32_t *VAR_5, void *VAR_6)
{
 struct q6asm_dai_rtd *VAR_7 = VAR_6;
 struct snd_compr_stream *VAR_8 = VAR_7->cstream;
 unsigned long VAR_9;
 uint64_t VAR_10;

 switch (VAR_3) {
 case 129:
  FUNC_2(&VAR_7->lock, VAR_9);
  if (!VAR_7->bytes_sent) {
   FUNC_0(VAR_7->audio_client, VAR_7->pcm_count,
       0, 0, VAR_0);
   VAR_7->bytes_sent += VAR_7->pcm_count;
  }

  FUNC_3(&VAR_7->lock, VAR_9);
  break;

 case 130:
  VAR_7->state = VAR_2;
  break;

 case 128:
  FUNC_2(&VAR_7->lock, VAR_9);

  VAR_7->copied_total += VAR_7->pcm_count;
  FUNC_1(VAR_8);

  if (VAR_7->state != VAR_1) {
   FUNC_3(&VAR_7->lock, VAR_9);
   break;
  }

  VAR_10 = VAR_7->bytes_received - VAR_7->bytes_sent;

  if (VAR_10 >= VAR_7->pcm_count) {
   FUNC_0(VAR_7->audio_client,
        VAR_7->pcm_count, 0, 0, VAR_0);
   VAR_7->bytes_sent += VAR_7->pcm_count;
  }

  FUNC_3(&VAR_7->lock, VAR_9);
  break;

 default:
  break;
 }
}
