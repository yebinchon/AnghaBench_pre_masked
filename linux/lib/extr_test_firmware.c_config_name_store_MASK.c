
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char const*,size_t,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_3,
     struct device_attribute *VAR_4,
     const char *VAR_5, size_t VAR_6)
{
 int VAR_7;

 FUNC_2(&VAR_2);
 FUNC_1(VAR_1->name);
 VAR_7 = FUNC_0(&VAR_1->name, VAR_5, VAR_6, VAR_0);
 FUNC_3(&VAR_2);

 return VAR_7;
}
