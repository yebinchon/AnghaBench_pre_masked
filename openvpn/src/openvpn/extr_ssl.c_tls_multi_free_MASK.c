
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tls_multi {int * session; struct tls_multi* remote_ciphername; int locked_cert_hash_set; struct tls_multi* locked_username; struct tls_multi* locked_cn; struct tls_multi* peer_info; } ;


 int FUNC_0 (struct tls_multi*) ;
 int VAR_0 ;
 int FUNC_1 (struct tls_multi*,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct tls_multi*) ;
 int FUNC_4 (struct tls_multi*,int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (struct tls_multi*) ;

void
FUNC_7(struct tls_multi *VAR_1, bool VAR_2)
{
    int VAR_3;

    FUNC_0(VAR_1);







    if (VAR_1->locked_cn)
    {
        FUNC_3(VAR_1->locked_cn);
    }

    if (VAR_1->locked_username)
    {
        FUNC_3(VAR_1->locked_username);
    }

    FUNC_2(VAR_1->locked_cert_hash_set);

    FUNC_6(VAR_1);

    FUNC_3(VAR_1->remote_ciphername);

    for (VAR_3 = 0; VAR_3 < VAR_0; ++VAR_3)
    {
        FUNC_5(&VAR_1->session[VAR_3], 0);
    }

    if (VAR_2)
    {
        FUNC_4(VAR_1, sizeof(*VAR_1));
    }

    FUNC_3(VAR_1);
}
