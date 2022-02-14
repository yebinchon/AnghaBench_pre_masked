
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nau8540 {int dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_2(struct nau8540 *VAR_3, int VAR_4, int VAR_5)
{
 if (VAR_5 >= FUNC_0(VAR_2))
  return -VAR_1;

 if (VAR_4 * VAR_5 > VAR_0) {
  FUNC_1(VAR_3->dev, "exceed the maximum frequency of CLK_ADC\n");
  return -VAR_1;
 }

 return 0;
}
