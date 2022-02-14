
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bstr ;


 scalar_t__ FUNC_0 (int ,char*) ;

__attribute__((used)) static int FUNC_1(char **VAR_0, bstr VAR_1)
{
    for (int VAR_2 = 0; VAR_0 && VAR_0[VAR_2]; VAR_2++) {
        if (FUNC_0(VAR_1, VAR_0[VAR_2]))
            return VAR_2;
    }
    return -1;
}
