
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 int FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 () ;
 char* FUNC_2 (char const*,char*) ;
 scalar_t__ FUNC_3 (char const*,int ) ;

__attribute__((used)) static const char *FUNC_4(const char *VAR_3) {
        const char *VAR_4;

        FUNC_0(VAR_3);






        if (FUNC_3(VAR_3, VAR_0)) {
                if (FUNC_1() > 0)
                        VAR_3 = VAR_1;
                else
                        VAR_3 = VAR_2;
        }

        VAR_4 = FUNC_2(VAR_3, "name=");
        if (VAR_4)
                return VAR_4;

        return VAR_3;
}
