
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ak4113 {unsigned char* regmap; int private_data; int (* write ) (int ,unsigned char,unsigned char) ;} ;


 int FUNC_0 (int ,unsigned char,unsigned char) ;

__attribute__((used)) static void FUNC_1(struct ak4113 *VAR_0, unsigned char VAR_1,
  unsigned char VAR_2)
{
 VAR_0->write(VAR_0->private_data, VAR_1, VAR_2);
 if (VAR_1 < sizeof(VAR_0->regmap))
  VAR_0->regmap[VAR_1] = VAR_2;
}
