
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct m_property {int dummy; } ;
struct TYPE_5__ {int play_dir; } ;
typedef TYPE_1__ MPContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,struct m_property*,int,void*) ;
 int FUNC_2 (TYPE_1__*,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(void *VAR_3, struct m_property *VAR_4,
                                      int VAR_5, void *VAR_6)
{
    MPContext *VAR_7 = VAR_3;
    if (VAR_5 == VAR_2) {
        if (VAR_7->play_dir != *(int *)VAR_6) {
            FUNC_2(VAR_7, VAR_0, FUNC_0(VAR_7),
                       VAR_1, 0);
        }
    }
    return FUNC_1(VAR_7, VAR_4, VAR_5, VAR_6);
}
