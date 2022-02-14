
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vsock_sock {int sk; int trans; } ;
struct vmci_transport {int dummy; } ;
struct TYPE_2__ {int queue_pair_max_size; int queue_pair_min_size; int queue_pair_size; int lock; int * sk; int elem; int * notify_ops; int detach_sub_id; scalar_t__ consume_size; scalar_t__ produce_size; int * qpair; void* qp_handle; void* dg_handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;
 TYPE_1__* FUNC_3 (struct vsock_sock*) ;

__attribute__((used)) static int FUNC_4(struct vsock_sock *VAR_7,
          struct vsock_sock *VAR_8)
{
 VAR_7->trans = FUNC_1(sizeof(struct vmci_transport), VAR_1);
 if (!VAR_7->trans)
  return -VAR_0;

 FUNC_3(VAR_7)->dg_handle = VAR_2;
 FUNC_3(VAR_7)->qp_handle = VAR_2;
 FUNC_3(VAR_7)->qpair = ((void*)0);
 FUNC_3(VAR_7)->produce_size = FUNC_3(VAR_7)->consume_size = 0;
 FUNC_3(VAR_7)->detach_sub_id = VAR_3;
 FUNC_3(VAR_7)->notify_ops = ((void*)0);
 FUNC_0(&FUNC_3(VAR_7)->elem);
 FUNC_3(VAR_7)->sk = &VAR_7->sk;
 FUNC_2(&FUNC_3(VAR_7)->lock);
 if (VAR_8) {
  FUNC_3(VAR_7)->queue_pair_size =
   FUNC_3(VAR_8)->queue_pair_size;
  FUNC_3(VAR_7)->queue_pair_min_size =
   FUNC_3(VAR_8)->queue_pair_min_size;
  FUNC_3(VAR_7)->queue_pair_max_size =
   FUNC_3(VAR_8)->queue_pair_max_size;
 } else {
  FUNC_3(VAR_7)->queue_pair_size =
   VAR_4;
  FUNC_3(VAR_7)->queue_pair_min_size =
    VAR_6;
  FUNC_3(VAR_7)->queue_pair_max_size =
   VAR_5;
 }

 return 0;
}
