
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char const Set ;
typedef int ExtractFlags ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (char const**,char**,char const*,int ) ;
 int FUNC_2 (char const*,char*) ;

int FUNC_3(Set *VAR_0, const char *VAR_1, const char *VAR_2, ExtractFlags VAR_3) {
        const char *VAR_4 = VAR_1;
        int VAR_5;

        FUNC_0(VAR_0);
        FUNC_0(VAR_1);

        for (;;) {
                char *VAR_6;

                VAR_5 = FUNC_1(&VAR_4, &VAR_6, VAR_2, VAR_3);
                if (VAR_5 <= 0)
                        return VAR_5;

                VAR_5 = FUNC_2(VAR_0, VAR_6);
                if (VAR_5 < 0)
                        return VAR_5;
        }
}
