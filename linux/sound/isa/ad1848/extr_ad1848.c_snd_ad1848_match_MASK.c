
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct device*,char*) ;
 scalar_t__* VAR_3 ;
 int * VAR_4 ;
 scalar_t__* VAR_5 ;
 scalar_t__* VAR_6 ;

__attribute__((used)) static int FUNC_1(struct device *VAR_7, unsigned int VAR_8)
{
 if (!VAR_4[VAR_8])
  return 0;

 if (VAR_6[VAR_8] == VAR_2) {
  FUNC_0(VAR_7, "please specify port\n");
  return 0;
 }
 if (VAR_5[VAR_8] == VAR_1) {
  FUNC_0(VAR_7, "please specify irq\n");
  return 0;
 }
 if (VAR_3[VAR_8] == VAR_0) {
  FUNC_0(VAR_7, "please specify dma1\n");
  return 0;
 }
 return 1;
}
