
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct device*,char*) ;
 scalar_t__* VAR_2 ;
 int * VAR_3 ;
 scalar_t__* VAR_4 ;

__attribute__((used)) static int FUNC_1(struct device *VAR_5, unsigned int VAR_6)
{
 if (!VAR_3[VAR_6])
  return 0;
 if (VAR_4[VAR_6] == VAR_1) {
  FUNC_0(VAR_5, "please specify irq\n");
  return 0;
 }
 if (VAR_2[VAR_6] == VAR_0) {
  FUNC_0(VAR_5, "please specify dma8\n");
  return 0;
 }
 return 1;
}
