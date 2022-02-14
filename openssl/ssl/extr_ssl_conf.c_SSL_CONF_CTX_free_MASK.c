
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int canames; struct TYPE_4__* prefix; struct TYPE_4__** cert_filename; } ;
typedef TYPE_1__ SSL_CONF_CTX ;


 int FUNC_0 (TYPE_1__*) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;

void FUNC_2(SSL_CONF_CTX *VAR_2)
{
    if (VAR_2) {
        size_t VAR_3;
        for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
            FUNC_0(VAR_2->cert_filename[VAR_3]);
        FUNC_0(VAR_2->prefix);
        FUNC_1(VAR_2->canames, VAR_1);
        FUNC_0(VAR_2);
    }
}
