
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct device*,char*) ;
 int * VAR_1 ;
 scalar_t__* VAR_2 ;

__attribute__((used)) static int FUNC_1(struct device *VAR_3, unsigned int VAR_4)
{
 if (!VAR_1[VAR_4])
  return 0;

 if (VAR_2[VAR_4] == VAR_0) {
  FUNC_0(VAR_3, "please specify port\n");
  return 0;
 }
 return 1;
}
