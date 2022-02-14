
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adau1977 {unsigned int sysclk; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct adau1977 *VAR_1, unsigned int VAR_2,
 unsigned int VAR_3)
{
 unsigned int VAR_4;







 VAR_2 *= 512 >> VAR_3;

 if (VAR_1->sysclk % VAR_2 != 0)
  return -VAR_0;

 VAR_4 = VAR_1->sysclk / VAR_2;


 if (VAR_4 < 1 || VAR_4 > 6 || VAR_4 == 5)
  return -VAR_0;

 VAR_4 = VAR_4 - 1;
 if (VAR_4 == 5)
  VAR_4 = 4;

 return VAR_4;
}
