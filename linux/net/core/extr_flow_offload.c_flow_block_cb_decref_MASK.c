
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct flow_block_cb {unsigned int refcnt; } ;



unsigned int FUNC_0(struct flow_block_cb *VAR_0)
{
 return --VAR_0->refcnt;
}
