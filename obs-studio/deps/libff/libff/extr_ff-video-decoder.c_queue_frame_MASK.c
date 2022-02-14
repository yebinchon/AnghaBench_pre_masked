
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ff_frame {double pts; int clock; TYPE_2__* frame; } ;
struct ff_decoder {int frame_queue; int callbacks; int clock; TYPE_1__* codec; scalar_t__ abort; } ;
struct TYPE_5__ {scalar_t__ width; scalar_t__ height; scalar_t__ format; } ;
struct TYPE_4__ {scalar_t__ width; scalar_t__ height; scalar_t__ pix_fmt; } ;
typedef int AVFrame ;
typedef TYPE_1__ AVCodecContext ;


 TYPE_2__* FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__**) ;
 int FUNC_2 (struct ff_frame*,int ) ;
 int FUNC_3 (int *,struct ff_frame*) ;
 struct ff_frame* FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static bool FUNC_7(struct ff_decoder *VAR_0, AVFrame *VAR_1,
                        double VAR_2)
{
 struct ff_frame *VAR_3;
 bool VAR_4;

 FUNC_5(&VAR_0->frame_queue);

 if (VAR_0->abort) {
  return 0;
 }

 VAR_3 = FUNC_4(&VAR_0->frame_queue);



 AVCodecContext *VAR_5 = VAR_0->codec;
 VAR_4 = (VAR_3->frame == ((void*)0) ||
                    VAR_3->frame->width != VAR_5->width ||
                    VAR_3->frame->height != VAR_5->height ||
                    VAR_3->frame->format != VAR_5->pix_fmt);

 if (VAR_3->frame != ((void*)0)) {


  FUNC_1(&VAR_3->frame);
 }

 VAR_3->frame = FUNC_0(VAR_1);
 VAR_3->clock = FUNC_6(VAR_0->clock);

 if (VAR_4)
  FUNC_2(VAR_3, VAR_0->callbacks);

 VAR_3->pts = VAR_2;

 FUNC_3(&VAR_0->frame_queue, VAR_3);

 return 1;
}
