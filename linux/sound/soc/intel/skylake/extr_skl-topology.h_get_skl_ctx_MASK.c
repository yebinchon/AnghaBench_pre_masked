
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skl_dev {int dummy; } ;
struct hdac_bus {int dummy; } ;
struct device {int dummy; } ;


 struct skl_dev* FUNC_0 (struct hdac_bus*) ;
 struct hdac_bus* FUNC_1 (struct device*) ;

__attribute__((used)) static inline struct skl_dev *FUNC_2(struct device *VAR_0)
{
 struct hdac_bus *VAR_1 = FUNC_1(VAR_0);

 return FUNC_0(VAR_1);
}
