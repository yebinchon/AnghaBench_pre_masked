
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct flow_block_cb {int cb_priv; int (* release ) (int ) ;} ;


 int FUNC_0 (struct flow_block_cb*) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct flow_block_cb *VAR_0)
{
 if (VAR_0->release)
  VAR_0->release(VAR_0->cb_priv);

 FUNC_0(VAR_0);
}
