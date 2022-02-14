
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t num; int * array; } ;
struct obs_context_data {TYPE_1__ hotkey_pairs; } ;


 int FUNC_0 (TYPE_1__) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct obs_context_data *VAR_0)
{
 if (!VAR_0->hotkey_pairs.num)
  goto cleanup;

 bool VAR_1 = 0;
 for (size_t VAR_2 = 0; VAR_2 < VAR_0->hotkey_pairs.num; VAR_2++)
  VAR_1 = FUNC_2(
         VAR_0->hotkey_pairs.array[VAR_2]) ||
        VAR_1;

 if (VAR_1)
  FUNC_1();

cleanup:
 FUNC_0(VAR_0->hotkey_pairs);
}
