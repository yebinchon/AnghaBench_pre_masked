
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_stream {int dummy; } ;
struct priv {struct sh_stream* src; } ;
struct mp_filter {struct priv* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sh_stream*,int ,struct mp_filter*) ;
 int FUNC_1 (struct mp_filter*,int ,char*) ;
 struct mp_filter* FUNC_2 (struct mp_filter*,int *) ;
 int VAR_2 ;

struct mp_filter *FUNC_3(struct mp_filter *VAR_3,
                                     struct sh_stream *VAR_4)
{
    struct mp_filter *VAR_5 = FUNC_2(VAR_3, &VAR_1);
    if (!VAR_5)
        return ((void*)0);

    struct priv *VAR_6 = VAR_5->priv;
    VAR_6->src = VAR_4;

    FUNC_1(VAR_5, VAR_0, "out");

    FUNC_0(VAR_6->src, VAR_2, VAR_5);

    return VAR_5;
}
