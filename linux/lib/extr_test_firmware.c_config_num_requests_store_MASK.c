
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int num_requests; scalar_t__ reqs; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char const*,size_t,int *) ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_3,
      struct device_attribute *VAR_4,
      const char *VAR_5, size_t VAR_6)
{
 int VAR_7;

 FUNC_0(&VAR_2);
 if (VAR_1->reqs) {
  FUNC_2("Must call release_all_firmware prior to changing config\n");
  VAR_7 = -VAR_0;
  FUNC_1(&VAR_2);
  goto out;
 }
 FUNC_1(&VAR_2);

 VAR_7 = FUNC_3(VAR_5, VAR_6,
           &VAR_1->num_requests);

out:
 return VAR_7;
}
