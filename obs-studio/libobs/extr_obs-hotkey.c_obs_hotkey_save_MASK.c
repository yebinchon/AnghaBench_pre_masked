
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int obs_hotkey_id ;
typedef int obs_data_array_t ;
struct TYPE_4__ {int * array; } ;
struct TYPE_5__ {TYPE_1__ hotkeys; } ;
struct TYPE_6__ {TYPE_2__ hotkeys; } ;


 scalar_t__ FUNC_0 (int ,size_t*) ;
 int FUNC_1 () ;
 TYPE_3__* VAR_0 ;
 int * FUNC_2 (int *) ;
 int FUNC_3 () ;

obs_data_array_t *FUNC_4(obs_hotkey_id VAR_1)
{
 size_t VAR_2;
 obs_data_array_t *VAR_3 = ((void*)0);

 if (!FUNC_1())
  return VAR_3;

 if (FUNC_0(VAR_1, &VAR_2))
  VAR_3 = FUNC_2(&VAR_0->hotkeys.hotkeys.array[VAR_2]);
 FUNC_3();

 return VAR_3;
}
