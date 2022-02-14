
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lola_stream {scalar_t__ substream; scalar_t__ running; } ;
struct lola_pcm {int num_streams; struct lola_stream* streams; } ;
struct lola {int dummy; } ;


 int FUNC_0 (scalar_t__) ;

void FUNC_1(struct lola *VAR_0, struct lola_pcm *VAR_1, unsigned int VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_2 && VAR_3 < VAR_1->num_streams; VAR_3++) {
  if (VAR_2 & (1 << VAR_3)) {
   struct lola_stream *VAR_4 = &VAR_1->streams[VAR_3];
   if (VAR_4->substream && VAR_4->running)
    FUNC_0(VAR_4->substream);
   VAR_2 &= ~(1 << VAR_3);
  }
 }
}
