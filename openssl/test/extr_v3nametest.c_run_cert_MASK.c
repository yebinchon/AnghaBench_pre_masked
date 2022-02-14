
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct set_name_fn {scalar_t__ email; scalar_t__ host; } ;
typedef int X509 ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (size_t) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int FUNC_4 (int *,char*,size_t,int ) ;
 int FUNC_5 (int *,char*,size_t,int ,int *) ;
 int FUNC_6 (struct set_name_fn const*,char*,char const*,int,char const* const) ;
 int FUNC_7 (char*,char const* const,size_t) ;
 char** VAR_1 ;
 scalar_t__ FUNC_8 (char const*,char const* const) ;
 int * FUNC_9 (char const*,char) ;
 size_t FUNC_10 (char const* const) ;

__attribute__((used)) static int FUNC_11(X509 *VAR_2, const char *VAR_3,
                     const struct set_name_fn *VAR_4)
{
    const char *const *VAR_5 = VAR_1;
    int VAR_6 = 0;

    for (; *VAR_5 != ((void*)0); ++VAR_5) {
        int VAR_7 = FUNC_8(VAR_3, *VAR_5) == 0;
        size_t VAR_8 = FUNC_10(*VAR_5);
        char *VAR_9 = FUNC_1(VAR_8);
        int VAR_10, VAR_11;

        FUNC_7(VAR_9, *VAR_5, VAR_8);

        VAR_10 = -1;
        if (!FUNC_2(VAR_11 = FUNC_5(VAR_2, VAR_9, VAR_8, 0, ((void*)0)),
                         0)) {
            VAR_6 = 1;
        } else if (VAR_4->host) {
            if (VAR_11 == 1 && !VAR_7)
                VAR_10 = 1;
            if (VAR_11 == 0 && VAR_7)
                VAR_10 = 0;
        } else if (VAR_11 == 1)
            VAR_10 = 1;
        if (!FUNC_3(FUNC_6(VAR_4, "host", VAR_3, VAR_10, *VAR_5)))
            VAR_6 = 1;

        VAR_10 = -1;
        if (!FUNC_2(VAR_11 = FUNC_5(VAR_2, VAR_9, VAR_8,
                                               VAR_0,
                                               ((void*)0)), 0)) {
            VAR_6 = 1;
        } else if (VAR_4->host) {
            if (VAR_11 == 1 && !VAR_7)
                VAR_10 = 1;
            if (VAR_11 == 0 && VAR_7)
                VAR_10 = 0;
        } else if (VAR_11 == 1)
            VAR_10 = 1;
        if (!FUNC_3(FUNC_6(VAR_4, "host-no-wildcards",
                                     VAR_3, VAR_10, *VAR_5)))
            VAR_6 = 1;

        VAR_10 = -1;
        VAR_11 = FUNC_4(VAR_2, VAR_9, VAR_8, 0);
        if (VAR_4->email) {
            if (VAR_11 && !VAR_7)
                VAR_10 = 1;
            if (!VAR_11 && VAR_7 && FUNC_9(VAR_3, '@') != ((void*)0))
                VAR_10 = 0;
        } else if (VAR_11)
            VAR_10 = 1;
        if (!FUNC_3(FUNC_6(VAR_4, "email", VAR_3, VAR_10, *VAR_5)))
            VAR_6 = 1;
        FUNC_0(VAR_9);
    }

    return VAR_6 == 0;
}
