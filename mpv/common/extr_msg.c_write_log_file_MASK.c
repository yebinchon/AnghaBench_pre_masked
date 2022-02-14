
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_log_root {int log_file; } ;
struct mp_log {char* verbose_prefix; int terminal_level; struct mp_log_root* root; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int,int,char*,char*) ;
 int** VAR_2 ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(struct mp_log *VAR_3, int VAR_4, char *VAR_5)
{
    struct mp_log_root *VAR_6 = VAR_3->root;

    if (!VAR_6->log_file || VAR_4 > FUNC_0(VAR_1, VAR_3->terminal_level))
        return;

    FUNC_2(VAR_6->log_file, "[%8.3d][%c][%s] %s",
            (FUNC_3() - VAR_0) / 1e6,
            VAR_2[VAR_4][0],
            VAR_3->verbose_prefix, VAR_5);
    FUNC_1(VAR_6->log_file);
}
