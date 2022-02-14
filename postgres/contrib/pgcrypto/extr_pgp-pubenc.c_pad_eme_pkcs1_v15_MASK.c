
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__*,scalar_t__*,int) ;
 int FUNC_1 (scalar_t__*,int) ;
 scalar_t__* FUNC_2 (int) ;
 int FUNC_3 (scalar_t__*) ;
 int FUNC_4 (scalar_t__*,int ,int) ;

__attribute__((used)) static int
FUNC_5(uint8 *VAR_2, int VAR_3, int VAR_4, uint8 **VAR_5)
{
 uint8 *VAR_6,
      *VAR_7;
 int VAR_8 = VAR_4 - 2 - VAR_3;

 if (VAR_8 < 8)
  return VAR_0;

 VAR_6 = FUNC_2(VAR_4);
 VAR_6[0] = 0x02;

 if (!FUNC_1(VAR_6 + 1, VAR_8))
 {
  FUNC_3(VAR_6);
  return VAR_1;
 }


 VAR_7 = VAR_6 + 1;
 while (VAR_7 < VAR_6 + 1 + VAR_8)
 {
  if (*VAR_7 == 0)
  {
   if (!FUNC_1(VAR_7, 1))
   {
    FUNC_4(VAR_6, 0, VAR_4);
    FUNC_3(VAR_6);
    return VAR_1;
   }
  }
  if (*VAR_7 != 0)
   VAR_7++;
 }

 VAR_6[VAR_8 + 1] = 0;
 FUNC_0(VAR_6 + VAR_8 + 2, VAR_2, VAR_3);
 *VAR_5 = VAR_6;

 return 0;
}
