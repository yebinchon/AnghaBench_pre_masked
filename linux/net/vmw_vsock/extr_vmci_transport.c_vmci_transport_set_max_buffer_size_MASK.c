
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct vsock_sock {int dummy; } ;
struct TYPE_2__ {scalar_t__ queue_pair_size; scalar_t__ queue_pair_max_size; } ;


 TYPE_1__* FUNC_0 (struct vsock_sock*) ;

__attribute__((used)) static void FUNC_1(struct vsock_sock *VAR_0,
            u64 VAR_1)
{
 if (VAR_1 < FUNC_0(VAR_0)->queue_pair_size)
  FUNC_0(VAR_0)->queue_pair_size = VAR_1;
 FUNC_0(VAR_0)->queue_pair_max_size = VAR_1;
}
