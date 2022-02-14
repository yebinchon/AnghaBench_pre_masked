
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct m_property {int dummy; } ;
struct TYPE_3__ {double video_speed; } ;
typedef TYPE_1__ MPContext ;


 int VAR_0 ;
 int FUNC_0 (int,void*,double) ;
 int FUNC_1 (TYPE_1__*,double*) ;

__attribute__((used)) static int FUNC_2(void *VAR_1, struct m_property *VAR_2,
                                          int VAR_3, void *VAR_4)
{
    MPContext *VAR_5 = VAR_1;
    double VAR_6;
    if (!FUNC_1(VAR_5, &VAR_6))
        return VAR_0;

    double VAR_7 = VAR_5->video_speed;
    return FUNC_0(VAR_3, VAR_4, VAR_6 / VAR_7);
}
