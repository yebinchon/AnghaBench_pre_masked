
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int dummy; } ;
struct kobj_attribute {int dummy; } ;
typedef size_t ssize_t ;
typedef scalar_t__ dev_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char const*,int,int ) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (char*) ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (char*,scalar_t__) ;
 int FUNC_5 () ;
 scalar_t__ VAR_4 ;
 int FUNC_6 () ;

__attribute__((used)) static ssize_t FUNC_7(struct kobject *VAR_5, struct kobj_attribute *VAR_6,
       const char *VAR_7, size_t VAR_8)
{
 dev_t VAR_9;
 int VAR_10 = VAR_8;
 char *VAR_11;

 if (VAR_10 && VAR_7[VAR_10-1] == '\n')
  VAR_10--;
 VAR_11 = FUNC_1(VAR_7, VAR_10, VAR_2);
 if (!VAR_11)
  return -VAR_1;

 VAR_9 = FUNC_3(VAR_11);
 FUNC_0(VAR_11);
 if (!VAR_9)
  return -VAR_0;

 FUNC_2();
 VAR_4 = VAR_9;
 FUNC_6();
 FUNC_4("Configured resume from disk to %u\n", VAR_4);
 VAR_3 = 0;
 FUNC_5();
 return VAR_8;
}
