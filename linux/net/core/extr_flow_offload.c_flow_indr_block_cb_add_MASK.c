
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct flow_indr_block_dev {int cb_list; } ;
struct flow_indr_block_cb {int list; void* cb_ident; int * cb; void* cb_priv; } ;
typedef int flow_indr_block_bind_cb_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct flow_indr_block_cb* FUNC_0 (int ) ;
 int VAR_2 ;
 struct flow_indr_block_cb* FUNC_1 (struct flow_indr_block_dev*,int *,void*) ;
 struct flow_indr_block_cb* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static struct flow_indr_block_cb *
FUNC_4(struct flow_indr_block_dev *VAR_3, void *VAR_4,
         flow_indr_block_bind_cb_t *VAR_5, void *VAR_6)
{
 struct flow_indr_block_cb *VAR_7;

 VAR_7 = FUNC_1(VAR_3, VAR_5, VAR_6);
 if (VAR_7)
  return FUNC_0(-VAR_0);

 VAR_7 = FUNC_2(sizeof(*VAR_7), VAR_2);
 if (!VAR_7)
  return FUNC_0(-VAR_1);

 VAR_7->cb_priv = VAR_4;
 VAR_7->cb = VAR_5;
 VAR_7->cb_ident = VAR_6;
 FUNC_3(&VAR_7->list, &VAR_3->cb_list);

 return VAR_7;
}
