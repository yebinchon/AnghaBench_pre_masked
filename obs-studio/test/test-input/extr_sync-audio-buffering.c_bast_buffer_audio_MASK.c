
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffering_async_sync_test {int buffer_audio; } ;
typedef int obs_hotkey_t ;
typedef int * obs_hotkey_id ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(void *VAR_0, obs_hotkey_id VAR_1,
         obs_hotkey_t *VAR_2, bool VAR_3)
{
 struct buffering_async_sync_test *VAR_4 = VAR_0;

 FUNC_0(VAR_1);
 FUNC_0(VAR_2);

 if (VAR_3)
  VAR_4->buffer_audio = 1;
}
