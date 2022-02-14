
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int array; } ;
struct TYPE_6__ {int settings; int desc; TYPE_2__ path; } ;
struct TYPE_4__ {int array; } ;
struct obs_lua_script {int mutex; int * script; TYPE_3__ base; void* save; void* update; void* get_properties; void* tick; struct obs_lua_script* next_tick; struct obs_lua_script** p_prev_next_tick; TYPE_1__ dir; } ;
struct dstr {int array; int member_0; } ;
typedef int lua_State ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct obs_lua_script* VAR_3 ;
 int FUNC_3 (int *,char const*) ;
 int FUNC_4 (struct dstr*) ;
 int FUNC_5 (struct dstr*,int ,int ) ;
 struct obs_lua_script* VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (int ,int ,int) ;
 int FUNC_7 (int *,int ) ;
 scalar_t__ FUNC_8 (int *,int ) ;
 int * FUNC_9 () ;
 int FUNC_10 (int *) ;
 void* FUNC_11 (int *,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,char*) ;
 int FUNC_14 (int *) ;
 scalar_t__ FUNC_15 (int *,int) ;
 scalar_t__ FUNC_16 (int *,int) ;
 scalar_t__ FUNC_17 (int *,int,int,int ) ;
 int FUNC_18 (int *,int ) ;
 int FUNC_19 (int *,int) ;
 char* FUNC_20 (int *,int) ;
 int FUNC_21 (int *) ;
 int VAR_6 ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (TYPE_3__*,char*,...) ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static bool FUNC_25(struct obs_lua_script *VAR_9)
{
 struct dstr VAR_10 = {0};
 bool VAR_11 = 0;
 int VAR_12;

 lua_State *VAR_13 = FUNC_9();
 if (!VAR_13) {
  FUNC_24(&VAR_9->base, "Failed to create new lua state");
  goto fail;
 }

 FUNC_22(&VAR_9->mutex);

 FUNC_10(VAR_13);
 FUNC_21(VAR_13);

 if (FUNC_7(VAR_13, VAR_7) != 0) {
  FUNC_24(&VAR_9->base, "Error executing startup script 1: %s",
       FUNC_20(VAR_13, -1));
  goto fail;
 }

 FUNC_5(&VAR_10, VAR_5, VAR_9->dir.array);
 VAR_12 = FUNC_7(VAR_13, VAR_10.array);
 FUNC_4(&VAR_10);

 if (VAR_12 != 0) {
  FUNC_24(&VAR_9->base, "Error executing startup script 2: %s",
       FUNC_20(VAR_13, -1));
  goto fail;
 }

 VAR_3 = VAR_9;

 FUNC_2(VAR_13);
 FUNC_0(VAR_13);




 if (FUNC_8(VAR_13, VAR_9->base.path.array) != 0) {
  FUNC_24(&VAR_9->base, "Error loading file: %s",
       FUNC_20(VAR_13, -1));
  goto fail;
 }

 if (FUNC_17(VAR_13, 0, VAR_0, 0) != 0) {
  FUNC_24(&VAR_9->base, "Error running file: %s",
       FUNC_20(VAR_13, -1));
  goto fail;
 }

 VAR_12 = FUNC_14(VAR_13);
 if (VAR_12 == 1 && FUNC_15(VAR_13, -1)) {
  bool VAR_14 = FUNC_19(VAR_13, -1);

  if (!VAR_14) {
   goto fail;
  }
 }

 FUNC_13(VAR_13, "script_tick");
 if (FUNC_16(VAR_13, -1)) {
  FUNC_22(&VAR_8);

  struct obs_lua_script *VAR_15 = VAR_4;
  VAR_9->next_tick = VAR_15;
  VAR_9->p_prev_next_tick = &VAR_4;
  if (VAR_15)
   VAR_15->p_prev_next_tick = &VAR_9->next_tick;
  VAR_4 = VAR_9;

  VAR_9->tick = FUNC_11(VAR_13, VAR_2);

  FUNC_23(&VAR_8);
 }

 FUNC_13(VAR_13, "script_properties");
 if (FUNC_16(VAR_13, -1))
  VAR_9->get_properties = FUNC_11(VAR_13, VAR_2);
 else
  VAR_9->get_properties = VAR_1;

 FUNC_13(VAR_13, "script_update");
 if (FUNC_16(VAR_13, -1))
  VAR_9->update = FUNC_11(VAR_13, VAR_2);
 else
  VAR_9->update = VAR_1;

 FUNC_13(VAR_13, "script_save");
 if (FUNC_16(VAR_13, -1))
  VAR_9->save = FUNC_11(VAR_13, VAR_2);
 else
  VAR_9->save = VAR_1;

 FUNC_13(VAR_13, "script_defaults");
 if (FUNC_16(VAR_13, -1)) {
  FUNC_6(VAR_6, VAR_9->base.settings, 0);
  if (FUNC_17(VAR_13, 1, 0, 0) != 0) {
   FUNC_24(&VAR_9->base,
        "Error calling "
        "script_defaults: %s",
        FUNC_20(VAR_13, -1));
  }
 }

 FUNC_13(VAR_13, "script_description");
 if (FUNC_16(VAR_13, -1)) {
  if (FUNC_17(VAR_13, 0, 1, 0) != 0) {
   FUNC_24(&VAR_9->base,
        "Error calling "
        "script_defaults: %s",
        FUNC_20(VAR_13, -1));
  } else {
   const char *VAR_16 = FUNC_20(VAR_13, -1);
   FUNC_3(&VAR_9->base.desc, VAR_16);
  }
 }

 FUNC_13(VAR_13, "script_load");
 if (FUNC_16(VAR_13, -1)) {
  FUNC_6(VAR_6, VAR_9->base.settings, 0);
  if (FUNC_17(VAR_13, 1, 0, 0) != 0) {
   FUNC_24(&VAR_9->base,
        "Error calling "
        "script_load: %s",
        FUNC_20(VAR_13, -1));
  }
 }

 VAR_9->script = VAR_13;
 VAR_11 = 1;

fail:
 if (VAR_13) {
  FUNC_18(VAR_13, 0);
  FUNC_23(&VAR_9->mutex);
 }

 if (!VAR_11 && VAR_13) {
  FUNC_12(VAR_13);
 }

 VAR_3 = ((void*)0);
 return VAR_11;
}
