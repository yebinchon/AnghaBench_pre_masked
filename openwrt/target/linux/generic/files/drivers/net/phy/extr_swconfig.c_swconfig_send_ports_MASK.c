
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * ports; } ;
struct switch_val {int len; TYPE_1__ value; } ;
struct swconfig_callback {int cmd; struct sk_buff* msg; int * nest; int (* close ) (struct swconfig_callback*,int *) ;int fill; struct genl_info* info; } ;
struct sk_buff {int dummy; } ;
struct genl_info {int dummy; } ;
typedef int cb ;


 int VAR_0 ;
 int FUNC_0 (struct swconfig_callback*,int ,int) ;
 int FUNC_1 (struct sk_buff*,int) ;
 int FUNC_2 (struct swconfig_callback*,int *) ;
 int FUNC_3 (struct swconfig_callback*,int *) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_4(struct sk_buff **VAR_2, struct genl_info *VAR_3, int VAR_4,
  const struct switch_val *VAR_5)
{
 struct swconfig_callback VAR_6;
 int VAR_7 = 0;
 int VAR_8;

 if (!VAR_5->value.ports)
  return -VAR_0;

 FUNC_0(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.cmd = VAR_4;
 VAR_6.msg = *VAR_2;
 VAR_6.info = VAR_3;
 VAR_6.fill = VAR_1;
 VAR_6.close = FUNC_2;

 VAR_6.nest[0] = FUNC_1(VAR_6.msg, VAR_6.cmd);
 for (VAR_8 = 0; VAR_8 < VAR_5->len; VAR_8++) {
  VAR_7 = FUNC_3(&VAR_6, &VAR_5->value.ports[VAR_8]);
  if (VAR_7)
   goto done;
 }
 VAR_7 = VAR_5->len;
 FUNC_2(&VAR_6, ((void*)0));
 *VAR_2 = VAR_6.msg;

done:
 return VAR_7;
}
