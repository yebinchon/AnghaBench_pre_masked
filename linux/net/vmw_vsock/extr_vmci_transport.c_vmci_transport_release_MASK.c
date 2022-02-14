
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vsock_sock {int dummy; } ;
struct TYPE_2__ {int dg_handle; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (struct vsock_sock*) ;
 int FUNC_3 (struct vsock_sock*) ;

__attribute__((used)) static void FUNC_4(struct vsock_sock *VAR_1)
{
 FUNC_3(VAR_1);

 if (!FUNC_1(FUNC_2(VAR_1)->dg_handle)) {
  FUNC_0(FUNC_2(VAR_1)->dg_handle);
  FUNC_2(VAR_1)->dg_handle = VAR_0;
 }
}
