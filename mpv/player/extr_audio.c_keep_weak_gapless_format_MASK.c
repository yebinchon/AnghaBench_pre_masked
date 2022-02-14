
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_aframe {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int,int) ;
 int FUNC_2 (struct mp_aframe*,struct mp_aframe*) ;
 int FUNC_3 (struct mp_aframe*) ;
 struct mp_aframe* FUNC_4 (struct mp_aframe*) ;
 int FUNC_5 (struct mp_aframe*,int) ;
 int FUNC_6 (struct mp_aframe*) ;

__attribute__((used)) static bool FUNC_7(struct mp_aframe *VAR_1, struct mp_aframe* VAR_2)
{
    bool VAR_3 = 0;
    struct mp_aframe *VAR_4 = FUNC_4(VAR_2);
    if (!VAR_4)
        FUNC_0();




    int VAR_5 = FUNC_3(VAR_1);
    int VAR_6 = FUNC_3(VAR_2);

    if (FUNC_1(VAR_5, VAR_6) == VAR_0)
        goto done;

    if (!FUNC_5(VAR_4, VAR_5))
        goto done;

    VAR_3 = FUNC_2(VAR_1, VAR_4);

done:
    FUNC_6(VAR_4);
    return VAR_3;
}
