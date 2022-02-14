
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* ptr; int len; } ;
typedef TYPE_1__ xmlstr_t ;
typedef char WCHAR ;
typedef int DWORD ;


 int FUNC_0 (char const*,int) ;

__attribute__((used)) static DWORD FUNC_1(const xmlstr_t *VAR_0)
{
    const WCHAR *VAR_1 = VAR_0->ptr, *VAR_2;
    DWORD VAR_3 = 0;
    int VAR_4 = 0;


    while (VAR_4 < VAR_0->len)
    {
        VAR_2 = VAR_1;
        while (*VAR_1 != ',' && (VAR_4++ < VAR_0->len)) VAR_1++;

        VAR_3 |= FUNC_0(VAR_2, VAR_1-VAR_2);


        VAR_1++;
        VAR_4++;
    }

    return VAR_3;
}
