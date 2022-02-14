
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char***) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char const*,unsigned int,char const*,char*,char***,int*) ;
 int FUNC_5 (char*,char const*,unsigned int,char const*,char*) ;
 int FUNC_6 (char*,int ,unsigned int,char const*) ;
 char* FUNC_7 (char*,char**,int) ;
 int FUNC_8 (char const*) ;

__attribute__((used)) static int FUNC_9(
                const char *VAR_4, unsigned VAR_5,
                const char *VAR_6, char *VAR_7,
                void *VAR_8,
                int *VAR_9) {

        char ***VAR_10 = VAR_8;
        char *VAR_11;

        FUNC_0(VAR_10);

        if (!VAR_7) {
                FUNC_6("%s:%u: invalid syntax (around \"%s\"), ignoring.", FUNC_8(VAR_4), VAR_5, VAR_6);
                return 0;
        }

        if (!FUNC_1(VAR_6)) {
                FUNC_6("%s:%u: invalid variable name \"%s\", ignoring.", FUNC_8(VAR_4), VAR_5, VAR_6);
                FUNC_2(VAR_7);
                return 0;
        }

        VAR_11 = FUNC_7(VAR_7, *VAR_10,
                                     VAR_3|
                                     VAR_1|
                                     VAR_2);
        if (!VAR_11)
                return -VAR_0;

        FUNC_3(VAR_7, VAR_11);

        FUNC_5("%s:%u: setting %s=%s", VAR_4, VAR_5, VAR_6, VAR_7);

        return FUNC_4(VAR_4, VAR_5, VAR_6, VAR_7, VAR_10, VAR_9);
}
