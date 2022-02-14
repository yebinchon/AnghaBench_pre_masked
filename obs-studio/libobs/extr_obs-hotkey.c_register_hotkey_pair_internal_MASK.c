
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct obs_context_data {int dummy; } ;
typedef int obs_hotkey_registerer_t ;
struct TYPE_11__ {int pair_id; void** id; } ;
typedef TYPE_4__ obs_hotkey_pair_t ;
typedef int obs_hotkey_pair_id ;
typedef int obs_hotkey_active_func ;
struct TYPE_9__ {TYPE_1__* array; } ;
struct TYPE_10__ {TYPE_2__ hotkeys; } ;
struct TYPE_12__ {TYPE_3__ hotkeys; } ;
struct TYPE_8__ {void* pair_partner_id; } ;


 int VAR_0 ;
 TYPE_4__* FUNC_0 (struct obs_context_data*,int ,int ,void*,void*) ;
 scalar_t__ FUNC_1 (void*,size_t*) ;
 int FUNC_2 () ;
 TYPE_6__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_3 (int ,void*,struct obs_context_data*,char const*,char const*,int ,TYPE_4__*) ;
 int FUNC_4 () ;

__attribute__((used)) static obs_hotkey_pair_id FUNC_5(
 obs_hotkey_registerer_t VAR_4, void *VAR_5,
 void *(*VAR_6)(void *), struct obs_context_data *VAR_7,
 const char *VAR_8, const char *VAR_9, const char *VAR_10,
 const char *VAR_11, obs_hotkey_active_func VAR_12,
 obs_hotkey_active_func VAR_13, void *VAR_14, void *VAR_15)
{

 if (!FUNC_2())
  return VAR_0;

 obs_hotkey_pair_t *VAR_16 =
  FUNC_0(VAR_7, VAR_12, VAR_13, VAR_14, VAR_15);

 VAR_16->id[0] = FUNC_3(VAR_4, VAR_6(VAR_5),
         VAR_7, VAR_8, VAR_9,
         VAR_2,
         VAR_16);

 VAR_16->id[1] = FUNC_3(VAR_4, VAR_6(VAR_5),
         VAR_7, VAR_10, VAR_11,
         VAR_3,
         VAR_16);

 size_t VAR_17;
 if (FUNC_1(VAR_16->id[0], &VAR_17))
  VAR_1->hotkeys.hotkeys.array[VAR_17].pair_partner_id = VAR_16->id[1];

 if (FUNC_1(VAR_16->id[1], &VAR_17))
  VAR_1->hotkeys.hotkeys.array[VAR_17].pair_partner_id = VAR_16->id[0];

 obs_hotkey_pair_id VAR_18 = VAR_16->pair_id;

 FUNC_4();
 return VAR_18;
}
