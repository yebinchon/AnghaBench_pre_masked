
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sa_family_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char**,char**) ;
 int FUNC_2 (char*,char**,char**) ;
 scalar_t__ FUNC_3 (char*,char*) ;

__attribute__((used)) static sa_family_t FUNC_4(char *VAR_1, char **VAR_2, char **VAR_3)
{
    if (FUNC_3(VAR_1, "systemd")) {
        FUNC_0(
            "Listener configured to use systemd socket activation, "
            "but started outside systemd.");
        return VAR_0;
    }

    if (*VAR_1 == '[')
        return FUNC_2(VAR_1, VAR_2, VAR_3);

    return FUNC_1(VAR_1, VAR_2, VAR_3);
}
