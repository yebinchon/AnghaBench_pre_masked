
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ size; int * data; } ;
struct ff_packet {TYPE_7__ base; int * clock; } ;
struct TYPE_9__ {int * data; } ;
struct TYPE_10__ {TYPE_1__ base; } ;
struct TYPE_12__ {TYPE_2__ flush_packet; } ;
struct ff_decoder {int codec; TYPE_4__ packet_queue; scalar_t__ eof; } ;
struct TYPE_11__ {scalar_t__ nb_samples; int format; } ;
typedef TYPE_3__ AVFrame ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_7__*) ;
 int FUNC_2 (int ,TYPE_3__*,int*,TYPE_7__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct ff_decoder*,struct ff_packet*) ;
 int FUNC_5 (struct ff_decoder*,struct ff_packet*) ;
 int FUNC_6 (TYPE_4__*,struct ff_packet*,int) ;
 int FUNC_7 (struct ff_packet*,int) ;

__attribute__((used)) static int FUNC_8(struct ff_decoder *VAR_2, struct ff_packet *VAR_3,
                        AVFrame *VAR_4, bool *VAR_5)
{
 int VAR_6;
 int VAR_7;

 while (1) {
  if (VAR_2->eof)
   VAR_7 = FUNC_6(&VAR_2->packet_queue, VAR_3,
                          0);
  else
   VAR_7 = FUNC_6(&VAR_2->packet_queue, VAR_3,
                          1);

  if (VAR_7 == VAR_0) {
   return 0;
  } else if (VAR_7 == VAR_1) {
   return -1;
  }

  if (VAR_3->base.data ==
      VAR_2->packet_queue.flush_packet.base.data) {
   FUNC_3(VAR_2->codec);
   continue;
  }


  if (VAR_3->clock != ((void*)0))
   if (!FUNC_5(VAR_2, VAR_3))
    return -1;

  while (VAR_3->base.size > 0) {
   int VAR_8;

   FUNC_4(VAR_2, VAR_3);

   VAR_6 = FUNC_2(VAR_2->codec,
                                         VAR_4, &VAR_8,
                                         &VAR_3->base);

   if (VAR_6 < 0)
    break;

   FUNC_7(VAR_3, VAR_6);

   if (VAR_8 == 0 || VAR_4->nb_samples <= 0)
    continue;

   *VAR_5 = VAR_8 != 0;

   return VAR_4->nb_samples *
          FUNC_0(VAR_4->format);
  }

  if (VAR_3->base.data != ((void*)0))
   FUNC_1(&VAR_3->base);
 }
}
