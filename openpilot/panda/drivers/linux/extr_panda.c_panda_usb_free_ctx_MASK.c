
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct panda_usb_ctx {TYPE_1__* priv; int ndx; } ;
struct TYPE_2__ {int netdev; int free_ctx_cnt; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline void FUNC_2(struct panda_usb_ctx *VAR_1)
{

  FUNC_0(&VAR_1->priv->free_ctx_cnt);

  VAR_1->ndx = VAR_0;


  FUNC_1(VAR_1->priv->netdev);
}
