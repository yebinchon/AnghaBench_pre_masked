
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct vsock_sock {int local_addr; int sk; } ;
struct sockaddr_vm {scalar_t__ svm_port; scalar_t__ svm_cid; } ;
struct TYPE_3__ {int resource; } ;
struct TYPE_4__ {TYPE_1__ dg_handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (struct vsock_sock*) ;
 int FUNC_2 (scalar_t__,scalar_t__,int ,int *,TYPE_1__*) ;
 int FUNC_3 (int) ;
 int VAR_8 ;
 int FUNC_4 (int *,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_5(struct vsock_sock *VAR_9,
         struct sockaddr_vm *VAR_10)
{
 u32 VAR_11;
 u32 VAR_12;
 int VAR_13;




 VAR_11 = VAR_10->svm_port == VAR_4 ?
   VAR_6 : VAR_10->svm_port;

 if (VAR_11 <= VAR_2 && !FUNC_0(VAR_0))
  return -VAR_1;

 VAR_12 = VAR_10->svm_cid == VAR_3 ?
    VAR_5 : 0;

 VAR_13 = FUNC_2(VAR_11, VAR_12,
       VAR_8,
       &VAR_9->sk,
       &FUNC_1(VAR_9)->dg_handle);
 if (VAR_13 < VAR_7)
  return FUNC_3(VAR_13);
 FUNC_4(&VAR_9->local_addr, VAR_10->svm_cid,
   FUNC_1(VAR_9)->dg_handle.resource);

 return 0;
}
