
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; } ;
struct netlink_diag_req {int sdiag_protocol; } ;
struct netlink_callback {int* args; int nlh; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sk_buff*,struct netlink_callback*,int,int) ;
 struct netlink_diag_req* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct sk_buff *VAR_3, struct netlink_callback *VAR_4)
{
 struct netlink_diag_req *VAR_5;
 int VAR_6 = VAR_4->args[0];
 int VAR_7 = 0;

 VAR_5 = FUNC_1(VAR_4->nlh);

 if (VAR_5->sdiag_protocol == VAR_2) {
  int VAR_8;

  for (VAR_8 = VAR_4->args[1]; VAR_8 < VAR_1; VAR_8++) {
   VAR_7 = FUNC_0(VAR_3, VAR_4, VAR_8, VAR_6);
   if (VAR_7)
    break;
   VAR_6 = 0;
  }
  VAR_4->args[1] = VAR_8;
 } else {
  if (VAR_5->sdiag_protocol >= VAR_1)
   return -VAR_0;

  VAR_7 = FUNC_0(VAR_3, VAR_4, VAR_5->sdiag_protocol, VAR_6);
 }

 return VAR_7 < 0 ? VAR_7 : VAR_3->len;
}
