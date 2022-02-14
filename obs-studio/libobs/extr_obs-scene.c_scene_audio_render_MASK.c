
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
struct obs_source_audio_mix {TYPE_1__* output; } ;
struct obs_scene_item {struct obs_scene_item* next; int source; scalar_t__ visible; } ;
struct obs_scene {struct obs_scene_item* first_item; } ;
struct TYPE_2__ {float** data; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct obs_scene_item*,float**,scalar_t__,size_t) ;
 int FUNC_1 (struct obs_scene*) ;
 int FUNC_2 (struct obs_scene*) ;
 int FUNC_3 (float*) ;
 int FUNC_4 (float*,float*,size_t,size_t) ;
 int FUNC_5 (float*,float*,float*,size_t,size_t) ;
 scalar_t__ FUNC_6 (size_t,scalar_t__) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ,struct obs_source_audio_mix*) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (struct obs_scene_item*,size_t) ;

__attribute__((used)) static bool FUNC_11(void *VAR_2, uint64_t *VAR_3,
          struct obs_source_audio_mix *VAR_4,
          uint32_t VAR_5, size_t VAR_6,
          size_t VAR_7)
{
 uint64_t VAR_8 = 0;
 float *VAR_9 = ((void*)0);
 struct obs_source_audio_mix VAR_10;
 struct obs_scene *VAR_11 = VAR_2;
 struct obs_scene_item *VAR_12;

 FUNC_1(VAR_11);

 VAR_12 = VAR_11->first_item;
 while (VAR_12) {
  if (!FUNC_7(VAR_12->source) && VAR_12->visible) {
   uint64_t VAR_13 =
    FUNC_9(VAR_12->source);

   if (VAR_13 && (!VAR_8 || VAR_13 < VAR_8))
    VAR_8 = VAR_13;
  }

  VAR_12 = VAR_12->next;
 }

 if (!VAR_8) {


  VAR_12 = VAR_11->first_item;
  while (VAR_12) {
   FUNC_10(VAR_12, VAR_7);
   VAR_12 = VAR_12->next;
  }

  FUNC_2(VAR_11);
  return 0;
 }

 VAR_12 = VAR_11->first_item;
 while (VAR_12) {
  uint64_t VAR_14;
  size_t VAR_15, VAR_16;
  bool VAR_17;

  VAR_17 = FUNC_0(VAR_12, &VAR_9, VAR_8,
          VAR_7);

  if (FUNC_7(VAR_12->source)) {
   VAR_12 = VAR_12->next;
   continue;
  }

  VAR_14 = FUNC_9(VAR_12->source);
  if (!VAR_14) {
   VAR_12 = VAR_12->next;
   continue;
  }

  VAR_15 = (size_t)FUNC_6(VAR_7,
       VAR_14 - VAR_8);
  VAR_16 = VAR_0 - VAR_15;

  if (!VAR_17 && !VAR_12->visible) {
   VAR_12 = VAR_12->next;
   continue;
  }

  FUNC_8(VAR_12->source, &VAR_10);
  for (size_t VAR_18 = 0; VAR_18 < VAR_1; VAR_18++) {
   if ((VAR_5 & (1 << VAR_18)) == 0)
    continue;

   for (size_t VAR_19 = 0; VAR_19 < VAR_6; VAR_19++) {
    float *VAR_20 = VAR_4->output[VAR_18].data[VAR_19];
    float *VAR_21 = VAR_10.output[VAR_18].data[VAR_19];

    if (VAR_17)
     FUNC_5(VAR_20, VAR_21, VAR_9, VAR_15,
          VAR_16);
    else
     FUNC_4(VAR_20, VAR_21, VAR_15, VAR_16);
   }
  }

  VAR_12 = VAR_12->next;
 }

 *VAR_3 = VAR_8;
 FUNC_2(VAR_11);

 FUNC_3(VAR_9);
 return 1;
}
