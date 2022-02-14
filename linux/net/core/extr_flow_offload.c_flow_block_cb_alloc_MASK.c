
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct flow_block_cb {void (* release ) (void*) ;void* cb_priv; void* cb_ident; int * cb; } ;
typedef int flow_setup_cb_t ;


 int VAR_0 ;
 struct flow_block_cb* FUNC_0 (int ) ;
 int VAR_1 ;
 struct flow_block_cb* FUNC_1 (int,int ) ;

struct flow_block_cb *FUNC_2(flow_setup_cb_t *VAR_2,
       void *VAR_3, void *VAR_4,
       void (*VAR_5)(void *VAR_6))
{
 struct flow_block_cb *VAR_7;

 VAR_7 = FUNC_1(sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return FUNC_0(-VAR_0);

 VAR_7->cb = VAR_2;
 VAR_7->cb_ident = VAR_3;
 VAR_7->cb_priv = VAR_4;
 VAR_7->release = VAR_5;

 return VAR_7;
}
