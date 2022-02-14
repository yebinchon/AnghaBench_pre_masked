
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int block_size; struct TYPE_7__* buf; int priv; TYPE_1__* op; } ;
struct TYPE_6__ {int (* free ) (int ) ;} ;
typedef TYPE_2__ PushFilter ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int ,int) ;
 int FUNC_2 (int ) ;

void
FUNC_3(PushFilter *VAR_0)
{
 if (VAR_0->op->free)
  VAR_0->op->free(VAR_0->priv);

 if (VAR_0->buf)
 {
  FUNC_1(VAR_0->buf, 0, VAR_0->block_size);
  FUNC_0(VAR_0->buf);
 }

 FUNC_1(VAR_0, 0, sizeof(*VAR_0));
 FUNC_0(VAR_0);
}
