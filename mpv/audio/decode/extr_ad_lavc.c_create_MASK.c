
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_decoder {struct mp_filter* f; } ;
struct priv {struct mp_decoder public; } ;
struct mp_filter {struct priv* priv; int log; } ;
struct mp_codec_params {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mp_filter*,struct mp_codec_params*,char const*) ;
 int FUNC_1 (struct mp_filter*,int ,char*) ;
 struct mp_filter* FUNC_2 (struct mp_filter*,int *) ;
 int FUNC_3 (struct mp_filter*,int ,int *) ;
 int FUNC_4 (struct mp_filter*) ;

__attribute__((used)) static struct mp_decoder *FUNC_5(struct mp_filter *VAR_3,
                                 struct mp_codec_params *VAR_4,
                                 const char *VAR_5)
{
    struct mp_filter *VAR_6 = FUNC_2(VAR_3, &VAR_2);
    if (!VAR_6)
        return ((void*)0);

    FUNC_1(VAR_6, VAR_0, "in");
    FUNC_1(VAR_6, VAR_1, "out");

    VAR_6->log = FUNC_3(VAR_6, VAR_3->log, ((void*)0));

    struct priv *VAR_7 = VAR_6->priv;
    VAR_7->public.f = VAR_6;

    if (!FUNC_0(VAR_6, VAR_4, VAR_5)) {
        FUNC_4(VAR_6);
        return ((void*)0);
    }
    return &VAR_7->public;
}
