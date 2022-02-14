
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int obs_hotkey_t ;
typedef int calldata_t ;
struct TYPE_3__ {int signals; } ;
struct TYPE_4__ {TYPE_1__ hotkeys; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,int *) ;
 TYPE_2__* VAR_0 ;
 int FUNC_3 (int ,char const*,int *) ;

__attribute__((used)) static void FUNC_4(const char *VAR_1, obs_hotkey_t *VAR_2)
{
 calldata_t VAR_3;
 FUNC_1(&VAR_3);
 FUNC_2(&VAR_3, "key", VAR_2);

 FUNC_3(VAR_0->hotkeys.signals, VAR_1, &VAR_3);

 FUNC_0(&VAR_3);
}
