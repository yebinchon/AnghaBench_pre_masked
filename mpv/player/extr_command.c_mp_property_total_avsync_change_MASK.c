
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct m_property {int dummy; } ;
struct TYPE_2__ {scalar_t__ total_avsync_change; int vo_chain; int ao_chain; } ;
typedef TYPE_1__ MPContext ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,void*,scalar_t__) ;

__attribute__((used)) static int FUNC_1(void *VAR_2, struct m_property *VAR_3,
                                           int VAR_4, void *VAR_5)
{
    MPContext *VAR_6 = VAR_2;
    if (!VAR_6->ao_chain || !VAR_6->vo_chain)
        return VAR_1;
    if (VAR_6->total_avsync_change == VAR_0)
        return VAR_1;
    return FUNC_0(VAR_4, VAR_5, VAR_6->total_avsync_change);
}
