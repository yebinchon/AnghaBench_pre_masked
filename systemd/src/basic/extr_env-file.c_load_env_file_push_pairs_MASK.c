
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char const*,unsigned int,char const*,char*) ;
 int FUNC_1 (char***,char const*) ;
 int FUNC_2 (char***,char*) ;

__attribute__((used)) static int FUNC_3(
                const char *VAR_1, unsigned VAR_2,
                const char *VAR_3, char *VAR_4,
                void *VAR_5,
                int *VAR_6) {
        char ***VAR_7 = VAR_5;
        int VAR_8;

        VAR_8 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4);
        if (VAR_8 < 0)
                return VAR_8;

        VAR_8 = FUNC_1(VAR_7, VAR_3);
        if (VAR_8 < 0)
                return -VAR_0;

        if (!VAR_4) {
                VAR_8 = FUNC_1(VAR_7, "");
                if (VAR_8 < 0)
                        return -VAR_0;
        } else {
                VAR_8 = FUNC_2(VAR_7, VAR_4);
                if (VAR_8 < 0)
                        return VAR_8;
        }

        if (VAR_6)
                (*VAR_6)++;

        return 0;
}
