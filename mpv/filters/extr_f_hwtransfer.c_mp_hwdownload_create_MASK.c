
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_hwdownload {int pool; struct mp_filter* f; } ;
struct mp_filter {struct mp_hwdownload* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mp_filter*,int ,char*) ;
 struct mp_filter* FUNC_1 (struct mp_filter*,int *) ;
 int FUNC_2 (struct mp_hwdownload*) ;

struct mp_hwdownload *FUNC_3(struct mp_filter *VAR_3)
{
    struct mp_filter *VAR_4 = FUNC_1(VAR_3, &VAR_2);
    if (!VAR_4)
        return ((void*)0);

    struct mp_hwdownload *VAR_5 = VAR_4->priv;

    VAR_5->f = VAR_4;
    VAR_5->pool = FUNC_2(VAR_5);

    FUNC_0(VAR_4, VAR_0, "in");
    FUNC_0(VAR_4, VAR_1, "out");

    return VAR_5;
}
