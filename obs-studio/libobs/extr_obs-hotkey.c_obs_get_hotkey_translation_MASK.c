
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t obs_key_t ;
struct TYPE_3__ {char const** translations; } ;
struct TYPE_4__ {TYPE_1__ hotkeys; } ;


 size_t VAR_0 ;
 TYPE_2__* VAR_1 ;

const char *FUNC_0(obs_key_t VAR_2, const char *VAR_3)
{
 if (VAR_2 == VAR_0) {
  return ((void*)0);
 }

 return VAR_1->hotkeys.translations[VAR_2] ? VAR_1->hotkeys.translations[VAR_2]
           : VAR_3;
}
