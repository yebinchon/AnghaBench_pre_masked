
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int object_header_t ;
struct TYPE_3__ {int proxyPassword; int proxyUsername; int proxyBypass; int proxy; int agent; } ;
typedef TYPE_1__ appinfo_t ;
typedef int VOID ;


 int FUNC_0 (char*,TYPE_1__*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static VOID FUNC_2(object_header_t *VAR_0)
{
    appinfo_t *VAR_1 = (appinfo_t*)VAR_0;

    FUNC_0("%p\n",VAR_1);

    FUNC_1(VAR_1->agent);
    FUNC_1(VAR_1->proxy);
    FUNC_1(VAR_1->proxyBypass);
    FUNC_1(VAR_1->proxyUsername);
    FUNC_1(VAR_1->proxyPassword);
}
