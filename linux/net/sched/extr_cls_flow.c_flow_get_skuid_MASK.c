
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct sock {TYPE_3__* sk_socket; } ;
struct sk_buff {int dummy; } ;
typedef int kuid_t ;
struct TYPE_6__ {TYPE_2__* file; } ;
struct TYPE_5__ {TYPE_1__* f_cred; } ;
struct TYPE_4__ {int fsuid; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 struct sock* FUNC_1 (struct sk_buff const*) ;

__attribute__((used)) static u32 FUNC_2(const struct sk_buff *VAR_1)
{
 struct sock *VAR_2 = FUNC_1(VAR_1);

 if (VAR_2 && VAR_2->sk_socket && VAR_2->sk_socket->file) {
  kuid_t VAR_3 = VAR_2->sk_socket->file->f_cred->fsuid;

  return FUNC_0(&VAR_0, VAR_3);
 }
 return 0;
}
