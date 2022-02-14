
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct m_property {int dummy; } ;
struct TYPE_4__ {scalar_t__ playback_initialized; } ;
typedef TYPE_1__ MPContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,struct m_property*,int,void*) ;
 int FUNC_1 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_2(void *VAR_2, struct m_property *VAR_3,
                             int VAR_4, void *VAR_5)
{
    MPContext *VAR_6 = VAR_2;

    if (VAR_6->playback_initialized && VAR_4 == VAR_1) {
        FUNC_1(VAR_6, *(int *)VAR_5);
        return VAR_0;
    }
    return FUNC_0(VAR_6, VAR_3, VAR_4, VAR_5);
}
