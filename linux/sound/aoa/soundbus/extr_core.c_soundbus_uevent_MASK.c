
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct soundbus_dev {int modalias; struct platform_device ofdev; } ;
struct kobj_uevent_env {int buflen; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct kobj_uevent_env*,char*,int,...) ;
 char* FUNC_1 (int,char*,int*) ;
 int FUNC_2 (int) ;
 struct soundbus_dev* FUNC_3 (struct device*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_1, struct kobj_uevent_env *VAR_2)
{
 struct soundbus_dev * VAR_3;
 struct platform_device * VAR_4;
 const char *VAR_5;
 int VAR_6 = 0;
 int VAR_7, VAR_8 = 0;

 if (!VAR_1)
  return -VAR_0;

 VAR_3 = FUNC_3(VAR_1);
 if (!VAR_3)
  return -VAR_0;

 VAR_4 = &VAR_3->ofdev;


 VAR_6 = FUNC_0(VAR_2, "OF_NAME=%pOFn", VAR_4->dev.of_node);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_0(VAR_2, "OF_TYPE=%s", FUNC_2(VAR_4->dev.of_node));
 if (VAR_6)
  return VAR_6;





 VAR_5 = FUNC_1(VAR_4->dev.of_node, "compatible", &VAR_7);
 while (VAR_5 && VAR_7 > 0) {
  int VAR_9 = VAR_2->buflen;
  VAR_6 = FUNC_0(VAR_2, "OF_COMPATIBLE_%d=%s", VAR_8, VAR_5);
  if (VAR_6)
   return VAR_6;
  VAR_5 += VAR_2->buflen - VAR_9;
  VAR_7 -= VAR_2->buflen - VAR_9;
  VAR_8 += 1;
 }

 VAR_6 = FUNC_0(VAR_2, "OF_COMPATIBLE_N=%d", VAR_8);
 if (VAR_6)
  return VAR_6;
 VAR_6 = FUNC_0(VAR_2, "MODALIAS=%s", VAR_3->modalias);

 return VAR_6;
}
