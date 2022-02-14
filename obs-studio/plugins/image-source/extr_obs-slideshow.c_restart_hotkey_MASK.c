
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slideshow {int source; } ;
typedef int obs_hotkey_t ;
typedef int * obs_hotkey_id ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct slideshow*) ;

__attribute__((used)) static void FUNC_3(void *VAR_0, obs_hotkey_id VAR_1, obs_hotkey_t *VAR_2,
      bool VAR_3)
{
 FUNC_0(VAR_1);
 FUNC_0(VAR_2);

 struct slideshow *VAR_4 = VAR_0;

 if (VAR_3 && FUNC_1(VAR_4->source))
  FUNC_2(VAR_4);
}
