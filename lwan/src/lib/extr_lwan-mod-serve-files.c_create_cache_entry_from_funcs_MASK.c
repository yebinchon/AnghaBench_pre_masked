
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;
struct serve_files_priv {int dummy; } ;
struct file_cache_entry {struct cache_funcs const* funcs; } ;
struct cache_funcs {int (* init ) (struct file_cache_entry*,struct serve_files_priv*,char const*,struct stat*) ;} ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct file_cache_entry*) ;
 struct file_cache_entry* FUNC_3 (int) ;
 struct cache_funcs const VAR_0 ;
 struct cache_funcs VAR_1 ;
 int FUNC_4 (struct file_cache_entry*,struct serve_files_priv*,char const*,struct stat*) ;

__attribute__((used)) static struct file_cache_entry *
FUNC_5(struct serve_files_priv *VAR_2,
                              const char *VAR_3,
                              struct stat *VAR_4,
                              const struct cache_funcs *VAR_5)
{
    struct file_cache_entry *VAR_6;

    VAR_6 = FUNC_3(sizeof(*VAR_6));
    if (FUNC_1(!VAR_6))
        return ((void*)0);

    if (FUNC_0(VAR_5->init(VAR_6, VAR_2, VAR_3, VAR_4))) {
        VAR_6->funcs = VAR_5;
        return VAR_6;
    }

    FUNC_2(VAR_6);

    if (VAR_5 != &VAR_0)
        return ((void*)0);

    return FUNC_5(VAR_2, VAR_3, VAR_4, &VAR_1);
}
