
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;
typedef int HRESULT ;





 int FUNC_0 (char*,size_t,int *,size_t*,int ,char const*,int ) ;

int FUNC_1(char *VAR_0, size_t VAR_1, size_t VAR_2, const char *VAR_3, va_list VAR_4)
{
    size_t VAR_5;

    HRESULT VAR_6 = FUNC_0(VAR_0, VAR_1, ((void*)0), &VAR_5, 0, VAR_3, VAR_4);
    switch (VAR_6)
    {
        case 128:
            return (VAR_1 - VAR_5);

        case 129:
        case 130:
        default:
            return -1;
    }
}
