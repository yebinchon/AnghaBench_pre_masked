
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serve_files_priv {int root_path_len; char const* prefix; } ;


 scalar_t__ FUNC_0 (char const*,char*) ;

__attribute__((used)) static const char *FUNC_1(const char *VAR_0,
                                struct serve_files_priv *VAR_1)
{
    const char *VAR_2 = VAR_0 + VAR_1->root_path_len;

    if (VAR_1->root_path_len == 1) {


        VAR_2--;
    }

    if (*VAR_2)
        return VAR_2;

    if (FUNC_0(VAR_1->prefix, "/"))
        return "";

    return VAR_1->prefix;
}
