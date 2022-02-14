
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int *,char*,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_3 (int ,char*) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_4() {
    VAR_0 = 0;
    char *VAR_4 = FUNC_3(VAR_2, "stream.conf");
    if(!FUNC_0(&VAR_3, VAR_4, 0)) {
        FUNC_2("CONFIG: cannot load user config '%s'. Will try stock config.", VAR_4);
        FUNC_1(VAR_4);

        VAR_4 = FUNC_3(VAR_1, "stream.conf");
        if(!FUNC_0(&VAR_3, VAR_4, 0))
            FUNC_2("CONFIG: cannot load stock config '%s'. Running with internal defaults.", VAR_4);
    }
    FUNC_1(VAR_4);
}
