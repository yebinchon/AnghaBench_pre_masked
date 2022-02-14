
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int write_name ;
struct MPContext {TYPE_1__* opts; } ;
struct TYPE_2__ {scalar_t__ write_filename_in_watch_later_config; } ;
typedef int FILE ;


 int FUNC_0 (int *,char*,char*) ;

__attribute__((used)) static void FUNC_1(struct MPContext *VAR_0, FILE *VAR_1, char *VAR_2)
{
    if (VAR_0->opts->write_filename_in_watch_later_config) {
        char VAR_3[1024] = {0};
        for (int VAR_4 = 0; VAR_2[VAR_4] && VAR_4 < sizeof(VAR_3) - 1; VAR_4++)
            VAR_3[VAR_4] = (unsigned char)VAR_2[VAR_4] < 32 ? '_' : VAR_2[VAR_4];
        FUNC_0(VAR_1, "# %s\n", VAR_3);
    }
}
