
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lola_stream {int index; scalar_t__ opened; struct lola_stream* master; } ;
struct lola_pcm {int num_streams; struct lola_stream* streams; } ;



__attribute__((used)) static void FUNC_0(struct lola_pcm *VAR_0,
           struct lola_stream *VAR_1)
{
 int VAR_2;
 for (VAR_2 = VAR_1->index + 1; VAR_2 < VAR_0->num_streams; VAR_2++) {
  struct lola_stream *VAR_3 = &VAR_0->streams[VAR_2];
  if (VAR_3->master != VAR_1)
   break;
  VAR_3->master = ((void*)0);
  VAR_3->opened = 0;
 }
}
