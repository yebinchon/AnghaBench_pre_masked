
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vmci_transport {int lock; int sk; int qp_handle; } ;
struct vmci_event_payload_qp {int handle; } ;
struct vmci_event_data {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct vmci_event_payload_qp* FUNC_4 (struct vmci_event_data const*) ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(u32 VAR_0,
       const struct vmci_event_data *VAR_1,
       void *VAR_2)
{
 struct vmci_transport *VAR_3 = VAR_2;
 const struct vmci_event_payload_qp *VAR_4;

 VAR_4 = FUNC_4(VAR_1);




 if (FUNC_6(VAR_4->handle) ||
     !FUNC_5(VAR_3->qp_handle, VAR_4->handle))
  return;







 FUNC_2(&VAR_3->lock);
 if (!VAR_3->sk)
  goto out;




 FUNC_0(VAR_3->sk);

 FUNC_7(VAR_3->sk);

 FUNC_1(VAR_3->sk);
 out:
 FUNC_3(&VAR_3->lock);
}
