
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct adau1373 {int regmap; } ;


 scalar_t__ FUNC_0 (unsigned int) ;
 unsigned int VAR_0 ;
 int FUNC_1 (int ,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_2(struct adau1373 *VAR_1,
 unsigned int VAR_2, uint8_t *VAR_3)
{
 unsigned int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; ++VAR_4)
  FUNC_1(VAR_1->regmap, FUNC_0(VAR_2) + VAR_4, VAR_3[VAR_4]);
}
