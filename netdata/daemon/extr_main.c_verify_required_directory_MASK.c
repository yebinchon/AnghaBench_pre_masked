
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DIR ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,char const*) ;
 int * FUNC_3 (char const*) ;

__attribute__((used)) static const char *FUNC_4(const char *VAR_0) {
    if(FUNC_0(VAR_0) == -1)
        FUNC_2("Cannot cd to directory '%s'", VAR_0);

    DIR *VAR_1 = FUNC_3(VAR_0);
    if(!VAR_1)
        FUNC_2("Cannot examine the contents of directory '%s'", VAR_0);
    FUNC_1(VAR_1);

    return VAR_0;
}
