
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct adau {scalar_t__ mclk; } ;


 int FUNC_0 (scalar_t__) ;
 struct adau* FUNC_1 (struct device*) ;

void FUNC_2(struct device *VAR_0)
{
 struct adau *VAR_1 = FUNC_1(VAR_0);

 if (VAR_1->mclk)
  FUNC_0(VAR_1->mclk);
}
