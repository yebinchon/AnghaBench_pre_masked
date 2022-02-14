
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct priv {int pool; int opts; } ;
struct mp_filter {struct priv* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mp_filter*,char*) ;
 int FUNC_1 (struct mp_filter*,int ,char*) ;
 struct mp_filter* FUNC_2 (struct mp_filter*,int *) ;
 int FUNC_3 (struct priv*) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (struct priv*,void*) ;
 int VAR_2 ;

__attribute__((used)) static struct mp_filter *FUNC_6(struct mp_filter *VAR_3, void *VAR_4)
{
    struct mp_filter *VAR_5 = FUNC_2(VAR_3, &VAR_2);
    if (!VAR_5) {
        FUNC_4(VAR_4);
        return ((void*)0);
    }

    FUNC_0(VAR_5, "This filter is deprecated and will be removed (no replacement)\n");

    FUNC_1(VAR_5, VAR_0, "in");
    FUNC_1(VAR_5, VAR_1, "out");

    struct priv *VAR_6 = VAR_5->priv;
    VAR_6->opts = FUNC_5(VAR_6, VAR_4);
    VAR_6->pool = FUNC_3(VAR_6);

    return VAR_5;
}
