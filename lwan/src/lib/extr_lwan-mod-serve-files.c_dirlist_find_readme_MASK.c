
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serve_files_priv {int auto_index_readme; } ;
struct lwan_strbuf {int dummy; } ;
typedef scalar_t__ ssize_t ;
typedef int buffer ;


 scalar_t__ VAR_0 ;
 size_t FUNC_0 (char const**) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (struct lwan_strbuf*,char*,size_t) ;
 char const* FUNC_3 (struct lwan_strbuf*) ;
 int FUNC_4 (char*,int) ;
 scalar_t__ FUNC_5 (int,char*,int) ;
 int FUNC_6 (char*,int,char*,char const*,char const*) ;

__attribute__((used)) static const char *FUNC_7(struct lwan_strbuf *VAR_5,
                                       struct serve_files_priv *VAR_6,
                                       const char *VAR_7)
{
    static const char *VAR_8[] = {"readme", "readme.txt", "read.me",
                                       "README.TXT", "README"};
    int VAR_9 = -1;

    if (!VAR_6->auto_index_readme)
        return ((void*)0);

    for (size_t VAR_10 = 0; VAR_10 < FUNC_0(VAR_8); VAR_10++) {
        char VAR_11[VAR_3];
        int VAR_12;

        VAR_12 = FUNC_6(VAR_11, VAR_3, "%s/%s", VAR_7, VAR_8[VAR_10]);
        if (VAR_12 < 0 || VAR_12 >= VAR_3)
            continue;

        VAR_9 = FUNC_4(VAR_11, VAR_2 | VAR_1);
        if (VAR_9 < 0)
            continue;

        while (1) {
            ssize_t VAR_13 = FUNC_5(VAR_9, VAR_11, sizeof(VAR_11));

            if (VAR_13 < 0) {
                if (VAR_4 == VAR_0)
                    continue;
                goto error;
            }
            if (!VAR_13)
                break;

            if (!FUNC_2(VAR_5, VAR_11, (size_t)VAR_13))
                goto error;
        }

        FUNC_1(VAR_9);
        return FUNC_3(VAR_5);
    }

error:
    if (VAR_9 >= 0)
        FUNC_1(VAR_9);
    return ((void*)0);
}
