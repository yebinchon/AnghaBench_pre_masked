
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct m_property {int dummy; } ;
struct TYPE_3__ {int vo_chain; } ;
typedef TYPE_1__ MPContext ;


 int VAR_0 ;
 double FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int,void*,double) ;

__attribute__((used)) static int FUNC_2(void *VAR_1, struct m_property *VAR_2,
                              int VAR_3, void *VAR_4)
{
    MPContext *VAR_5 = VAR_1;
    if (!VAR_5->vo_chain)
        return VAR_0;
    double VAR_6 = FUNC_0(VAR_5);
    if (VAR_6 <= 0)
        return VAR_0;
    return FUNC_1(VAR_3, VAR_4, 1.0 / VAR_6);
}
