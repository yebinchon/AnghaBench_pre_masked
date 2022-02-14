
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;
struct serve_files_priv {int directory_list_tpl; } ;
struct lwan_value {int len; int value; } ;
struct lwan_strbuf {int dummy; } ;
struct file_list {char const* full_path; int readme; int rel_path; } ;
struct dir_list_cache_data {struct lwan_strbuf rendered; int deflated; int brotli; } ;
struct file_cache_entry {char* mime_type; struct dir_list_cache_data dir_list_cache_data; } ;


 int FUNC_0 (struct lwan_value*,int *,int *) ;
 int FUNC_1 (struct lwan_value*,int *) ;
 int FUNC_2 (struct lwan_strbuf*,struct serve_files_priv*,char const*) ;
 int FUNC_3 (char const*,struct serve_files_priv*) ;
 int FUNC_4 (struct lwan_strbuf*) ;
 int FUNC_5 (struct lwan_strbuf*) ;
 int FUNC_6 (struct lwan_strbuf*) ;
 int FUNC_7 (struct lwan_strbuf*) ;
 int FUNC_8 (int ,struct lwan_strbuf*,struct file_list*) ;

__attribute__((used)) static bool FUNC_9(struct file_cache_entry *VAR_0,
                         struct serve_files_priv *VAR_1,
                         const char *VAR_2,
                         struct stat *VAR_3 __attribute__((unused)))
{
    struct dir_list_cache_data *VAR_4 = &VAR_0->dir_list_cache_data;
    struct lwan_strbuf VAR_5;
    bool VAR_6 = 0;

    if (!FUNC_7(&VAR_5))
        return 0;
    if (!FUNC_7(&VAR_4->rendered))
        goto out_free_readme;

    struct file_list VAR_7 = {
        .full_path = VAR_2,
        .rel_path = FUNC_3(VAR_2, VAR_1),
        .readme = FUNC_2(&VAR_5, VAR_1, VAR_2),
    };

    if (!FUNC_8(VAR_1->directory_list_tpl, &VAR_4->rendered,
                                    &VAR_7))
        goto out_free_rendered;

    VAR_0->mime_type = "text/html";

    struct lwan_value VAR_8 = {
        .value = FUNC_5(&VAR_4->rendered),
        .len = FUNC_6(&VAR_4->rendered),
    };
    FUNC_1(&VAR_8, &VAR_4->deflated);




    VAR_6 = 1;
    goto out_free_readme;

out_free_rendered:
    FUNC_4(&VAR_4->rendered);
out_free_readme:
    FUNC_4(&VAR_5);
    return VAR_6;
}
