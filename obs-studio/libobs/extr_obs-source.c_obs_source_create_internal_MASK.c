
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct obs_source_info {scalar_t__ type; int (* create ) (int ,struct obs_source*) ;int type_data; int (* get_defaults2 ) (int ,int ) ;int (* get_defaults ) (int ) ;int id; } ;
struct TYPE_2__ {int data; int settings; } ;
struct obs_source {int owns_info_id; int enabled; int default_flags; int flags; TYPE_1__ context; int last_obs_ver; void* push_to_talk_key; void* push_to_mute_key; int mute_unmute_key; struct obs_source_info info; } ;
typedef struct obs_source obs_source_t ;
typedef int obs_data_t ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (char const*) ;
 struct obs_source* FUNC_2 (int) ;
 struct obs_source_info* FUNC_3 (char const*) ;
 int FUNC_4 (struct obs_source*) ;
 int FUNC_5 (struct obs_source*,char*,int *) ;
 int FUNC_6 (struct obs_source*) ;
 int FUNC_7 (struct obs_source*) ;
 int FUNC_8 (struct obs_source*,int *,char const*,int *,int) ;
 int FUNC_9 (struct obs_source*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ,struct obs_source*) ;

__attribute__((used)) static obs_source_t *
FUNC_13(const char *VAR_5, const char *VAR_6,
      obs_data_t *VAR_7, obs_data_t *VAR_8,
      bool VAR_9, uint32_t VAR_10)
{
 struct obs_source *VAR_11 = FUNC_2(sizeof(struct obs_source));

 const struct obs_source_info *VAR_12 = FUNC_3(VAR_5);
 if (!VAR_12) {
  FUNC_0(VAR_1, "Source ID '%s' not found", VAR_5);

  VAR_11->info.id = FUNC_1(VAR_5);
  VAR_11->owns_info_id = 1;
 } else {
  VAR_11->info = *VAR_12;





  if (VAR_12->type == VAR_4)
  VAR_9
  = 1;
 }

 VAR_11->mute_unmute_key = VAR_3;
 VAR_11->push_to_mute_key = VAR_2;
 VAR_11->push_to_talk_key = VAR_2;
 VAR_11->last_obs_ver = VAR_10;

 if (!FUNC_8(VAR_11, VAR_7, VAR_6, VAR_8,
         VAR_9))
  goto fail;

 if (VAR_12) {
  if (VAR_12->get_defaults) {
   VAR_12->get_defaults(VAR_11->context.settings);
  }
  if (VAR_12->get_defaults2) {
   VAR_12->get_defaults2(VAR_12->type_data,
         VAR_11->context.settings);
  }
 }

 if (!FUNC_6(VAR_11))
  goto fail;

 if (!VAR_9)
  FUNC_7(VAR_11);



 if (VAR_12 && VAR_12->create)
  VAR_11->context.data =
   VAR_12->create(VAR_11->context.settings, VAR_11);
 if ((!VAR_12 || VAR_12->create) && !VAR_11->context.data)
  FUNC_0(VAR_1, "Failed to create source '%s'!", VAR_6);

 FUNC_0(VAR_0, "%ssource '%s' (%s) created", VAR_9 ? "private " : "",
      VAR_6, VAR_5);

 VAR_11->flags = VAR_11->default_flags;
 VAR_11->enabled = 1;

 if (!VAR_9) {
  FUNC_5(VAR_11, "source_create", ((void*)0));
 }

 FUNC_9(VAR_11);
 return VAR_11;

fail:
 FUNC_0(VAR_1, "obs_source_create failed");
 FUNC_4(VAR_11);
 return ((void*)0);
}
