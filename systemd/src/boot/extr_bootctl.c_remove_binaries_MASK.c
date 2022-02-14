
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (char const*,char*) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char const*,int) ;

__attribute__((used)) static int FUNC_3(const char *VAR_2) {
        const char *VAR_3;
        int VAR_4, VAR_5;

        VAR_3 = FUNC_0(VAR_2, "/EFI/systemd");
        VAR_4 = FUNC_2(VAR_3, VAR_1|VAR_0);

        VAR_5 = FUNC_1(VAR_2);
        if (VAR_5 < 0 && VAR_4 == 0)
                VAR_4 = VAR_5;

        return VAR_4;
}
