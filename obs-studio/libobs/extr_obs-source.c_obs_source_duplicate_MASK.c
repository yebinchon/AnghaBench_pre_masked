
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_16__ {int output_flags; scalar_t__ type; int id; } ;
struct TYPE_15__ {int * settings; } ;
struct TYPE_17__ {TYPE_2__ info; int * private_settings; int flags; int muted; int volume; int user_muted; int user_volume; int sync_offset; int audio_mixers; TYPE_1__ context; } ;
typedef TYPE_3__ obs_source_t ;
typedef int obs_scene_t ;
typedef int obs_data_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (TYPE_3__*,TYPE_3__*,int) ;
 int FUNC_1 (int *,int *) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (TYPE_3__*) ;
 int * FUNC_5 (int *,char const*,int ) ;
 int * FUNC_6 (TYPE_3__*) ;
 TYPE_3__* FUNC_7 (int *) ;
 int FUNC_8 (TYPE_3__*) ;
 TYPE_3__* FUNC_9 (int ,char const*,int *,int *) ;
 TYPE_3__* FUNC_10 (int ,char const*,int *) ;
 int FUNC_11 (TYPE_3__*,char*) ;

obs_source_t *FUNC_12(obs_source_t *VAR_5, const char *VAR_6,
       bool VAR_7)
{
 obs_source_t *VAR_8;
 obs_data_t *VAR_9;

 if (!FUNC_11(VAR_5, "obs_source_duplicate"))
  return ((void*)0);

 if ((VAR_5->info.output_flags & VAR_2) != 0) {
  FUNC_8(VAR_5);
  return VAR_5;
 }

 if (VAR_5->info.type == VAR_4) {
  obs_scene_t *VAR_10 = FUNC_6(VAR_5);
  if (!VAR_10)
   VAR_10 = FUNC_4(VAR_5);
  if (!VAR_10)
   return ((void*)0);

  obs_scene_t *VAR_11 = FUNC_5(
   VAR_10, VAR_6,
   VAR_7 ? VAR_1
           : VAR_0);
  obs_source_t *VAR_12 = FUNC_7(VAR_11);
  return VAR_12;
 }

 VAR_9 = FUNC_2();
 FUNC_1(VAR_9, VAR_5->context.settings);

 VAR_8 = VAR_7
        ? FUNC_10(VAR_5->info.id,
        VAR_6, VAR_9)
        : FUNC_9(VAR_5->info.id, VAR_6,
       VAR_9, ((void*)0));

 VAR_8->audio_mixers = VAR_5->audio_mixers;
 VAR_8->sync_offset = VAR_5->sync_offset;
 VAR_8->user_volume = VAR_5->user_volume;
 VAR_8->user_muted = VAR_5->user_muted;
 VAR_8->volume = VAR_5->volume;
 VAR_8->muted = VAR_5->muted;
 VAR_8->flags = VAR_5->flags;

 FUNC_1(VAR_8->private_settings, VAR_5->private_settings);

 if (VAR_5->info.type != VAR_3)
  FUNC_0(VAR_8, VAR_5, VAR_7);

 FUNC_3(VAR_9);
 return VAR_8;
}
