
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UInt32 ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(UInt32 *VAR_0, const UInt32 *VAR_1)
{
  UInt32 VAR_2[16];
  unsigned VAR_3;
  UInt32 VAR_4[8];
  for (VAR_3 = 0; VAR_3 < 8; VAR_3++)
    VAR_4[VAR_3] = VAR_0[VAR_3];


  for (VAR_3 = 0; VAR_3 < 64; VAR_3 += 16)
  {



    unsigned VAR_5;
    for (VAR_5 = 0; VAR_5 < 16; VAR_5++) { FUNC_0(VAR_5); }

  }
  for (VAR_3 = 0; VAR_3 < 8; VAR_3++)
    VAR_0[VAR_3] += VAR_4[VAR_3];





}
