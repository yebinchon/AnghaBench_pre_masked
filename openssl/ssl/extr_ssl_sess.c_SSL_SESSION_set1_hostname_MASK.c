
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * hostname; } ;
struct TYPE_5__ {TYPE_1__ ext; } ;
typedef TYPE_2__ SSL_SESSION ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*) ;

int FUNC_2(SSL_SESSION *VAR_0, const char *VAR_1)
{
    FUNC_0(VAR_0->ext.hostname);
    if (VAR_1 == ((void*)0)) {
        VAR_0->ext.hostname = ((void*)0);
        return 1;
    }
    VAR_0->ext.hostname = FUNC_1(VAR_1);

    return VAR_0->ext.hostname != ((void*)0);
}
