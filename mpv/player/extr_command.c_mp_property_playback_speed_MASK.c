
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct m_property {int dummy; } ;
struct TYPE_7__ {TYPE_1__* opts; } ;
struct TYPE_6__ {double playback_speed; } ;
typedef TYPE_2__ MPContext ;


 int VAR_0 ;


 int FUNC_0 (TYPE_2__*,struct m_property*,int,void*) ;
 int FUNC_1 (TYPE_2__*) ;
 char* FUNC_2 (int *,char*,double) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_4(void *VAR_1, struct m_property *VAR_2,
                                      int VAR_3, void *VAR_4)
{
    MPContext *VAR_5 = VAR_1;
    double VAR_6 = VAR_5->opts->playback_speed;
    switch (VAR_3) {
    case 128: {
        int VAR_7 = FUNC_0(VAR_5, VAR_2, VAR_3, VAR_4);
        FUNC_3(VAR_5);
        FUNC_1(VAR_5);
        return VAR_7;
    }
    case 129:
        *(char **)VAR_4 = FUNC_2(((void*)0), "%.2f", VAR_6);
        return VAR_0;
    }
    return FUNC_0(VAR_5, VAR_2, VAR_3, VAR_4);
}
