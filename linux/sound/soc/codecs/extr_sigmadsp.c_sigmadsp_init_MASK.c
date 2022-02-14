
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigmadsp_ops {int dummy; } ;
struct sigmadsp {int lock; int data_list; int ctrl_list; struct device* dev; struct sigmadsp_ops const* ops; } ;
struct device {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct sigmadsp*,char const*) ;

__attribute__((used)) static int FUNC_3(struct sigmadsp *VAR_0, struct device *VAR_1,
 const struct sigmadsp_ops *VAR_2, const char *VAR_3)
{
 VAR_0->ops = VAR_2;
 VAR_0->dev = VAR_1;

 FUNC_0(&VAR_0->ctrl_list);
 FUNC_0(&VAR_0->data_list);
 FUNC_1(&VAR_0->lock);

 return FUNC_2(VAR_0, VAR_3);
}
