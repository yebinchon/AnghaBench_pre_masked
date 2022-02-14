
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int proxyPassword; int proxyUsername; int proxyBypass; int proxy; scalar_t__ proxyEnabled; } ;
typedef TYPE_1__ proxyinfo_t ;
struct TYPE_7__ {int accessType; int proxyPassword; int proxyUsername; int proxyBypass; int proxy; } ;
typedef TYPE_2__ appinfo_t ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*,int ,int ) ;
 int VAR_3 ;
 int FUNC_3 (int ) ;

__attribute__((used)) static BOOL FUNC_4( appinfo_t *VAR_4 )
{
    proxyinfo_t VAR_5;

    if (FUNC_1( &VAR_5 ))
        return VAR_0;

    if (VAR_5.proxyEnabled)
    {
        FUNC_2("http proxy = %s bypass = %s\n", FUNC_3(VAR_5.proxy), FUNC_3(VAR_5.proxyBypass));

        VAR_4->accessType = VAR_2;
        VAR_4->proxy = VAR_5.proxy;
        VAR_4->proxyBypass = VAR_5.proxyBypass;
        VAR_4->proxyUsername = VAR_5.proxyUsername;
        VAR_4->proxyPassword = VAR_5.proxyPassword;
        return VAR_3;
    }

    VAR_4->accessType = VAR_1;
    FUNC_0(&VAR_5);
    return VAR_0;
}
