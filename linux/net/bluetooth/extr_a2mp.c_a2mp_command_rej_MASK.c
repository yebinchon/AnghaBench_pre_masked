
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct amp_mgr {int dummy; } ;
struct a2mp_cmd_rej {int reason; } ;
struct a2mp_cmd {int ident; int len; } ;


 int FUNC_0 (char*,int ,int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_3(struct amp_mgr *VAR_1, struct sk_buff *VAR_2,
       struct a2mp_cmd *VAR_3)
{
 struct a2mp_cmd_rej *VAR_4 = (void *) VAR_2->data;

 if (FUNC_1(VAR_3->len) < sizeof(*VAR_4))
  return -VAR_0;

 FUNC_0("ident %d reason %d", VAR_3->ident, FUNC_1(VAR_4->reason));

 FUNC_2(VAR_2, sizeof(*VAR_4));

 return 0;
}
