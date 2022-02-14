
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mp_osd_res {int w; } ;
struct m_property {int dummy; } ;
struct TYPE_2__ {int osd; } ;
typedef TYPE_1__ MPContext ;


 int FUNC_0 (int,void*,int ) ;
 struct mp_osd_res FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(void *VAR_0, struct m_property *VAR_1,
                             int VAR_2, void *VAR_3)
{
    MPContext *VAR_4 = VAR_0;
    struct mp_osd_res VAR_5 = FUNC_1(VAR_4->osd);
    return FUNC_0(VAR_2, VAR_3, VAR_5.w);
}
