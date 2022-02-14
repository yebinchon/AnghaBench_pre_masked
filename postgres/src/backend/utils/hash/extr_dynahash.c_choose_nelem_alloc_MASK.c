
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Size ;
typedef int HASHELEMENT ;


 int FUNC_0 (int) ;

__attribute__((used)) static int
FUNC_1(Size VAR_0)
{
 int VAR_1;
 Size VAR_2;
 Size VAR_3;



 VAR_2 = FUNC_0(sizeof(HASHELEMENT)) + FUNC_0(VAR_0);
 VAR_3 = 32 * 4;
 do
 {
  VAR_3 <<= 1;
  VAR_1 = VAR_3 / VAR_2;
 } while (VAR_1 < 32);

 return VAR_1;
}
