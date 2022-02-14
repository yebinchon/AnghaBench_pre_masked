
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct m_property {int dummy; } ;
struct TYPE_4__ {scalar_t__ video_out; } ;
typedef TYPE_1__ MPContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,struct m_property*,int,void*) ;
 int FUNC_1 (scalar_t__,int,int ) ;

__attribute__((used)) static int FUNC_2(struct m_property *VAR_1, int VAR_2, void *VAR_3,
                               int VAR_4, int *VAR_5, MPContext *VAR_6)
{
    int VAR_7 = *VAR_5;
    int VAR_8 = FUNC_0(VAR_6, VAR_1, VAR_2, VAR_3);
    if (VAR_2 == VAR_0 && VAR_7 != *VAR_5) {
        if (VAR_6->video_out)
            FUNC_1(VAR_6->video_out, VAR_4, 0);
    }
    return VAR_8;
}
