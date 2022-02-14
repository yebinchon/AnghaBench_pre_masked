
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct m_property {int dummy; } ;
struct TYPE_2__ {int last_av_difference; int vo_chain; int ao_chain; } ;
typedef TYPE_1__ MPContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,void*,int ) ;
 char* FUNC_1 (int *,char*,int ) ;

__attribute__((used)) static int FUNC_2(void *VAR_3, struct m_property *VAR_4,
                              int VAR_5, void *VAR_6)
{
    MPContext *VAR_7 = VAR_3;
    if (!VAR_7->ao_chain || !VAR_7->vo_chain)
        return VAR_2;
    if (VAR_5 == VAR_1) {
        *(char **)VAR_6 = FUNC_1(((void*)0), "%7.3f", VAR_7->last_av_difference);
        return VAR_0;
    }
    return FUNC_0(VAR_5, VAR_6, VAR_7->last_av_difference);
}
