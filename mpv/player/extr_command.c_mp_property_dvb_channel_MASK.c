
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct m_property {int dummy; } ;
struct TYPE_3__ {scalar_t__ stop_play; } ;
typedef TYPE_1__ MPContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int,void*) ;
 int FUNC_1 (TYPE_1__*,struct m_property*,int,void*) ;

__attribute__((used)) static int FUNC_2(void *VAR_2, struct m_property *VAR_3,
                                   int VAR_4, void *VAR_5)
{
    MPContext *VAR_6 = VAR_2;
    int VAR_7 = FUNC_1(VAR_6, VAR_3, VAR_4, VAR_5);
    if (VAR_7 == VAR_0 && FUNC_0(VAR_4, VAR_5)) {
        if (!VAR_6->stop_play) {
            VAR_6->stop_play = VAR_1;
        }
    }
    return VAR_7;
}
