
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct m_property {char* priv; } ;
struct TYPE_2__ {double speed_factor_a; double speed_factor_v; } ;
typedef TYPE_1__ MPContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int,void*,double) ;
 char* FUNC_2 (int *,char*,double) ;

__attribute__((used)) static int FUNC_3(void *VAR_2, struct m_property *VAR_3,
                                           int VAR_4, void *VAR_5)
{
    MPContext *VAR_6 = VAR_2;
    char *VAR_7 = VAR_3->priv;
    double VAR_8 = 0;
    switch (VAR_7[0]) {
    case 'a': VAR_8 = VAR_6->speed_factor_a; break;
    case 'v': VAR_8 = VAR_6->speed_factor_v; break;
    default: FUNC_0();
    }

    if (VAR_4 == VAR_1) {
        *(char **)VAR_5 = FUNC_2(((void*)0), "%+.05f%%", (VAR_8 - 1) * 100);
        return VAR_0;
    }

    return FUNC_1(VAR_4, VAR_5, VAR_8);
}
