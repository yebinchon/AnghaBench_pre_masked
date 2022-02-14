
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
struct list_head {int dummy; } ;
struct dccp_ackvec_parsed {void** vec; int node; void* nonce; void* len; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct dccp_ackvec_parsed* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,struct list_head*) ;

int FUNC_2(struct list_head *VAR_2, u8 *VAR_3, u8 VAR_4, u8 VAR_5)
{
 struct dccp_ackvec_parsed *VAR_6 = FUNC_0(sizeof(*VAR_6), VAR_1);

 if (VAR_6 == ((void*)0))
  return -VAR_0;
 VAR_6->vec = VAR_3;
 VAR_6->len = VAR_4;
 VAR_6->nonce = VAR_5;

 FUNC_1(&VAR_6->node, VAR_2);
 return 0;
}
