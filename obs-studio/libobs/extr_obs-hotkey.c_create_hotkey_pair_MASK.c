
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct obs_context_data {int hotkey_pairs; } ;
struct TYPE_8__ {scalar_t__ pair_id; void** data; void** id; void** func; } ;
typedef TYPE_2__ obs_hotkey_pair_t ;
typedef void* obs_hotkey_active_func ;
struct TYPE_10__ {TYPE_2__* array; } ;
struct TYPE_7__ {scalar_t__ next_pair_id; TYPE_5__ hotkey_pairs; } ;
struct TYPE_9__ {TYPE_1__ hotkeys; } ;


 int VAR_0 ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,scalar_t__*) ;
 TYPE_2__* FUNC_2 (TYPE_5__) ;
 int FUNC_3 () ;
 TYPE_3__* VAR_3 ;

__attribute__((used)) static obs_hotkey_pair_t *FUNC_4(struct obs_context_data *VAR_4,
          obs_hotkey_active_func VAR_5,
          obs_hotkey_active_func VAR_6,
          void *VAR_7, void *VAR_8)
{
 if ((VAR_3->hotkeys.next_pair_id + 1) == VAR_2)
  FUNC_0(VAR_0, "obs-hotkey: Available hotkey pair ids "
      "exhausted");

 obs_hotkey_pair_t *VAR_9 = VAR_3->hotkeys.hotkey_pairs.array;
 obs_hotkey_pair_t *VAR_10 = FUNC_2(VAR_3->hotkeys.hotkey_pairs);

 VAR_10->pair_id = VAR_3->hotkeys.next_pair_id++;
 VAR_10->func[0] = VAR_5;
 VAR_10->func[1] = VAR_6;
 VAR_10->id[0] = VAR_1;
 VAR_10->id[1] = VAR_1;
 VAR_10->data[0] = VAR_7;
 VAR_10->data[1] = VAR_8;

 if (VAR_4)
  FUNC_1(VAR_4->hotkey_pairs, &VAR_10->pair_id);

 if (VAR_9 != VAR_3->hotkeys.hotkey_pairs.array)
  FUNC_3();

 return VAR_10;
}
