
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct MPOpts {TYPE_1__* encode_opts; } ;
struct MPContext {int * mconfig; int global; struct MPOpts* opts; } ;
typedef int m_config_t ;
struct TYPE_2__ {scalar_t__* file; } ;


 int VAR_0 ;
 int FUNC_0 (struct MPContext*,char*,char*) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int ,char*) ;

void FUNC_3(struct MPContext *VAR_1)
{
    struct MPOpts *VAR_2 = VAR_1->opts;

    FUNC_2(VAR_1->global, "");

    m_config_t *VAR_3 = VAR_1->mconfig;
    char *VAR_4 = ((void*)0);
    bool VAR_5 = VAR_2->encode_opts &&
        VAR_2->encode_opts->file && VAR_2->encode_opts->file[0];




    if (VAR_5)
        VAR_4 = "playback-default";

    FUNC_0(VAR_1, ((void*)0), "encoding-profiles.conf");

    FUNC_0(VAR_1, VAR_4, "mpv.conf|config");

    if (VAR_5)
        FUNC_1(VAR_3, VAR_0, 0);
}
