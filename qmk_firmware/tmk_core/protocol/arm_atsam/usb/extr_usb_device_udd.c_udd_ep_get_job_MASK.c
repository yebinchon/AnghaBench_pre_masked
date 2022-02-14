
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int udd_ep_job_t ;
typedef int udd_ep_id_t ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;

__attribute__((used)) static udd_ep_job_t *FUNC_0(udd_ep_id_t VAR_3) {
    if ((VAR_3 == 0) || (VAR_3 == 0x80)) {
        return ((void*)0);
    } else {
        return &VAR_2[(2 * (VAR_3 & VAR_0) + ((VAR_3 & VAR_1) ? 1 : 0)) - 2];
    }
}
