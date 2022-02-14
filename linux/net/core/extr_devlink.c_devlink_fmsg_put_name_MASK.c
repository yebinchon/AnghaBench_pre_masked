
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct devlink_fmsg_item {int list; scalar_t__ len; int value; int attrtype; int nla_type; } ;
struct devlink_fmsg {int item_list; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct devlink_fmsg_item* FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,char const*,scalar_t__) ;
 scalar_t__ FUNC_3 (char const*) ;

__attribute__((used)) static int FUNC_4(struct devlink_fmsg *VAR_6, const char *VAR_7)
{
 struct devlink_fmsg_item *VAR_8;

 if (FUNC_3(VAR_7) + 1 > VAR_1)
  return -VAR_2;

 VAR_8 = FUNC_0(sizeof(*VAR_8) + FUNC_3(VAR_7) + 1, VAR_4);
 if (!VAR_8)
  return -VAR_3;

 VAR_8->nla_type = VAR_5;
 VAR_8->len = FUNC_3(VAR_7) + 1;
 VAR_8->attrtype = VAR_0;
 FUNC_2(&VAR_8->value, VAR_7, VAR_8->len);
 FUNC_1(&VAR_8->list, &VAR_6->item_list);

 return 0;
}
