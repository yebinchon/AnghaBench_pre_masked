
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int dummy; } ;
struct kobj_attribute {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;





 int FUNC_0 () ;
 int VAR_5 ;
 int * VAR_6 ;
 int VAR_7 ;
 int FUNC_1 () ;
 char* FUNC_2 (char const*,char,size_t) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char const*,int ,int) ;
 int FUNC_6 () ;

__attribute__((used)) static ssize_t FUNC_7(struct kobject *VAR_8, struct kobj_attribute *VAR_9,
     const char *VAR_10, size_t VAR_11)
{
 int VAR_12 = 0;
 int VAR_13;
 int VAR_14;
 char *VAR_15;
 int VAR_16 = VAR_3;

 if (!FUNC_0())
  return -VAR_1;

 VAR_15 = FUNC_2(VAR_10, '\n', VAR_11);
 VAR_14 = VAR_15 ? VAR_15 - VAR_10 : VAR_11;

 FUNC_1();
 for (VAR_13 = VAR_2; VAR_13 <= VAR_4; VAR_13++) {
  if (VAR_14 == FUNC_4(VAR_6[VAR_13])
      && !FUNC_5(VAR_10, VAR_6[VAR_13], VAR_14)) {
   VAR_16 = VAR_13;
   break;
  }
 }
 if (VAR_16 != VAR_3) {
  switch (VAR_16) {
  case 130:
  case 131:



  case 128:
   VAR_5 = VAR_16;
   break;
  case 132:
   if (VAR_7)
    VAR_5 = VAR_16;
   else
    VAR_12 = -VAR_0;
  }
 } else
  VAR_12 = -VAR_0;

 if (!VAR_12)
  FUNC_3("Hibernation mode set to '%s'\n",
          VAR_6[VAR_16]);
 FUNC_6();
 return VAR_12 ? VAR_12 : VAR_11;
}
