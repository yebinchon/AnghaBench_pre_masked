
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint64_t ;
struct regmap {int dummy; } ;


 unsigned int FUNC_0 (unsigned int,int ) ;
 unsigned int FUNC_1 (unsigned int,unsigned int) ;
 unsigned int FUNC_2 (struct regmap*) ;
 int FUNC_3 (struct regmap*,unsigned int,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_4(struct regmap *VAR_0, int VAR_1,
      unsigned int VAR_2,
      unsigned int VAR_3,
      unsigned int VAR_4,
      unsigned int VAR_5)
{
 uint64_t VAR_6 = VAR_1;
 unsigned int VAR_7, VAR_8, VAR_9;

 VAR_9 = FUNC_1(VAR_6, VAR_3);

 VAR_7 = VAR_6 * FUNC_2(VAR_0) + VAR_4;
 VAR_8 = VAR_5 * (VAR_3 - 1 - VAR_9);

 FUNC_3(VAR_0, VAR_7, FUNC_0(VAR_5 - 1, 0) << VAR_8,
      VAR_2 << VAR_8);
}
