
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64 ;
typedef int uint32 ;
typedef int Datum ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int,int) ;
 int FUNC_2 (int,int,int) ;

Datum
FUNC_3(uint32 VAR_0, uint64 VAR_1)
{
 uint32 VAR_2,
    VAR_3,
    VAR_4;

 VAR_2 = VAR_3 = VAR_4 = 0x9e3779b9 + (uint32) sizeof(uint32) + 3923095;

 if (VAR_1 != 0)
 {
  VAR_2 += (uint32) (VAR_1 >> 32);
  VAR_3 += (uint32) VAR_1;
  FUNC_2(VAR_2, VAR_3, VAR_4);
 }

 VAR_2 += VAR_0;

 FUNC_1(VAR_2, VAR_3, VAR_4);


 FUNC_0(((uint64) VAR_3 << 32) | VAR_4);
}
