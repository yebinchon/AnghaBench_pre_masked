
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tipc_nl_compat_msg {int rep; scalar_t__ req_type; int req; int req_size; } ;
struct tipc_nl_compat_cmd_doit {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (struct tipc_nl_compat_cmd_doit*,struct tipc_nl_compat_msg*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct tipc_nl_compat_cmd_doit *VAR_2,
          struct tipc_nl_compat_msg *VAR_3)
{
 int VAR_4;

 if (VAR_3->req_type && (!VAR_3->req_size ||
         !FUNC_0(VAR_3->req, VAR_3->req_type)))
  return -VAR_0;

 VAR_4 = FUNC_1(VAR_2, VAR_3);
 if (VAR_4)
  return VAR_4;


 VAR_3->rep = FUNC_2(0);
 if (!VAR_3->rep)
  return -VAR_1;

 return 0;
}
