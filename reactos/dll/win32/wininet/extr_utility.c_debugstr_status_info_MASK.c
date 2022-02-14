
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dwError; int dwResult; } ;
typedef TYPE_1__ INTERNET_ASYNC_RESULT ;
typedef int DWORD ;



 char const* FUNC_0 (char*,void*,...) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static const char *FUNC_2(DWORD VAR_0, void *VAR_1)
{
    switch(VAR_0) {
    case 128: {
        INTERNET_ASYNC_RESULT *VAR_2 = VAR_1;
        return FUNC_0("{%s, %d}", FUNC_1(VAR_2->dwResult), VAR_2->dwError);
    }
    default:
        return FUNC_0("%p", VAR_1);
    }
}
