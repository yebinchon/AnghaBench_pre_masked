
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int va_list ;
struct rb_node {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int state; } ;
struct backing_dev_info {int bdi_list; int rb_node; scalar_t__ id; TYPE_1__ wb; struct device* dev; } ;


 scalar_t__ FUNC_0 (struct device*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (struct backing_dev_info*,int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct rb_node** FUNC_4 (scalar_t__,struct rb_node**) ;
 int VAR_5 ;
 int FUNC_5 (struct backing_dev_info*) ;
 int FUNC_6 (struct device*) ;
 struct device* FUNC_7 (int ,int *,int ,struct backing_dev_info*,char const*,int ) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *,struct rb_node*,struct rb_node**) ;
 int FUNC_11 (int ,int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct backing_dev_info*) ;

int FUNC_15(struct backing_dev_info *VAR_6, const char *VAR_7, va_list VAR_8)
{
 struct device *VAR_9;
 struct rb_node *VAR_10, **VAR_11;

 if (VAR_6->dev)
  return 0;

 VAR_9 = FUNC_7(VAR_1, ((void*)0), FUNC_1(0, 0), VAR_6, VAR_7, VAR_8);
 if (FUNC_0(VAR_9))
  return FUNC_2(VAR_9);

 FUNC_5(VAR_6);
 VAR_6->dev = VAR_9;

 FUNC_3(VAR_6, FUNC_6(VAR_9));
 FUNC_11(VAR_0, &VAR_6->wb.state);

 FUNC_12(&VAR_4);

 VAR_6->id = ++VAR_2;

 VAR_11 = FUNC_4(VAR_6->id, &VAR_10);
 FUNC_10(&VAR_6->rb_node, VAR_10, VAR_11);
 FUNC_9(&VAR_6->rb_node, &VAR_5);

 FUNC_8(&VAR_6->bdi_list, &VAR_3);

 FUNC_13(&VAR_4);

 FUNC_14(VAR_6);
 return 0;
}
