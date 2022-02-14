
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vo {int dummy; } ;
struct m_property {int dummy; } ;
struct TYPE_2__ {struct vo* video_out; } ;
typedef TYPE_1__ MPContext ;


 int VAR_0 ;
 int FUNC_0 (int,void*,double) ;
 double FUNC_1 (struct vo*) ;

__attribute__((used)) static int FUNC_2(void *VAR_1, struct m_property *VAR_2,
                                    int VAR_3, void *VAR_4)
{
    MPContext *VAR_5 = VAR_1;
    struct vo *VAR_6 = VAR_5->video_out;
    if (!VAR_6)
        return VAR_0;
    double VAR_7 = FUNC_1(VAR_6);
    if (VAR_7 < 0)
        return VAR_0;
    return FUNC_0(VAR_3, VAR_4, VAR_7);
}
