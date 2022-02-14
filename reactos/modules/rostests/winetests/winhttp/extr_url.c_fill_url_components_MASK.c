
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dwStructSize; int nPort; int lpszExtraInfo; void* dwExtraInfoLength; int lpszUrlPath; void* dwUrlPathLength; int lpszPassword; void* dwPasswordLength; int lpszUserName; void* dwUserNameLength; int lpszHostName; void* dwHostNameLength; int nScheme; int lpszScheme; void* dwSchemeLength; } ;
typedef TYPE_1__ URL_COMPONENTS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_1( URL_COMPONENTS *VAR_7 )
{
    VAR_7->dwStructSize = sizeof(URL_COMPONENTS);
    VAR_7->lpszScheme = VAR_2;
    VAR_7->dwSchemeLength = FUNC_0( VAR_7->lpszScheme );
    VAR_7->nScheme = VAR_0;
    VAR_7->lpszHostName = VAR_6;
    VAR_7->dwHostNameLength = FUNC_0( VAR_7->lpszHostName );
    VAR_7->nPort = 80;
    VAR_7->lpszUserName = VAR_5;
    VAR_7->dwUserNameLength = FUNC_0( VAR_7->lpszUserName );
    VAR_7->lpszPassword = VAR_3;
    VAR_7->dwPasswordLength = FUNC_0( VAR_7->lpszPassword );
    VAR_7->lpszUrlPath = VAR_1;
    VAR_7->dwUrlPathLength = FUNC_0( VAR_7->lpszUrlPath );
    VAR_7->lpszExtraInfo = VAR_4;
    VAR_7->dwExtraInfoLength = FUNC_0( VAR_7->lpszExtraInfo );
}
