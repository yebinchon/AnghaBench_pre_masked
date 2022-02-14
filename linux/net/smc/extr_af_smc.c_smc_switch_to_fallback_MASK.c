
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* sk_socket; } ;
struct smc_sock {int use_fallback; TYPE_4__* clcsock; TYPE_3__ sk; } ;
struct TYPE_8__ {TYPE_1__* file; } ;
struct TYPE_6__ {TYPE_1__* file; } ;
struct TYPE_5__ {TYPE_4__* private_data; } ;



__attribute__((used)) static void FUNC_0(struct smc_sock *VAR_0)
{
 VAR_0->use_fallback = 1;
 if (VAR_0->sk.sk_socket && VAR_0->sk.sk_socket->file) {
  VAR_0->clcsock->file = VAR_0->sk.sk_socket->file;
  VAR_0->clcsock->file->private_data = VAR_0->clcsock;
 }
}
