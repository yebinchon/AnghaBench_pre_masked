
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt5677_priv {int dummy; } ;


 int FUNC_0 (struct rt5677_priv*,int,unsigned int*) ;

__attribute__((used)) static int FUNC_1(
 struct rt5677_priv *VAR_0, unsigned int VAR_1, unsigned int *VAR_2)
{
 int VAR_3 = FUNC_0(VAR_0, 0x18020000 + VAR_1 * 2,
  VAR_2);

 *VAR_2 &= 0xffff;

 return VAR_3;
}
