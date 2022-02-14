
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_size; int st_mode; } ;
struct serve_files_priv {int root_path_len; int auto_index; int root_fd; scalar_t__ index_html; } ;
struct cache_funcs {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int) ;
 struct cache_funcs const VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_4 (int ,char*,struct stat*,int ) ;
 int FUNC_5 (int ) ;
 struct cache_funcs const VAR_4 ;
 char* FUNC_6 (char const*,char) ;
 struct cache_funcs const VAR_5 ;
 struct cache_funcs const VAR_6 ;
 int FUNC_7 (char*,int,char*,char const*,scalar_t__) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*,char*,int) ;

__attribute__((used)) static const struct cache_funcs *FUNC_10(struct serve_files_priv *VAR_7,
                                           const char *VAR_8,
                                           char *VAR_9,
                                           struct stat *VAR_10)
{
    char VAR_11[VAR_1];
    char *VAR_12 = VAR_11;

    if (FUNC_1(VAR_10->st_mode)) {



        if (*VAR_8 == '\0') {
            VAR_12 = (char *)VAR_7->index_html;
        } else {



            const char *VAR_13 = FUNC_6(VAR_8, '\0');
            if (*(VAR_13 - 1) != '/')
                return &VAR_5;

            int VAR_14 = FUNC_7(VAR_12, VAR_1, "%s%s", VAR_8,
                               VAR_7->index_html);
            if (FUNC_3(VAR_14 < 0 || VAR_14 >= VAR_1))
                return ((void*)0);
        }


        if (FUNC_4(VAR_7->root_fd, VAR_12, VAR_10, 0) < 0) {
            if (FUNC_3(VAR_3 != VAR_0))
                return ((void*)0);

            if (FUNC_0(VAR_7->auto_index)) {

                return &VAR_2;
            }


            return ((void*)0);
        }


        if (FUNC_3(!FUNC_5(VAR_10->st_mode)))
            return ((void*)0);




        if (FUNC_3(VAR_7->root_path_len + 1 +
                         FUNC_8(VAR_12) + 1 >=
                     VAR_1))
            return ((void*)0);

        VAR_9[VAR_7->root_path_len] = '/';
        FUNC_9(VAR_9 + VAR_7->root_path_len + 1, VAR_12,
                VAR_1 - VAR_7->root_path_len - 1);
    }


    if (FUNC_3(!FUNC_2(VAR_10->st_mode)))
        return ((void*)0);



    if (VAR_10->st_size < 16384)
        return &VAR_4;

    return &VAR_6;
}
