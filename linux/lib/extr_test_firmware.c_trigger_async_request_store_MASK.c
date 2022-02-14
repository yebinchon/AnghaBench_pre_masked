
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
 int FUNC_0 (char*) ;
 char* FUNC_1 (char const*,size_t,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,char*,...) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int ,int,char*,struct device*,int ,int *,int ) ;
 TYPE_1__* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_8 (int *) ;

__attribute__((used)) static ssize_t FUNC_9(struct device *VAR_8,
        struct device_attribute *VAR_9,
        const char *VAR_10, size_t VAR_11)
{
 int VAR_12;
 char *VAR_13;

 VAR_13 = FUNC_1(VAR_10, VAR_11, VAR_2);
 if (!VAR_13)
  return -VAR_1;

 FUNC_5("loading '%s'\n", VAR_13);

 FUNC_2(&VAR_6);
 FUNC_6(VAR_5);
 VAR_5 = ((void*)0);
 VAR_12 = FUNC_7(VAR_3, 1, VAR_13, VAR_8, VAR_2,
         ((void*)0), VAR_7);
 if (VAR_12) {
  FUNC_5("async load of '%s' failed: %d\n", VAR_13, VAR_12);
  FUNC_0(VAR_13);
  goto out;
 }

 FUNC_0(VAR_13);

 FUNC_8(&VAR_4);

 if (VAR_5) {
  FUNC_5("loaded: %zu\n", VAR_5->size);
  VAR_12 = VAR_11;
 } else {
  FUNC_4("failed to async load firmware\n");
  VAR_12 = -VAR_0;
 }

out:
 FUNC_3(&VAR_6);

 return VAR_12;
}
