
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_7__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {TYPE_1__* frame; scalar_t__ frame_ready; } ;
struct TYPE_9__ {int eof; scalar_t__ scale_format; TYPE_7__ v; int swscale; scalar_t__ has_video; TYPE_7__ a; scalar_t__ has_audio; } ;
typedef TYPE_2__ mp_media_t ;
struct TYPE_8__ {scalar_t__ format; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_7__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static bool FUNC_5(mp_media_t *VAR_1)
{
 while (!FUNC_4(VAR_1)) {
  if (!VAR_1->eof) {
   int VAR_2 = FUNC_3(VAR_1);
   if (VAR_2 == VAR_0)
    VAR_1->eof = 1;
   else if (VAR_2 < 0)
    return 0;
  }

  if (VAR_1->has_video && !FUNC_1(&VAR_1->v))
   return 0;
  if (VAR_1->has_audio && !FUNC_1(&VAR_1->a))
   return 0;
 }

 if (VAR_1->has_video && VAR_1->v.frame_ready && !VAR_1->swscale) {
  VAR_1->scale_format = FUNC_0(VAR_1->v.frame->format);
  if (VAR_1->scale_format != VAR_1->v.frame->format) {
   if (!FUNC_2(VAR_1)) {
    return 0;
   }
  }
 }

 return 1;
}
