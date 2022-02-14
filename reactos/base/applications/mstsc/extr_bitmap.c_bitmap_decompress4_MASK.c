
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;
typedef int RD_BOOL ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *,int,int,int *,int) ;

__attribute__((used)) static RD_BOOL
FUNC_2(uint8 * VAR_1, int VAR_2, int VAR_3, uint8 * VAR_4, int VAR_5)
{
 int VAR_6;
 int VAR_7;
 int VAR_8;

 VAR_6 = FUNC_0(VAR_4);
 if (VAR_6 != 0x10)
 {
  return VAR_0;
 }
 VAR_8 = 1;
 VAR_7 = FUNC_1(VAR_4, VAR_2, VAR_3, VAR_1 + 3, VAR_5 - VAR_8);
 VAR_8 += VAR_7;
 VAR_4 += VAR_7;
 VAR_7 = FUNC_1(VAR_4, VAR_2, VAR_3, VAR_1 + 2, VAR_5 - VAR_8);
 VAR_8 += VAR_7;
 VAR_4 += VAR_7;
 VAR_7 = FUNC_1(VAR_4, VAR_2, VAR_3, VAR_1 + 1, VAR_5 - VAR_8);
 VAR_8 += VAR_7;
 VAR_4 += VAR_7;
 VAR_7 = FUNC_1(VAR_4, VAR_2, VAR_3, VAR_1 + 0, VAR_5 - VAR_8);
 VAR_8 += VAR_7;
 return VAR_5 == VAR_8;
}
