
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*) ;
 int FUNC_1 (int ,char*,int*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_1)
{
 int VAR_2;

 if (FUNC_1(FUNC_0(VAR_1), "test_dimm%d", &VAR_2) != 1)
  return -VAR_0;
 return VAR_2;
}
