
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tls_multi {scalar_t__ locked_cert_hash_set; TYPE_1__* session; } ;
struct cert_hash_set {int dummy; } ;
struct TYPE_2__ {struct cert_hash_set* cert_hash_set; } ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (struct cert_hash_set const*) ;

void
FUNC_1(struct tls_multi *VAR_1)
{
    const struct cert_hash_set *VAR_2 = VAR_1->session[VAR_0].cert_hash_set;
    if (VAR_2 && !VAR_1->locked_cert_hash_set)
    {
        VAR_1->locked_cert_hash_set = FUNC_0(VAR_2);
    }
}
