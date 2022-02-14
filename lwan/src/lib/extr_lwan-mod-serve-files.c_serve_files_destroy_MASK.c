
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serve_files_priv {struct serve_files_priv* prefix; struct serve_files_priv* root_path; int root_fd; int cache; int directory_list_tpl; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct serve_files_priv*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(void *VAR_0)
{
    struct serve_files_priv *VAR_1 = VAR_0;

    if (!VAR_1) {
        FUNC_3("Nothing to shutdown");
        return;
    }

    FUNC_4(VAR_1->directory_list_tpl);
    FUNC_0(VAR_1->cache);
    FUNC_1(VAR_1->root_fd);
    FUNC_2(VAR_1->root_path);
    FUNC_2(VAR_1->prefix);
    FUNC_2(VAR_1);
}
