
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uuid_t ;


 int FUNC_0 (char*,char const*,...) ;
 scalar_t__ FUNC_1 (char const*,char*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (char const*,int ) ;
 int FUNC_4 (int ,char*) ;

int FUNC_5(const char *VAR_0, char *VAR_1) {
    uuid_t VAR_2;
    if(FUNC_2(FUNC_3(VAR_0, VAR_2) == -1)) {
        FUNC_0("Registry: GUID '%s' is not a valid GUID.", VAR_0);
        return -1;
    }
    else {
        FUNC_4(VAR_2, VAR_1);





    }

    return 0;
}
