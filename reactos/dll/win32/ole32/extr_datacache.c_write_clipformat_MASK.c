
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int length ;
typedef int format_name ;
typedef int cf ;
typedef int IStream ;
typedef int HRESULT ;
typedef int DWORD ;
typedef scalar_t__ CLIPFORMAT ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,char*,int) ;
 int FUNC_2 (int *,...) ;

__attribute__((used)) static HRESULT FUNC_3(IStream *VAR_0, CLIPFORMAT VAR_1)
{
    DWORD VAR_2;
    HRESULT VAR_3;
    char VAR_4[256];

    if (VAR_1 == 0)
        VAR_2 = 0;
    else if (VAR_1 < 0xc000)
        VAR_2 = -1;
    else
    {
        VAR_2 = FUNC_1(VAR_1, VAR_4, sizeof(VAR_4));

        if (VAR_2) VAR_2++;
    }
    VAR_3 = FUNC_2(VAR_0, &VAR_2, sizeof(VAR_2), ((void*)0));
    if (FUNC_0(VAR_3) || VAR_1 == 0)
        return VAR_3;

    if (VAR_1 < 0xc000)
    {
        DWORD VAR_5 = VAR_1;
        VAR_3 = FUNC_2(VAR_0, &VAR_5, sizeof(VAR_5), ((void*)0));
    }
    else
    {
        VAR_3 = FUNC_2(VAR_0, VAR_4, VAR_2, ((void*)0));
    }
    return VAR_3;
}
