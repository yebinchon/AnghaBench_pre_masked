
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dwStructSize; unsigned int dwSchemeLength; int dwHostNameLength; unsigned int dwUserNameLength; unsigned int dwPasswordLength; unsigned int dwUrlPathLength; unsigned int dwExtraInfoLength; scalar_t__ nPort; } ;
typedef TYPE_1__ URL_COMPONENTS ;


 int FUNC_0 (TYPE_1__*,int ,int) ;

__attribute__((used)) static void FUNC_1( URL_COMPONENTS *VAR_0 )
{
    FUNC_0( VAR_0, 0, sizeof(URL_COMPONENTS) );
    VAR_0->dwStructSize = sizeof(URL_COMPONENTS);
    VAR_0->dwSchemeLength = ~0u;
    VAR_0->dwHostNameLength = 1;
    VAR_0->nPort = 0;
    VAR_0->dwUserNameLength = ~0u;
    VAR_0->dwPasswordLength = ~0u;
    VAR_0->dwUrlPathLength = ~0u;
    VAR_0->dwExtraInfoLength = ~0u;
}
