
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vsock_sock {int dummy; } ;
typedef int s64 ;
struct TYPE_2__ {int (* stream_has_data ) (struct vsock_sock*) ;} ;


 int FUNC_0 (struct vsock_sock*) ;
 TYPE_1__* VAR_0 ;

s64 FUNC_1(struct vsock_sock *VAR_1)
{
 return VAR_0->stream_has_data(VAR_1);
}
