
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct obs_context_data {int hotkey_data; } ;
struct TYPE_9__ {int pair_partner_id; void* registerer; int registerer_type; void* data; int func; void* description; void* name; int id; } ;
typedef TYPE_2__ obs_hotkey_t ;
typedef int obs_hotkey_registerer_t ;
typedef int obs_hotkey_id ;
typedef int obs_hotkey_func ;
typedef int obs_data_array_t ;
struct TYPE_11__ {TYPE_2__* array; } ;
struct TYPE_8__ {scalar_t__ next_id; TYPE_7__ hotkeys; } ;
struct TYPE_10__ {TYPE_1__ hotkeys; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 void* FUNC_1 (char const*) ;
 int FUNC_2 (struct obs_context_data*,int ) ;
 TYPE_2__* FUNC_3 (TYPE_7__) ;
 int FUNC_4 () ;
 int FUNC_5 (char*,TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*,int *) ;
 TYPE_3__* VAR_3 ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int ,char const*) ;

__attribute__((used)) static inline obs_hotkey_id
FUNC_9(obs_hotkey_registerer_t VAR_4, void *VAR_5,
        struct obs_context_data *VAR_6, const char *VAR_7,
        const char *VAR_8, obs_hotkey_func VAR_9,
        void *VAR_10)
{
 if ((VAR_3->hotkeys.next_id + 1) == VAR_1)
  FUNC_0(VAR_0, "obs-hotkey: Available hotkey ids exhausted");

 obs_hotkey_t *VAR_11 = VAR_3->hotkeys.hotkeys.array;
 obs_hotkey_id VAR_12 = VAR_3->hotkeys.next_id++;
 obs_hotkey_t *VAR_13 = FUNC_3(VAR_3->hotkeys.hotkeys);

 VAR_13->id = VAR_12;
 VAR_13->name = FUNC_1(VAR_7);
 VAR_13->description = FUNC_1(VAR_8);
 VAR_13->func = VAR_9;
 VAR_13->data = VAR_10;
 VAR_13->registerer_type = VAR_4;
 VAR_13->registerer = VAR_5;
 VAR_13->pair_partner_id = VAR_2;

 if (VAR_6) {
  obs_data_array_t *VAR_14 =
   FUNC_8(VAR_6->hotkey_data, VAR_7);
  FUNC_6(VAR_13, VAR_14);
  FUNC_7(VAR_14);

  FUNC_2(VAR_6, VAR_12);
 }

 if (VAR_11 != VAR_3->hotkeys.hotkeys.array)
  FUNC_4();

 FUNC_5("hotkey_register", VAR_13);

 return VAR_12;
}
