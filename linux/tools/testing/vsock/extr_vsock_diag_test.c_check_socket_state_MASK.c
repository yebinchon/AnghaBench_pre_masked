
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ vdiag_state; } ;
struct vsock_stat {TYPE_1__ msg; } ;
typedef scalar_t__ __u8 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,scalar_t__,scalar_t__) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_2(struct vsock_stat *VAR_2, __u8 VAR_3)
{
 if (VAR_2->msg.vdiag_state != VAR_3) {
  FUNC_1(VAR_1, "expected socket state %#lx, got %#lx\n",
   VAR_3, VAR_2->msg.vdiag_state);
  FUNC_0(VAR_0);
 }
}
