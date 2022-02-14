
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int name; } ;
typedef TYPE_1__ obs_hotkey_t ;
typedef int obs_data_array_t ;


 int FUNC_0 (size_t) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (void*,int ,int *) ;
 int * FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static inline bool FUNC_4(void *VAR_0, size_t VAR_1,
        obs_hotkey_t *VAR_2)
{
 FUNC_0(VAR_1);

 obs_data_array_t *VAR_3 = FUNC_3(VAR_2);
 FUNC_2(VAR_0, VAR_2->name, VAR_3);
 FUNC_1(VAR_3);
 return 1;
}
