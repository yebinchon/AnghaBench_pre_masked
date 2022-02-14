
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lwan_serve_files_settings {size_t read_ahead; int auto_index_readme; int directory_list_template; int auto_index; int serve_precompressed_files; int index_html; int root_path; } ;
struct hash {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct hash const*,char*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (char*,int ) ;
 void* FUNC_3 (char const*,struct lwan_serve_files_settings*) ;

__attribute__((used)) static void *FUNC_4(const char *VAR_1,
                                          const struct hash *VAR_2)
{
    struct lwan_serve_files_settings VAR_3 = {
        .root_path = FUNC_0(VAR_2, "path"),
        .index_html = FUNC_0(VAR_2, "index_path"),
        .serve_precompressed_files =
            FUNC_1(FUNC_0(VAR_2, "serve_precompressed_files"), 1),
        .auto_index = FUNC_1(FUNC_0(VAR_2, "auto_index"), 1),
        .directory_list_template = FUNC_0(VAR_2, "directory_list_template"),
        .read_ahead =
            (size_t)FUNC_2("read_ahead", VAR_0),
        .auto_index_readme =
            FUNC_1(FUNC_0(VAR_2, "auto_index_readme"), 1),
    };

    return FUNC_3(VAR_1, &VAR_3);
}
