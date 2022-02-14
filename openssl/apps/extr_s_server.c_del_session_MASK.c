
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {unsigned int idlen; struct TYPE_5__* der; struct TYPE_5__* id; struct TYPE_5__* next; } ;
typedef TYPE_1__ simple_ssl_session ;
typedef int SSL_SESSION ;
typedef int SSL_CTX ;


 int FUNC_0 (TYPE_1__*) ;
 unsigned char* FUNC_1 (int *,unsigned int*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_2 (TYPE_1__*,unsigned char const*,unsigned int) ;

__attribute__((used)) static void FUNC_3(SSL_CTX *VAR_1, SSL_SESSION *VAR_2)
{
    simple_ssl_session *VAR_3, *VAR_4 = ((void*)0);
    const unsigned char *VAR_5;
    unsigned int VAR_6;
    VAR_5 = FUNC_1(VAR_2, &VAR_6);
    for (VAR_3 = VAR_0; VAR_3; VAR_3 = VAR_3->next) {
        if (VAR_6 == VAR_3->idlen && !FUNC_2(VAR_3->id, VAR_5, VAR_6)) {
            if (VAR_4)
                VAR_4->next = VAR_3->next;
            else
                VAR_0 = VAR_3->next;
            FUNC_0(VAR_3->id);
            FUNC_0(VAR_3->der);
            FUNC_0(VAR_3);
            return;
        }
        VAR_4 = VAR_3;
    }
}
