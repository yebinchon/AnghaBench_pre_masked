
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PNET_LUID ;
typedef int NETIO_STATUS ;
typedef scalar_t__ LPWSTR ;
typedef int DWORD ;


 int FUNC_0 (scalar_t__,int ) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (char const*) ;

__attribute__((used)) static DWORD
FUNC_3(const char *VAR_1, PNET_LUID VAR_2)
{
    NETIO_STATUS VAR_3;
    LPWSTR VAR_4 = FUNC_2(VAR_1);

    if (VAR_4)
    {
        VAR_3 = FUNC_0(VAR_4, VAR_2);
        FUNC_1(VAR_4);
    }
    else
    {
        VAR_3 = VAR_0;
    }
    return VAR_3;
}
