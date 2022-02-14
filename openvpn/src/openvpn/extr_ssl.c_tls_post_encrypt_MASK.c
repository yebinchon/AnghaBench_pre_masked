
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tls_multi {struct key_state* save_ks; } ;
struct key_state {int n_bytes; int n_packets; } ;
struct buffer {scalar_t__ len; } ;


 int FUNC_0 (struct key_state*) ;

void
FUNC_1(struct tls_multi *VAR_0, struct buffer *VAR_1)
{
    struct key_state *VAR_2 = VAR_0->save_ks;
    VAR_0->save_ks = ((void*)0);

    if (VAR_1->len > 0)
    {
        FUNC_0(VAR_2);

        ++VAR_2->n_packets;
        VAR_2->n_bytes += VAR_1->len;
    }
}
