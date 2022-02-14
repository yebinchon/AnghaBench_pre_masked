
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ __be32 ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_0 (scalar_t__*,scalar_t__*,unsigned int) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void FUNC_1(__be32 *VAR_3, __be32 *VAR_4,
        unsigned int VAR_5)
{
 unsigned int VAR_6;
 __be32 *VAR_7, *VAR_8;


 VAR_7 = VAR_3 + VAR_0 + 1;

 VAR_8 = VAR_4;
 while (*VAR_8 != VAR_2) {
  VAR_6 = FUNC_0(VAR_7, VAR_8, VAR_5);
  VAR_8 += 2 + VAR_6 * VAR_1;
  VAR_7 += 2 + VAR_6 * VAR_1;
  VAR_5 = 0;
 }


 *VAR_7++ = VAR_2;


 *VAR_7 = VAR_2;
}
