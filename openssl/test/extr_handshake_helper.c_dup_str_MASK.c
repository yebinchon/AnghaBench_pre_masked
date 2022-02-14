
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char const*,size_t) ;
 int FUNC_1 (char const*,size_t) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int ,size_t) ;

__attribute__((used)) static char *FUNC_4(const unsigned char *VAR_0, size_t VAR_1)
{
    char *VAR_2 = ((void*)0);

    if (VAR_1 == 0)
        return ((void*)0);


    if (FUNC_3(FUNC_1((const char*)(VAR_0), VAR_1), VAR_1))
        FUNC_2(VAR_2 = FUNC_0((const char*)(VAR_0), VAR_1));
    return VAR_2;
}
