
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfit_test_sec {int state; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*) ;
 struct nfit_test_sec* VAR_2 ;

__attribute__((used)) static ssize_t FUNC_1(struct device *VAR_3,
  struct device_attribute *VAR_4, const char *VAR_5, size_t VAR_6)
{
 int VAR_7 = FUNC_0(VAR_3);
 struct nfit_test_sec *VAR_8 = &VAR_2[VAR_7];

 VAR_8->state = VAR_0 | VAR_1;
 return VAR_6;
}
