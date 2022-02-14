
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_3__ {char* size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char const*,size_t,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,char*,...) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int ,int ,char*,struct device*,int ,int *,int ) ;
 TYPE_1__* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_8 (int *) ;

__attribute__((used)) static ssize_t FUNC_9(struct device *VAR_9,
          struct device_attribute *VAR_10,
          const char *VAR_11, size_t VAR_12)
{
 int VAR_13;
 char *VAR_14;

 VAR_14 = FUNC_1(VAR_11, VAR_12, VAR_3);
 if (!VAR_14)
  return -VAR_1;

 FUNC_5("loading '%s' using custom fallback mechanism\n", VAR_14);

 FUNC_2(&VAR_7);
 FUNC_6(VAR_6);
 VAR_6 = ((void*)0);
 VAR_13 = FUNC_7(VAR_4, VAR_2, VAR_14,
         VAR_9, VAR_3, ((void*)0),
         VAR_8);
 if (VAR_13) {
  FUNC_5("async load of '%s' failed: %d\n", VAR_14, VAR_13);
  FUNC_0(VAR_14);
  goto out;
 }

 FUNC_0(VAR_14);

 FUNC_8(&VAR_5);

 if (VAR_6) {
  FUNC_5("loaded: %zu\n", VAR_6->size);
  VAR_13 = VAR_12;
 } else {
  FUNC_4("failed to async load firmware\n");
  VAR_13 = -VAR_0;
 }

out:
 FUNC_3(&VAR_7);

 return VAR_13;
}
