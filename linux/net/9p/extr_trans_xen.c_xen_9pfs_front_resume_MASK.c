
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenbus_device {int dev; } ;


 int FUNC_0 (int *,char*) ;

__attribute__((used)) static int FUNC_1(struct xenbus_device *VAR_0)
{
 FUNC_0(&VAR_0->dev, "suspend/resume unsupported\n");
 return 0;
}
