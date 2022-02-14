
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {TYPE_2__* sk_socket; } ;
struct TYPE_4__ {TYPE_1__* file; } ;
struct TYPE_3__ {int f_owner; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct sock*,int ,int ) ;

void FUNC_2(struct sock *VAR_2)
{
 if (VAR_2->sk_socket && VAR_2->sk_socket->file)
  if (FUNC_0(&VAR_2->sk_socket->file->f_owner))
   FUNC_1(VAR_2, VAR_1, VAR_0);
}
