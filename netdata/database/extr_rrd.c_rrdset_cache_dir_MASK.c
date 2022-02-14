
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ rrd_memory_mode; int cache_dir; } ;
typedef TYPE_1__ RRDHOST ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 char* FUNC_0 (char const*,char*,char*) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (char*,char const*,int ) ;
 int FUNC_4 (char*,int ,char*,int ,char*) ;

char *FUNC_5(RRDHOST *VAR_5, const char *VAR_6, const char *VAR_7) {
    char *VAR_8 = ((void*)0);

    char VAR_9[VAR_1 + 1];
    char VAR_10[VAR_1 + 1];
    FUNC_3(VAR_9, VAR_6, VAR_1);

    FUNC_4(VAR_10, VAR_1, "%s/%s", VAR_5->cache_dir, VAR_9);
    VAR_8 = FUNC_0(VAR_7, "cache directory", VAR_10);

    if(VAR_5->rrd_memory_mode == VAR_2 || VAR_5->rrd_memory_mode == VAR_3) {
        int VAR_11 = FUNC_2(VAR_8, 0775);
        if(VAR_11 != 0 && VAR_4 != VAR_0)
            FUNC_1("Cannot create directory '%s'", VAR_8);
    }

    return VAR_8;
}
