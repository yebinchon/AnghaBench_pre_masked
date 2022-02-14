
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_mcbsp {int dma_op_mode; int lock; int free; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 size_t VAR_0 ;
 struct omap_mcbsp* FUNC_0 (struct device*) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,char const*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_2,
     struct device_attribute *VAR_3, const char *VAR_4,
     size_t VAR_5)
{
 struct omap_mcbsp *VAR_6 = FUNC_0(VAR_2);
 int VAR_7;

 VAR_7 = FUNC_3(VAR_1, VAR_4);
 if (VAR_7 < 0)
  return VAR_7;

 FUNC_1(&VAR_6->lock);
 if (!VAR_6->free) {
  VAR_5 = -VAR_0;
  goto unlock;
 }
 VAR_6->dma_op_mode = VAR_7;

unlock:
 FUNC_2(&VAR_6->lock);

 return VAR_5;
}
