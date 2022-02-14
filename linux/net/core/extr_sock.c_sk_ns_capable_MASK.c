
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct user_namespace {int dummy; } ;
struct sock {TYPE_1__* sk_socket; } ;
struct TYPE_2__ {int file; } ;


 scalar_t__ FUNC_0 (int ,struct user_namespace*,int) ;
 scalar_t__ FUNC_1 (struct user_namespace*,int) ;

bool FUNC_2(const struct sock *VAR_0,
     struct user_namespace *VAR_1, int VAR_2)
{
 return FUNC_0(VAR_0->sk_socket->file, VAR_1, VAR_2) &&
  FUNC_1(VAR_1, VAR_2);
}
