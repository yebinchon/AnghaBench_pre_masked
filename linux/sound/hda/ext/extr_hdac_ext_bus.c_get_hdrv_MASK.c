
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdac_driver {int dummy; } ;
struct device {int driver; } ;


 struct hdac_driver* FUNC_0 (int ) ;

__attribute__((used)) static inline struct hdac_driver *FUNC_1(struct device *VAR_0)
{
 struct hdac_driver *VAR_1 = FUNC_0(VAR_0->driver);
 return VAR_1;
}
