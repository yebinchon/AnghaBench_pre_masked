
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct m_property {int dummy; } ;
struct MPOpts {TYPE_1__* subs_rend; } ;
struct TYPE_5__ {struct MPOpts* opts; } ;
struct TYPE_4__ {int sub_pos; } ;
typedef TYPE_2__ MPContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,struct m_property*,int,void*) ;
 char* FUNC_1 (int *,char*,int ) ;

__attribute__((used)) static int FUNC_2(void *VAR_2, struct m_property *VAR_3,
                               int VAR_4, void *VAR_5)
{
    MPContext *VAR_6 = VAR_2;
    struct MPOpts *VAR_7 = VAR_6->opts;
    if (VAR_4 == VAR_1) {
        *(char **)VAR_5 = FUNC_1(((void*)0), "%d/100", VAR_7->subs_rend->sub_pos);
        return VAR_0;
    }
    return FUNC_0(VAR_6, VAR_3, VAR_4, VAR_5);
}
