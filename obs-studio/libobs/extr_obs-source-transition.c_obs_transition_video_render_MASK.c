
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_12__ ;


typedef scalar_t__ uint32_t ;
struct transition_state {scalar_t__* s; scalar_t__ transitioning_audio; scalar_t__ transitioning_video; } ;
struct matrix4 {int dummy; } ;
typedef int (* obs_transition_video_render_callback_t ) (int ,int *,int *,float,scalar_t__,scalar_t__) ;
struct TYPE_22__ {int data; } ;
struct TYPE_23__ {int transitioning_video; TYPE_2__ context; struct matrix4* transition_matrices; int transitioning_audio; } ;
typedef TYPE_3__ obs_source_t ;
typedef int gs_texture_t ;
struct TYPE_21__ {int * transparent_texture; } ;
struct TYPE_20__ {TYPE_1__ video; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,struct transition_state*) ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 int * FUNC_3 (TYPE_3__*,size_t) ;
 float FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (struct matrix4*) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 (TYPE_3__*) ;
 int FUNC_12 (TYPE_3__*) ;
 TYPE_12__* VAR_2 ;
 int FUNC_13 (TYPE_3__*,char*,char*) ;
 int FUNC_14 (scalar_t__) ;
 int FUNC_15 (scalar_t__) ;
 int FUNC_16 (TYPE_3__*) ;
 int FUNC_17 (TYPE_3__*,scalar_t__,size_t) ;
 int FUNC_18 (TYPE_3__*,char*) ;
 scalar_t__ FUNC_19 (TYPE_3__*) ;
 int FUNC_20 (TYPE_3__*) ;
 int FUNC_21 (TYPE_3__*) ;

void FUNC_22(obs_source_t *VAR_3,
     obs_transition_video_render_callback_t VAR_4)
{
 struct transition_state VAR_5;
 struct matrix4 VAR_6[2];
 bool VAR_7 = 0;
 bool VAR_8 = 0;
 bool VAR_9 = 0;
 float VAR_10;

 if (!FUNC_18(VAR_3, "obs_transition_video_render"))
  return;

 VAR_10 = FUNC_4(VAR_3);

 FUNC_12(VAR_3);

 if (VAR_10 >= 1.0f && VAR_3->transitioning_video) {
  VAR_3->transitioning_video = 0;
  VAR_9 = 1;

  if (!VAR_3->transitioning_audio) {
   FUNC_16(VAR_3);
   VAR_8 = 1;
  }
 }
 FUNC_0(VAR_3, &VAR_5);
 VAR_6[0] = VAR_3->transition_matrices[0];
 VAR_6[1] = VAR_3->transition_matrices[1];

 FUNC_21(VAR_3);

 if (VAR_5.transitioning_video)
  VAR_7 = FUNC_19(VAR_3) == 0;

 if (VAR_5.transitioning_video && VAR_7 && VAR_4) {
  gs_texture_t *VAR_11[2];
  uint32_t VAR_12;
  uint32_t VAR_13;

  for (size_t VAR_14 = 0; VAR_14 < 2; VAR_14++) {
   if (VAR_5.s[VAR_14]) {
    FUNC_17(VAR_3, VAR_5.s[VAR_14], VAR_14);
    VAR_11[VAR_14] = FUNC_3(VAR_3, VAR_14);
    if (!VAR_11[VAR_14])
     VAR_11[VAR_14] = VAR_2->video.transparent_texture;
   } else {
    VAR_11[VAR_14] = VAR_2->video.transparent_texture;
   }
  }

  VAR_12 = FUNC_1(VAR_3);
  VAR_13 = FUNC_2(VAR_3);
  if (VAR_12 && VAR_13) {
   FUNC_7();
   FUNC_5(VAR_1, VAR_0);

   VAR_4(VAR_3->context.data, VAR_11[0], VAR_11[1], VAR_10,
     VAR_12, VAR_13);

   FUNC_6();
  }

 } else if (VAR_5.transitioning_audio) {
  if (VAR_5.s[1]) {
   FUNC_10();
   FUNC_8(&VAR_6[1]);
   FUNC_15(VAR_5.s[1]);
   FUNC_9();
  }
 } else {
  if (VAR_5.s[0]) {
   FUNC_10();
   FUNC_8(&VAR_6[0]);
   FUNC_15(VAR_5.s[0]);
   FUNC_9();
  }
 }

 if (VAR_7)
  FUNC_20(VAR_3);

 FUNC_14(VAR_5.s[0]);
 FUNC_14(VAR_5.s[1]);

 if (VAR_9)
  FUNC_13(VAR_3, "source_transition_video_stop",
        "transition_video_stop");
 if (VAR_8)
  FUNC_11(VAR_3);
}
