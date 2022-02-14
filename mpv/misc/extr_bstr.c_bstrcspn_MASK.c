
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bstr {int len; int * start; } ;


 scalar_t__ FUNC_0 (char const*,int ) ;

int FUNC_1(struct bstr VAR_0, const char *VAR_1)
{
    int VAR_2;
    for (VAR_2 = 0; VAR_2 < VAR_0.len; VAR_2++)
        if (FUNC_0(VAR_1, VAR_0.start[VAR_2]))
            break;
    return VAR_2;
}
