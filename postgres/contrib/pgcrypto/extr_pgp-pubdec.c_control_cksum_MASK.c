
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint8 ;


 int VAR_0 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static int
FUNC_1(uint8 *VAR_1, int VAR_2)
{
 int VAR_3;
 unsigned VAR_4,
    VAR_5;

 if (VAR_2 < 3)
  return VAR_0;

 VAR_4 = 0;
 for (VAR_3 = 1; VAR_3 < VAR_2 - 2; VAR_3++)
  VAR_4 += VAR_1[VAR_3];
 VAR_4 &= 0xFFFF;
 VAR_5 = ((unsigned) (VAR_1[VAR_2 - 2]) << 8) + VAR_1[VAR_2 - 1];
 if (VAR_4 != VAR_5)
 {
  FUNC_0("pubenc cksum failed");
  return VAR_0;
 }
 return 0;
}
