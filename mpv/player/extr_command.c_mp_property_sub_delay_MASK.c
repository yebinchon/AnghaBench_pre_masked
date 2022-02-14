
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct m_property {int dummy; } ;
struct MPOpts {TYPE_1__* subs_rend; } ;
struct TYPE_5__ {struct MPOpts* opts; } ;
struct TYPE_4__ {int sub_delay; } ;
typedef TYPE_2__ MPContext ;


 int VAR_0 ;

 char* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,struct m_property*,int,void*) ;

__attribute__((used)) static int FUNC_2(void *VAR_1, struct m_property *VAR_2,
                                 int VAR_3, void *VAR_4)
{
    MPContext *VAR_5 = VAR_1;
    struct MPOpts *VAR_6 = VAR_5->opts;
    switch (VAR_3) {
    case 128:
        *(char **)VAR_4 = FUNC_0(VAR_6->subs_rend->sub_delay);
        return VAR_0;
    }
    return FUNC_1(VAR_5, VAR_2, VAR_3, VAR_4);
}
