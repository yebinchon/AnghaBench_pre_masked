
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rxrpc_call {scalar_t__ state; int* rxtx_annotations; int lock; int events; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct rxrpc_call*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static inline void FUNC_4(struct rxrpc_call *VAR_4, int VAR_5)
{
 FUNC_1(&VAR_4->lock);

 if (VAR_4->state < VAR_0) {
  VAR_4->rxtx_annotations[VAR_5] =
   (VAR_4->rxtx_annotations[VAR_5] & VAR_2) |
   VAR_3;
  if (!FUNC_3(VAR_1, &VAR_4->events))
   FUNC_0(VAR_4);
 }

 FUNC_2(&VAR_4->lock);
}
