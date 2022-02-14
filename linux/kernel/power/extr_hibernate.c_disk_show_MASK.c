
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int dummy; } ;
struct kobj_attribute {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;





 int FUNC_0 () ;
 int VAR_2 ;
 char** VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*,char*,...) ;

__attribute__((used)) static ssize_t FUNC_2(struct kobject *VAR_5, struct kobj_attribute *VAR_6,
    char *VAR_7)
{
 int VAR_8;
 char *VAR_9 = VAR_7;

 if (!FUNC_0())
  return FUNC_1(VAR_7, "[disabled]\n");

 for (VAR_8 = VAR_0; VAR_8 <= VAR_1; VAR_8++) {
  if (!VAR_3[VAR_8])
   continue;
  switch (VAR_8) {
  case 130:
  case 131:



  case 128:
   break;
  case 132:
   if (VAR_4)
    break;

   continue;
  }
  if (VAR_8 == VAR_2)
   VAR_7 += FUNC_1(VAR_7, "[%s] ", VAR_3[VAR_8]);
  else
   VAR_7 += FUNC_1(VAR_7, "%s ", VAR_3[VAR_8]);
 }
 VAR_7 += FUNC_1(VAR_7, "\n");
 return VAR_7-VAR_9;
}
