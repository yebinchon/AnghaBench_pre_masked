
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int frame_ready; } ;
struct TYPE_7__ {int frame_ready; } ;
struct TYPE_8__ {int looping; int active; int stopping; int mutex; TYPE_1__ a; int has_audio; TYPE_2__ v; int has_video; } ;
typedef TYPE_3__ mp_media_t ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static inline bool FUNC_3(mp_media_t *VAR_0)
{
 bool VAR_1 = !VAR_0->has_video || !VAR_0->v.frame_ready;
 bool VAR_2 = !VAR_0->has_audio || !VAR_0->a.frame_ready;
 bool VAR_3 = VAR_1 && VAR_2;

 if (VAR_3) {
  bool VAR_4;

  FUNC_1(&VAR_0->mutex);
  VAR_4 = VAR_0->looping;
  if (!VAR_4) {
   VAR_0->active = 0;
   VAR_0->stopping = 1;
  }
  FUNC_2(&VAR_0->mutex);

  FUNC_0(VAR_0);
 }

 return VAR_3;
}
