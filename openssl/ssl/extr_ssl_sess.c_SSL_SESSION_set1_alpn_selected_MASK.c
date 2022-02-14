
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t alpn_selected_len; int * alpn_selected; } ;
struct TYPE_5__ {TYPE_1__ ext; } ;
typedef TYPE_2__ SSL_SESSION ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (unsigned char const*,size_t) ;

int FUNC_2(SSL_SESSION *VAR_0, const unsigned char *VAR_1,
                                   size_t VAR_2)
{
    FUNC_0(VAR_0->ext.alpn_selected);
    if (VAR_1 == ((void*)0) || VAR_2 == 0) {
        VAR_0->ext.alpn_selected = ((void*)0);
        VAR_0->ext.alpn_selected_len = 0;
        return 1;
    }
    VAR_0->ext.alpn_selected = FUNC_1(VAR_1, VAR_2);
    if (VAR_0->ext.alpn_selected == ((void*)0)) {
        VAR_0->ext.alpn_selected_len = 0;
        return 0;
    }
    VAR_0->ext.alpn_selected_len = VAR_2;

    return 1;
}
