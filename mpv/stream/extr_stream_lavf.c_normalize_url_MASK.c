
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bstr ;


 int FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (int ,scalar_t__) ;
 scalar_t__* VAR_0 ;
 int FUNC_2 (int ,int *) ;
 char* FUNC_3 (void*,char const*,char*) ;

__attribute__((used)) static char *FUNC_4(void *VAR_1, const char *VAR_2)
{
    bstr VAR_3 = FUNC_2(FUNC_0(VAR_2), ((void*)0));
    for (int VAR_4 = 0; VAR_0[VAR_4]; VAR_4++) {
        if (FUNC_1(VAR_3, VAR_0[VAR_4]))


            return FUNC_3(VAR_1, VAR_2, ":/?#[]@!$&'()*+,;=%");
    }
    return (char *)VAR_2;
}
