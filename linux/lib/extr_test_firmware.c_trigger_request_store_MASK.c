
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_4__ {char* size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char const*,size_t,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,char*,...) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__**,char*,struct device*) ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_4,
         struct device_attribute *VAR_5,
         const char *VAR_6, size_t VAR_7)
{
 int VAR_8;
 char *VAR_9;

 VAR_9 = FUNC_1(VAR_6, VAR_7, VAR_1);
 if (!VAR_9)
  return -VAR_0;

 FUNC_4("loading '%s'\n", VAR_9);

 FUNC_2(&VAR_3);
 FUNC_5(VAR_2);
 VAR_2 = ((void*)0);
 VAR_8 = FUNC_6(&VAR_2, VAR_9, VAR_4);
 if (VAR_8) {
  FUNC_4("load of '%s' failed: %d\n", VAR_9, VAR_8);
  goto out;
 }
 FUNC_4("loaded: %zu\n", VAR_2->size);
 VAR_8 = VAR_7;

out:
 FUNC_3(&VAR_3);

 FUNC_0(VAR_9);

 return VAR_8;
}
