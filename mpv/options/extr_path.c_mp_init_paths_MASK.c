
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpv_global {int configdir; } ;
struct MPOpts {char* force_configdir; int load_config; } ;


 int FUNC_0 (int *) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (struct mpv_global*,char const*) ;

void FUNC_3(struct mpv_global *VAR_0, struct MPOpts *VAR_1)
{
    FUNC_0(&VAR_0->configdir);

    const char *VAR_2 = FUNC_1("MPV_HOME");
    if (VAR_1->force_configdir && VAR_1->force_configdir[0])
        VAR_2 = VAR_1->force_configdir;
    if (!VAR_1->load_config)
        VAR_2 = "";

    VAR_0->configdir = FUNC_2(VAR_0, VAR_2);
}
