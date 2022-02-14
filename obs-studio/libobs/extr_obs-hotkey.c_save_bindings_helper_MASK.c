
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct save_bindings_helper_t {int array; TYPE_1__* hotkey; } ;
struct TYPE_6__ {int key; int modifiers; } ;
struct TYPE_7__ {scalar_t__ hotkey_id; TYPE_2__ key; } ;
typedef TYPE_3__ obs_hotkey_binding_t ;
typedef int obs_data_t ;
struct TYPE_5__ {scalar_t__ id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (size_t) ;
 int FUNC_1 (int ,int *) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int *,char*,int ) ;

__attribute__((used)) static inline bool FUNC_7(void *VAR_4, size_t VAR_5,
     obs_hotkey_binding_t *VAR_6)
{
 FUNC_0(VAR_5);
 struct save_bindings_helper_t *VAR_7 = VAR_4;

 if (VAR_7->hotkey->id != VAR_6->hotkey_id)
  return 1;

 obs_data_t *VAR_8 = FUNC_2();

 uint32_t VAR_9 = VAR_6->key.modifiers;
 FUNC_6(VAR_9, VAR_8, "shift", VAR_3);
 FUNC_6(VAR_9, VAR_8, "control", VAR_2);
 FUNC_6(VAR_9, VAR_8, "alt", VAR_0);
 FUNC_6(VAR_9, VAR_8, "command", VAR_1);

 FUNC_4(VAR_8, "key", FUNC_5(VAR_6->key.key));

 FUNC_1(VAR_7->array, VAR_8);

 FUNC_3(VAR_8);

 return 1;
}
