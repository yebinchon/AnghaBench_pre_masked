
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct vsock_sock {int dummy; } ;
struct sock {int dummy; } ;
struct TYPE_5__ {TYPE_1__* notify_ops; } ;
struct TYPE_4__ {int (* socket_init ) (struct sock*) ;} ;


 int VAR_0 ;

 int FUNC_0 (char*) ;
 int FUNC_1 (struct sock*) ;
 TYPE_3__* FUNC_2 (struct vsock_sock*) ;
 TYPE_1__ VAR_1 ;
 TYPE_1__ VAR_2 ;
 struct vsock_sock* FUNC_3 (struct sock*) ;

__attribute__((used)) static bool FUNC_4(struct sock *VAR_3,
        u16 *VAR_4,
        bool VAR_5)
{
 struct vsock_sock *VAR_6 = FUNC_3(VAR_3);

 if (VAR_5) {
  if (*VAR_4 != VAR_0) {
   FUNC_0("Can't set both an old and new protocol\n");
   return 0;
  }
  FUNC_2(VAR_6)->notify_ops = &VAR_1;
  goto exit;
 }

 switch (*VAR_4) {
 case 128:
  FUNC_2(VAR_6)->notify_ops =
   &VAR_2;
  break;
 default:
  FUNC_0("Unknown notify protocol version\n");
  return 0;
 }

exit:
 FUNC_2(VAR_6)->notify_ops->socket_init(VAR_3);
 return 1;
}
