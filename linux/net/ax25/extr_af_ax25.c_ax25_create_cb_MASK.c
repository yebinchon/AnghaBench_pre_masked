
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int state; int reseq_queue; int ack_queue; int frag_queue; int write_queue; int refcount; } ;
typedef TYPE_1__ ax25_cb ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;

ax25_cb *FUNC_5(void)
{
 ax25_cb *VAR_2;

 if ((VAR_2 = FUNC_2(sizeof(*VAR_2), VAR_1)) == ((void*)0))
  return ((void*)0);

 FUNC_3(&VAR_2->refcount, 1);

 FUNC_4(&VAR_2->write_queue);
 FUNC_4(&VAR_2->frag_queue);
 FUNC_4(&VAR_2->ack_queue);
 FUNC_4(&VAR_2->reseq_queue);

 FUNC_1(VAR_2);

 FUNC_0(VAR_2, ((void*)0));

 VAR_2->state = VAR_0;

 return VAR_2;
}
