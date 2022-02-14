
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {void* value; void* key; void* value_len; void* key_len; } ;
struct TYPE_4__ {int member_0; } ;
struct TYPE_6__ {TYPE_2__ base; scalar_t__ expire; TYPE_1__ member_0; } ;
typedef TYPE_3__ SdbKv ;
typedef int HtPPKv ;
typedef int HtPP ;


 int FUNC_0 (void*) ;
 int FUNC_1 (int *,int *,int) ;
 void* FUNC_2 (void*) ;
 void* FUNC_3 (void*) ;

__attribute__((used)) static bool FUNC_4(HtPP* VAR_0, const char* VAR_1,
        const char* VAR_2, bool VAR_3) {
 if (!VAR_0 || !VAR_1 || !VAR_2) {
  return 0;
 }
 SdbKv VAR_4 = {{ 0 }};
 VAR_4.base.key = FUNC_2 ((void *)VAR_1);
 if (!VAR_4.base.key) {
  goto err;
 }
 VAR_4.base.value = FUNC_2 ((void *)VAR_2);
 if (!VAR_4.base.value) {
  goto err;
 }
 VAR_4.base.key_len = FUNC_3 (VAR_4.base.key);
 VAR_4.base.value_len = FUNC_3 (VAR_4.base.value);
 VAR_4.expire = 0;
 return FUNC_1 (VAR_0, (HtPPKv*)&VAR_4, VAR_3);

 err:
 FUNC_0 (VAR_4.base.key);
 FUNC_0 (VAR_4.base.value);
 return 0;
}
