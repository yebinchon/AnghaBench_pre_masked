
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct TYPE_4__ {int lock; struct device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,TYPE_1__*) ;
 int FUNC_1 (struct device*,int *,int *,int ) ;
 TYPE_1__* FUNC_2 (int,int ) ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_4)
{
 struct device *VAR_5 = &VAR_4->dev;

 VAR_3 = FUNC_2(sizeof(*VAR_3), VAR_1);
 if (!VAR_3)
  return -VAR_0;

 VAR_3->dev = VAR_5;

 FUNC_3(&VAR_3->lock);
 FUNC_0(VAR_5, VAR_3);

 return FUNC_1(VAR_5, &VAR_2,
       ((void*)0), 0);
}
