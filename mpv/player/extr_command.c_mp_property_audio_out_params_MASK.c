
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mp_chmap {int dummy; } ;
struct mp_aframe {int dummy; } ;
struct m_property {int dummy; } ;
struct TYPE_2__ {scalar_t__ ao; } ;
typedef TYPE_1__ MPContext ;


 int FUNC_0 (scalar_t__,int*,int*,struct mp_chmap*) ;
 struct mp_aframe* FUNC_1 () ;
 int FUNC_2 (struct mp_aframe*,struct mp_chmap*) ;
 int FUNC_3 (struct mp_aframe*,int) ;
 int FUNC_4 (struct mp_aframe*,int) ;
 int FUNC_5 (struct mp_aframe*,int,void*) ;
 int FUNC_6 (struct mp_aframe*) ;

__attribute__((used)) static int FUNC_7(void *VAR_0, struct m_property *VAR_1,
                                        int VAR_2, void *VAR_3)
{
    MPContext *VAR_4 = VAR_0;
    struct mp_aframe *VAR_5 = ((void*)0);
    if (VAR_4->ao) {
        VAR_5 = FUNC_1();
        int VAR_6;
        int VAR_7;
        struct mp_chmap VAR_8;
        FUNC_0(VAR_4->ao, &VAR_6, &VAR_7, &VAR_8);
        FUNC_4(VAR_5, VAR_6);
        FUNC_3(VAR_5, VAR_7);
        FUNC_2(VAR_5, &VAR_8);
    }
    int VAR_9 = FUNC_5(VAR_5, VAR_2, VAR_3);
    FUNC_6(VAR_5);
    return VAR_9;
}
