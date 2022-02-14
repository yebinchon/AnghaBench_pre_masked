
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct xfrm_sec_ctx {int ctx_sid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ,int ,int ,int ,int *) ;
 int FUNC_1 (struct xfrm_sec_ctx*) ;
 int VAR_5 ;

int FUNC_2(struct xfrm_sec_ctx *VAR_6, u32 VAR_7, u8 VAR_8)
{
 int VAR_9;



 if (!VAR_6)
  return 0;


 if (!FUNC_1(VAR_6))
  return -VAR_2;

 VAR_9 = FUNC_0(&VAR_5,
     VAR_7, VAR_6->ctx_sid,
     VAR_4, VAR_0, ((void*)0));
 return (VAR_9 == -VAR_1 ? -VAR_3 : VAR_9);
}
