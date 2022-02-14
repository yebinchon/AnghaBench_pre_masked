
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dwStructSize; char* lpszScheme; char* lpszHostName; int nPort; char* lpszUserName; char* lpszPassword; char* lpszUrlPath; char* lpszExtraInfo; void* dwExtraInfoLength; void* dwUrlPathLength; void* dwPasswordLength; void* dwUserNameLength; void* dwHostNameLength; int nScheme; void* dwSchemeLength; } ;
typedef TYPE_1__ URL_COMPONENTSA ;
typedef char CHAR ;


 int VAR_0 ;
 void* FUNC_0 (char*) ;

__attribute__((used)) static void FUNC_1(URL_COMPONENTSA *VAR_1)
{
    static CHAR VAR_2[] = "http",
                VAR_3[] = "www.winehq.org",
                VAR_4[] = "username",
                VAR_5[] = "password",
                VAR_6[] = "/site/about",
                VAR_7[] = "";

    VAR_1->dwStructSize = sizeof(URL_COMPONENTSA);
    VAR_1->lpszScheme = VAR_2;
    VAR_1->dwSchemeLength = FUNC_0(VAR_1->lpszScheme);
    VAR_1->nScheme = VAR_0;
    VAR_1->lpszHostName = VAR_3;
    VAR_1->dwHostNameLength = FUNC_0(VAR_1->lpszHostName);
    VAR_1->nPort = 80;
    VAR_1->lpszUserName = VAR_4;
    VAR_1->dwUserNameLength = FUNC_0(VAR_1->lpszUserName);
    VAR_1->lpszPassword = VAR_5;
    VAR_1->dwPasswordLength = FUNC_0(VAR_1->lpszPassword);
    VAR_1->lpszUrlPath = VAR_6;
    VAR_1->dwUrlPathLength = FUNC_0(VAR_1->lpszUrlPath);
    VAR_1->lpszExtraInfo = VAR_7;
    VAR_1->dwExtraInfoLength = FUNC_0(VAR_1->lpszExtraInfo);
}
