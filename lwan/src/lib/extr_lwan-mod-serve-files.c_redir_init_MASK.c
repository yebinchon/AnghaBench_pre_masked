
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;
struct serve_files_priv {int root_path_len; } ;
struct redir_cache_data {int redir_to; } ;
struct file_cache_entry {char* mime_type; struct redir_cache_data redir_cache_data; } ;


 scalar_t__ FUNC_0 (int *,char*,char const*) ;

__attribute__((used)) static bool FUNC_1(struct file_cache_entry *VAR_0,
                       struct serve_files_priv *VAR_1,
                       const char *VAR_2,
                       struct stat *VAR_3 __attribute__((unused)))
{
    struct redir_cache_data *VAR_4 = &VAR_0->redir_cache_data;

    if (FUNC_0(&VAR_4->redir_to, "%s/", VAR_2 + VAR_1->root_path_len) < 0)
        return 0;

    VAR_0->mime_type = "text/plain";
    return 1;
}
