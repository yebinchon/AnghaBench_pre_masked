
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int (* qk_tap_dance_user_fn_t ) (int *,void*) ;
typedef int qk_tap_dance_state_t ;



__attribute__((used)) static inline void FUNC_0(qk_tap_dance_state_t *VAR_0, void *VAR_1, qk_tap_dance_user_fn_t VAR_2) {
    if (VAR_2) {
        VAR_2(VAR_0, VAR_1);
    }
}
