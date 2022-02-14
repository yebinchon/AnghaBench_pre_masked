
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adau {int regmap; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int ,unsigned int,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_1(struct adau *VAR_1, unsigned int VAR_2,
 bool VAR_3)
{
 unsigned int VAR_4;

 if (VAR_3)
  VAR_4 = VAR_0;
 else
  VAR_4 = 0;

 return FUNC_0(VAR_1->regmap, VAR_2,
  VAR_0, VAR_4);
}
