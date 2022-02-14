
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * lpszProxyBypass; int * lpszProxy; } ;
typedef TYPE_1__ WINHTTP_PROXY_INFO ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int,char*,int) ;

__attribute__((used)) static BOOL FUNC_6(void)
{
    WINHTTP_PROXY_INFO VAR_2;
    BOOL VAR_3 = VAR_1;

    FUNC_2(0xdeadbeef);
    if (FUNC_3(&VAR_2))
    {
        FUNC_5(FUNC_0() == VAR_0 || FUNC_4(FUNC_0() == 0xdeadbeef) ,
           "got %u\n", FUNC_0());
        VAR_3 = (VAR_2.lpszProxy != ((void*)0));
        if (VAR_3)
            FUNC_1(VAR_2.lpszProxy);
        if (VAR_2.lpszProxyBypass != ((void*)0))
            FUNC_1(VAR_2.lpszProxyBypass);
    }
    else
       VAR_3 = VAR_1;

    return VAR_3;
}
