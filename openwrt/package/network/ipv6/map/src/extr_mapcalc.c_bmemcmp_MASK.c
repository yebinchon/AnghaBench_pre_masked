
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (int const*,int const*,size_t) ;

__attribute__((used)) static int FUNC_1(const void *VAR_0, const void *VAR_1, size_t VAR_2)
{
 const uint8_t *VAR_3 = VAR_0, *VAR_4 = VAR_1;
 size_t VAR_5 = VAR_2 / 8;
 VAR_2 %= 8;

 int VAR_6 = FUNC_0(VAR_3, VAR_4, VAR_5);
 if (VAR_6 == 0 && VAR_2 > 0)
  VAR_6 = (VAR_3[VAR_5] >> (8 - VAR_2)) - (VAR_4[VAR_5] >> (8 - VAR_2));

 return VAR_6;
}
