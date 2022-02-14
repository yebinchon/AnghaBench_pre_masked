
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfrm_sec_ctx {int ctx_sid; } ;
struct task_security_struct {int sid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ,int ,int ,int *) ;
 int FUNC_1 () ;
 struct task_security_struct* FUNC_2 (int ) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_3(struct xfrm_sec_ctx *VAR_3)
{
 const struct task_security_struct *VAR_4 = FUNC_2(FUNC_1());

 if (!VAR_3)
  return 0;

 return FUNC_0(&VAR_2,
       VAR_4->sid, VAR_3->ctx_sid,
       VAR_1, VAR_0,
       ((void*)0));
}
