
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_14__ ;


struct obs_scene_item {int ref; int align; int user_visible; int locked; int is_group; int visible; struct obs_scene_item* prev; struct obs_scene_item* next; int item_render; int audio_actions; int box_transform; int draw_transform; int scale; int active_refs; int toggle_visibility; int private_settings; int actions_mutex; TYPE_4__* parent; scalar_t__ id; TYPE_3__* source; } ;
struct item_action {int visible; int timestamp; } ;
typedef int pthread_mutex_t ;
struct TYPE_18__ {scalar_t__ id; } ;
struct TYPE_20__ {TYPE_1__ info; } ;
typedef TYPE_3__ obs_source_t ;
typedef struct obs_scene_item obs_sceneitem_t ;
struct TYPE_21__ {TYPE_9__* source; struct obs_scene_item* first_item; scalar_t__ id_counter; } ;
typedef TYPE_4__ obs_scene_t ;
struct TYPE_19__ {int private; } ;
struct TYPE_22__ {TYPE_2__ context; } ;
struct TYPE_17__ {scalar_t__ id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*) ;
 struct obs_scene_item* FUNC_1 (int) ;
 int FUNC_2 (int ,struct item_action*) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*) ;
 TYPE_14__ VAR_7 ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (TYPE_4__*,struct obs_scene_item*,int ) ;
 scalar_t__ FUNC_7 (struct obs_scene_item*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 (TYPE_9__*,TYPE_3__*) ;
 int FUNC_13 (TYPE_3__*) ;
 int FUNC_14 (TYPE_3__*) ;
 int FUNC_15 (TYPE_3__*) ;
 int FUNC_16 (int *,int) ;
 int FUNC_17 () ;
 int FUNC_18 (int *) ;
 scalar_t__ FUNC_19 (int *,int *) ;
 int VAR_8 ;
 int FUNC_20 (int ,char*,int ,struct obs_scene_item*) ;
 scalar_t__ FUNC_21 (TYPE_3__*) ;
 int FUNC_22 (int *,float,float) ;

__attribute__((used)) static obs_sceneitem_t *FUNC_23(obs_scene_t *VAR_9,
            obs_source_t *VAR_10,
            obs_sceneitem_t *VAR_11)
{
 struct obs_scene_item *VAR_12;
 struct obs_scene_item *VAR_13;
 pthread_mutex_t VAR_14;

 struct item_action VAR_15 = {.visible = 1,
         .timestamp = FUNC_17()};

 if (!VAR_9)
  return ((void*)0);

 if (!VAR_10) {
  FUNC_0(VAR_2, "Tried to add a NULL source to a scene");
  return ((void*)0);
 }

 if (FUNC_19(&VAR_14, ((void*)0)) != 0) {
  FUNC_0(VAR_3, "Failed to create scene item mutex");
  return ((void*)0);
 }

 if (!FUNC_12(VAR_9->source, VAR_10)) {
  FUNC_0(VAR_3, "Failed to add source to scene due to "
      "infinite source recursion");
  FUNC_18(&VAR_14);
  return ((void*)0);
 }

 VAR_13 = FUNC_1(sizeof(struct obs_scene_item));
 VAR_13->source = VAR_10;
 VAR_13->id = ++VAR_9->id_counter;
 VAR_13->parent = VAR_9;
 VAR_13->ref = 1;
 VAR_13->align = VAR_5 | VAR_4;
 VAR_13->actions_mutex = VAR_14;
 VAR_13->user_visible = 1;
 VAR_13->locked = 0;
 VAR_13->is_group = VAR_10->info.id == VAR_7.id;
 VAR_13->private_settings = FUNC_9();
 VAR_13->toggle_visibility = VAR_6;
 FUNC_16(&VAR_13->active_refs, 1);
 FUNC_22(&VAR_13->scale, 1.0f, 1.0f);
 FUNC_8(&VAR_13->draw_transform);
 FUNC_8(&VAR_13->box_transform);

 FUNC_13(VAR_10);

 if (FUNC_21(VAR_10)) {
  VAR_13->visible = 0;
  FUNC_2(VAR_13->audio_actions, &VAR_15);
 } else {
  VAR_13->visible = 1;
 }

 if (FUNC_7(VAR_13)) {
  FUNC_10();
  VAR_13->item_render = FUNC_5(VAR_0, VAR_1);
  FUNC_11();
 }

 FUNC_3(VAR_9);

 if (VAR_11) {
  obs_sceneitem_t *VAR_16 = VAR_11->next;
  if (VAR_16)
   VAR_16->prev = VAR_13;
  VAR_13->next = VAR_11->next;
  VAR_13->prev = VAR_11;
  VAR_11->next = VAR_13;
 } else {
  VAR_12 = VAR_9->first_item;
  if (!VAR_12) {
   VAR_9->first_item = VAR_13;
  } else {
   while (VAR_12->next)
    VAR_12 = VAR_12->next;

   VAR_12->next = VAR_13;
   VAR_13->prev = VAR_12;
  }
 }

 FUNC_4(VAR_9);

 if (!VAR_9->source->context.private)
  FUNC_6(VAR_9, VAR_13, FUNC_14(VAR_10));

 FUNC_20(FUNC_15(VAR_10), "rename",
          VAR_8, VAR_13);

 return VAR_13;
}
