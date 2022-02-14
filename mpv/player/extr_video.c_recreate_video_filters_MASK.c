
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vo_chain {int filter; } ;
struct MPOpts {int vf_settings; } ;
struct MPContext {struct vo_chain* vo_chain; struct MPOpts* opts; } ;


 int FUNC_0 (struct vo_chain*) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static bool FUNC_2(struct MPContext *VAR_0)
{
    struct MPOpts *VAR_1 = VAR_0->opts;
    struct vo_chain *VAR_2 = VAR_0->vo_chain;
    FUNC_0(VAR_2);

    return FUNC_1(VAR_2->filter, VAR_1->vf_settings);
}
