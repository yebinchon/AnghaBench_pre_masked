
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int,char*,char const*) ;
 int FUNC_2 (char*,char const*) ;
 char* FUNC_3 (char const*,char const*) ;
 scalar_t__ FUNC_4 (char const*) ;

__attribute__((used)) static int FUNC_5(const char *VAR_5, const char *VAR_6) {
        const char *VAR_7;

        VAR_7 = FUNC_3(VAR_5, VAR_6);
        if (FUNC_4(VAR_7) < 0) {
                bool VAR_8 = FUNC_0(VAR_4, VAR_0, VAR_1);

                FUNC_1(VAR_8 ? VAR_2 : VAR_3, VAR_4,
                               "Failed to remove directory \"%s\": %m", VAR_7);
                if (!VAR_8)
                        return -VAR_4;
        } else
                FUNC_2("Removed \"%s\".", VAR_7);

        return 0;
}
