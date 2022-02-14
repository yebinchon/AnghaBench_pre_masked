
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef char WCHAR ;
typedef int UINT ;
struct TYPE_3__ {char const* RemoteServerName; char const* LocalServer; char const* ServiceParameters; char const* DllSurrogate; scalar_t__ RunAsInteractiveUser; scalar_t__ ActivateAtStorage; int AppID; } ;
typedef TYPE_1__ MSIAPPID ;
typedef char const* LPCWSTR ;
typedef int HKEY ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int ,char const*,char const*) ;
 int VAR_2 ;

__attribute__((used)) static UINT FUNC_3(const MSIAPPID *VAR_3, LPCWSTR VAR_4 )
{
    static const WCHAR VAR_5[] =
         {'R','e','m','o','t','e','S','e','r','v','e','r','N','a','m','e',0};
    static const WCHAR VAR_6[] =
         {'L','o','c','a','l','S','e','r','v','i','c','e',0};
    static const WCHAR VAR_7[] =
         {'S','e','r','v','i','c','e','P','a','r','a','m','e','t','e','r','s',0};
    static const WCHAR VAR_8[] =
         {'D','l','l','S','u','r','r','o','g','a','t','e',0};
    static const WCHAR VAR_9[] =
         {'A','c','t','i','v','a','t','e','A','s','S','t','o','r','a','g','e',0};
    static const WCHAR VAR_10[] = {'Y',0};
    static const WCHAR VAR_11[] = {'R','u','n','A','s',0};
    static const WCHAR VAR_12[] =
         {'I','n','t','e','r','a','c','t','i','v','e',' ','U','s','e','r',0};

    HKEY VAR_13,VAR_14;

    FUNC_1(VAR_1,VAR_2,&VAR_13);
    FUNC_1( VAR_13, VAR_3->AppID, &VAR_14 );
    FUNC_0(VAR_13);
    FUNC_2( VAR_14, ((void*)0), VAR_4 );

    if (VAR_3->RemoteServerName)
        FUNC_2( VAR_14, VAR_5, VAR_3->RemoteServerName );

    if (VAR_3->LocalServer)
        FUNC_2( VAR_14, VAR_6, VAR_3->LocalServer );

    if (VAR_3->ServiceParameters)
        FUNC_2( VAR_14, VAR_7, VAR_3->ServiceParameters );

    if (VAR_3->DllSurrogate)
        FUNC_2( VAR_14, VAR_8, VAR_3->DllSurrogate );

    if (VAR_3->ActivateAtStorage)
        FUNC_2( VAR_14, VAR_9, VAR_10 );

    if (VAR_3->RunAsInteractiveUser)
        FUNC_2( VAR_14, VAR_11, VAR_12 );

    FUNC_0(VAR_14);
    return VAR_0;
}
