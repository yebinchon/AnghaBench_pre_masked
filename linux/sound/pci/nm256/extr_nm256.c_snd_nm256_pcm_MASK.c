
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm {scalar_t__ info_flags; struct nm256* private_data; } ;
struct nm256_stream {scalar_t__ buf; scalar_t__ bufptr_addr; scalar_t__ bufptr; } ;
struct nm256 {struct snd_pcm* pcm; TYPE_1__* card; scalar_t__ buffer_start; scalar_t__ buffer_addr; scalar_t__ buffer; struct nm256_stream* streams; } ;
struct TYPE_2__ {int driver; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,int ,int,int,int,struct snd_pcm**) ;
 int FUNC_1 (struct snd_pcm*,int ,int *) ;

__attribute__((used)) static int
FUNC_2(struct nm256 *VAR_4, int VAR_5)
{
 struct snd_pcm *VAR_6;
 int VAR_7, VAR_8;

 for (VAR_7 = 0; VAR_7 < 2; VAR_7++) {
  struct nm256_stream *VAR_9 = &VAR_4->streams[VAR_7];
  VAR_9->bufptr = VAR_4->buffer + (VAR_9->buf - VAR_4->buffer_start);
  VAR_9->bufptr_addr = VAR_4->buffer_addr + (VAR_9->buf - VAR_4->buffer_start);
 }

 VAR_8 = FUNC_0(VAR_4->card, VAR_4->card->driver, VAR_5,
     1, 1, &VAR_6);
 if (VAR_8 < 0)
  return VAR_8;

 FUNC_1(VAR_6, VAR_1, &VAR_3);
 FUNC_1(VAR_6, VAR_0, &VAR_2);

 VAR_6->private_data = VAR_4;
 VAR_6->info_flags = 0;
 VAR_4->pcm = VAR_6;

 return 0;
}
