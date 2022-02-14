
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*) ;
 int VAR_3 ;
 int FUNC_1 (int ,int,char*,char const*) ;
 int FUNC_2 (char*,char const*) ;
 char* FUNC_3 (char const*,char const*) ;
 scalar_t__ FUNC_4 (char const*) ;

__attribute__((used)) static int FUNC_5(const char *VAR_4, const char *VAR_5) {
        const char *VAR_6;

        FUNC_0(VAR_4);
        FUNC_0(VAR_5);

        VAR_6 = FUNC_3(VAR_4, VAR_5);
        if (FUNC_4(VAR_6) < 0) {
                FUNC_1(VAR_3 == VAR_0 ? VAR_1 : VAR_2, VAR_3,
                               "Failed to unlink file \"%s\": %m", VAR_6);

                return VAR_3 == VAR_0 ? 0 : -VAR_3;
        }

        FUNC_2("Removed \"%s\".", VAR_6);
        return 1;
}
