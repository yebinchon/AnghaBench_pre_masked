
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char const*,unsigned int,char const*,char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char const*,char*,char*) ;
 int FUNC_3 (char***,char*) ;

__attribute__((used)) static int FUNC_4(
                const char *VAR_1, unsigned VAR_2,
                const char *VAR_3, char *VAR_4,
                void *VAR_5,
                int *VAR_6) {
        char ***VAR_7 = VAR_5;
        char *VAR_8;
        int VAR_9;

        VAR_9 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4);
        if (VAR_9 < 0)
                return VAR_9;

        VAR_8 = FUNC_2(VAR_3, "=", VAR_4);
        if (!VAR_8)
                return -VAR_0;

        VAR_9 = FUNC_3(VAR_7, VAR_8);
        if (VAR_9 < 0) {
                FUNC_1(VAR_8);
                return VAR_9;
        }

        if (VAR_6)
                (*VAR_6)++;

        FUNC_1(VAR_4);
        return 0;
}
