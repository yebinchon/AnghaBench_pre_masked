
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct amp_mgr {int dummy; } ;
struct a2mp_cmd {int len; int code; int ident; } ;


 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sk_buff*,int ) ;

__attribute__((used)) static inline int FUNC_3(struct amp_mgr *VAR_0, struct sk_buff *VAR_1,
          struct a2mp_cmd *VAR_2)
{
 FUNC_0("ident %d code 0x%2.2x", VAR_2->ident, VAR_2->code);

 FUNC_2(VAR_1, FUNC_1(VAR_2->len));
 return 0;
}
