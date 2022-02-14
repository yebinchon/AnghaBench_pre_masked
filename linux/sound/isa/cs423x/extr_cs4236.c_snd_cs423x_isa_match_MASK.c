
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__* VAR_3 ;
 int FUNC_0 (struct device*,char*) ;
 scalar_t__* VAR_4 ;
 int * VAR_5 ;
 scalar_t__* VAR_6 ;
 scalar_t__ FUNC_1 (unsigned int) ;
 scalar_t__* VAR_7 ;

__attribute__((used)) static int FUNC_2(struct device *VAR_8,
    unsigned int VAR_9)
{
 if (!VAR_5[VAR_9] || FUNC_1(VAR_9))
  return 0;

 if (VAR_7[VAR_9] == VAR_2) {
  FUNC_0(VAR_8, "please specify port\n");
  return 0;
 }
 if (VAR_3[VAR_9] == VAR_2) {
  FUNC_0(VAR_8, "please specify cport\n");
  return 0;
 }
 if (VAR_6[VAR_9] == VAR_1) {
  FUNC_0(VAR_8, "please specify irq\n");
  return 0;
 }
 if (VAR_4[VAR_9] == VAR_0) {
  FUNC_0(VAR_8, "please specify dma1\n");
  return 0;
 }
 return 1;
}
