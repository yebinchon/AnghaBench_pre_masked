
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int const VAR_0 ;

__attribute__((used)) static size_t FUNC_0(const u8 *VAR_1, size_t VAR_2, size_t VAR_3)
{

 u8 VAR_4 = VAR_1[VAR_3 + 1];

 VAR_3 += 2 + VAR_4;


 if (VAR_4 < 255)
  return VAR_3;

 while (VAR_3 < VAR_2 && VAR_1[VAR_3] == VAR_0) {
  VAR_4 = VAR_1[VAR_3 + 1];
  VAR_3 += 2 + VAR_4;
 }

 return VAR_3;
}
