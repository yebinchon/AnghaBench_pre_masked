
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {int sk_wmem_alloc; } ;
struct sk_buff {int len; scalar_t__ truesize; } ;
struct TYPE_3__ {scalar_t__ sysctl_tcp_autocorking; } ;
struct TYPE_4__ {TYPE_1__ ipv4; } ;


 scalar_t__ FUNC_0 (int *) ;
 TYPE_2__* FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;

__attribute__((used)) static bool FUNC_3(struct sock *VAR_0, struct sk_buff *VAR_1,
    int VAR_2)
{
 return VAR_1->len < VAR_2 &&
        FUNC_1(VAR_0)->ipv4.sysctl_tcp_autocorking &&
        !FUNC_2(VAR_0) &&
        FUNC_0(&VAR_0->sk_wmem_alloc) > VAR_1->truesize;
}
