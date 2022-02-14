
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tls_session {int cert_hash_set; scalar_t__ common_name; int * key; int tls_wrap; } ;


 size_t VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (struct tls_session*,int) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(struct tls_session *VAR_1, bool VAR_2)
{
    FUNC_4(&VAR_1->tls_wrap);

    for (size_t VAR_3 = 0; VAR_3 < VAR_0; ++VAR_3)
    {
        FUNC_2(&VAR_1->key[VAR_3], 0);
    }

    if (VAR_1->common_name)
    {
        FUNC_1(VAR_1->common_name);
    }

    FUNC_0(VAR_1->cert_hash_set);

    if (VAR_2)
    {
        FUNC_3(VAR_1, sizeof(*VAR_1));
    }
}
