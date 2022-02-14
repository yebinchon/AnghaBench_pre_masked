
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t obs_key_t ;
struct TYPE_3__ {int ** translations; } ;
struct TYPE_4__ {TYPE_1__ hotkeys; } ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*) ;
 TYPE_2__* VAR_0 ;

__attribute__((used)) static void FUNC_2(obs_key_t VAR_1, const char *VAR_2)
{
 FUNC_0(VAR_0->hotkeys.translations[VAR_1]);
 VAR_0->hotkeys.translations[VAR_1] = ((void*)0);

 if (VAR_2)
  VAR_0->hotkeys.translations[VAR_1] = FUNC_1(VAR_2);
}
