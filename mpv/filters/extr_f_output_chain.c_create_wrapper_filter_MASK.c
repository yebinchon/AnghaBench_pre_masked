
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_user_filter {int last_is_active; int last_in_aformat; struct chain* p; struct mp_filter* wrapper; } ;
struct mp_filter {struct mp_user_filter* priv; } ;
struct chain {int f; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (struct mp_filter*,int ,char*) ;
 struct mp_filter* FUNC_3 (int ,int *) ;
 int FUNC_4 (struct mp_user_filter*,int ) ;
 int VAR_2 ;

__attribute__((used)) static struct mp_user_filter *FUNC_5(struct chain *VAR_3)
{
    struct mp_filter *VAR_4 = FUNC_3(VAR_3->f, &VAR_2);
    if (!VAR_4)
        FUNC_0();
    struct mp_user_filter *VAR_5 = VAR_4->priv;
    VAR_5->wrapper = VAR_4;
    VAR_5->p = VAR_3;
    VAR_5->last_in_aformat = FUNC_4(VAR_5, FUNC_1());
    VAR_5->last_is_active = 1;
    FUNC_2(VAR_4, VAR_0, "in");
    FUNC_2(VAR_4, VAR_1, "out");
    return VAR_5;
}
