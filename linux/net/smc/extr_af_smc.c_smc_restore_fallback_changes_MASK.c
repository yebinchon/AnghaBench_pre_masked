
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int sk_socket; } ;
struct smc_sock {TYPE_3__* clcsock; TYPE_1__ sk; } ;
struct TYPE_6__ {TYPE_2__* file; } ;
struct TYPE_5__ {int private_data; } ;



__attribute__((used)) static void FUNC_0(struct smc_sock *VAR_0)
{
 VAR_0->clcsock->file->private_data = VAR_0->sk.sk_socket;
 VAR_0->clcsock->file = ((void*)0);
}
