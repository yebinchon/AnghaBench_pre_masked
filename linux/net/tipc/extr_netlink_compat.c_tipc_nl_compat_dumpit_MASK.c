
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tipc_nl_compat_msg {struct sk_buff* rep; scalar_t__ rep_type; int rep_size; scalar_t__ req_type; int req; int req_size; } ;
struct tipc_nl_compat_cmd_dump {int (* header ) (struct tipc_nl_compat_msg*) ;} ;
struct sk_buff {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (struct tipc_nl_compat_cmd_dump*,struct tipc_nl_compat_msg*,struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 struct sk_buff* FUNC_3 (int ,int ) ;
 int FUNC_4 (struct tipc_nl_compat_msg*) ;
 struct sk_buff* FUNC_5 (int ) ;
 int FUNC_6 (struct sk_buff*,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct tipc_nl_compat_cmd_dump *VAR_3,
     struct tipc_nl_compat_msg *VAR_4)
{
 int VAR_5;
 struct sk_buff *VAR_6;

 if (VAR_4->req_type && (!VAR_4->req_size ||
         !FUNC_0(VAR_4->req, VAR_4->req_type)))
  return -VAR_0;

 VAR_4->rep = FUNC_5(VAR_4->rep_size);
 if (!VAR_4->rep)
  return -VAR_1;

 if (VAR_4->rep_type)
  FUNC_6(VAR_4->rep, VAR_4->rep_type);

 if (VAR_3->header) {
  VAR_5 = (*VAR_3->header)(VAR_4);
  if (VAR_5) {
   FUNC_2(VAR_4->rep);
   VAR_4->rep = ((void*)0);
   return VAR_5;
  }
 }

 VAR_6 = FUNC_3(0, VAR_2);
 if (!VAR_6) {
  FUNC_2(VAR_4->rep);
  VAR_4->rep = ((void*)0);
  return -VAR_1;
 }

 VAR_5 = FUNC_1(VAR_3, VAR_4, VAR_6);
 if (VAR_5) {
  FUNC_2(VAR_4->rep);
  VAR_4->rep = ((void*)0);
 }
 FUNC_2(VAR_6);

 return VAR_5;
}
