
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,unsigned long long*) ;
 int FUNC_2 (char*,int ,char*,char const*,char const*) ;

unsigned int FUNC_3(const char *VAR_1, const char *VAR_2) {
    if(!VAR_1) VAR_1 = "";

    char VAR_3[VAR_0 + 1];
    FUNC_2(VAR_3, VAR_0, "%s/sys/class/net/%s/iflink", VAR_1, VAR_2);

    unsigned long long VAR_4 = 0;
    int VAR_5 = FUNC_1(VAR_3, &VAR_4);
    if(VAR_5) FUNC_0("Cannot read '%s'.", VAR_3);

    return (unsigned int)VAR_4;
}
