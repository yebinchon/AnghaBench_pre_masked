
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nl_msg {int dummy; } ;
struct attrlist_arg {int id; } ;


 int FUNC_0 (struct nl_msg*,int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_1(struct nl_msg *VAR_1, void *VAR_2)
{
 struct attrlist_arg *VAR_3 = VAR_2;

 FUNC_0(VAR_1, VAR_0, VAR_3->id);

 return 0;
nla_put_failure:
 return -1;
}
