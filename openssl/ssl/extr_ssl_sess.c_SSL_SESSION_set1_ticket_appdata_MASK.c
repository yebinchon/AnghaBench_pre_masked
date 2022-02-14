
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t ticket_appdata_len; int * ticket_appdata; } ;
typedef TYPE_1__ SSL_SESSION ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (void const*,size_t) ;

int FUNC_2(SSL_SESSION *VAR_0, const void *VAR_1, size_t VAR_2)
{
    FUNC_0(VAR_0->ticket_appdata);
    VAR_0->ticket_appdata_len = 0;
    if (VAR_1 == ((void*)0) || VAR_2 == 0) {
        VAR_0->ticket_appdata = ((void*)0);
        return 1;
    }
    VAR_0->ticket_appdata = FUNC_1(VAR_1, VAR_2);
    if (VAR_0->ticket_appdata != ((void*)0)) {
        VAR_0->ticket_appdata_len = VAR_2;
        return 1;
    }
    return 0;
}
