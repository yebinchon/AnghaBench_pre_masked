
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_decoder {struct mp_filter* f; } ;
struct spdifContext {int use_dts_hd; scalar_t__ codec_id; struct mp_decoder public; int pool; int log; } ;
struct mp_filter {int log; struct spdifContext* priv; } ;
struct mp_codec_params {int codec; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct spdifContext*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct mp_filter*,int ,char*) ;
 struct mp_filter* FUNC_3 (struct mp_filter*,int *) ;
 int FUNC_4 (struct mp_filter*,int ,int *) ;
 scalar_t__ FUNC_5 (char const*,char*) ;
 int FUNC_6 (struct mp_filter*) ;

__attribute__((used)) static struct mp_decoder *FUNC_7(struct mp_filter *VAR_4,
                                 struct mp_codec_params *VAR_5,
                                 const char *VAR_6)
{
    struct mp_filter *VAR_7 = FUNC_3(VAR_4, &VAR_3);
    if (!VAR_7)
        return ((void*)0);

    FUNC_2(VAR_7, VAR_1, "in");
    FUNC_2(VAR_7, VAR_2, "out");

    VAR_7->log = FUNC_4(VAR_7, VAR_4->log, ((void*)0));

    struct spdifContext *VAR_8 = VAR_7->priv;
    VAR_8->log = VAR_7->log;
    VAR_8->pool = FUNC_0(VAR_8);
    VAR_8->public.f = VAR_7;

    if (FUNC_5(VAR_6, "spdif_dts_hd") == 0)
        VAR_8->use_dts_hd = 1;

    VAR_8->codec_id = FUNC_1(VAR_5->codec);


    if (VAR_8->codec_id == VAR_0) {
        FUNC_6(VAR_7);
        return ((void*)0);
    }
    return &VAR_8->public;
}
