
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_chmap {int member_0; } ;
struct mp_aframe {int dummy; } ;


 int FUNC_0 (struct mp_aframe*,struct mp_chmap*) ;
 scalar_t__ FUNC_1 (struct mp_aframe*) ;
 scalar_t__ FUNC_2 (struct mp_aframe*) ;
 scalar_t__ FUNC_3 (struct mp_chmap*,struct mp_chmap*) ;

__attribute__((used)) static bool FUNC_4(struct mp_aframe *VAR_0, struct mp_aframe *VAR_1)
{
    struct mp_chmap VAR_2 = {0}, VAR_3 = {0};
    FUNC_0(VAR_0, &VAR_2);
    FUNC_0(VAR_1, &VAR_3);
    return FUNC_3(&VAR_2, &VAR_3) &&
           FUNC_2(VAR_0) == FUNC_2(VAR_1) &&
           FUNC_1(VAR_0) == FUNC_1(VAR_1);
}
