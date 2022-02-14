
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int FUNC_0 (int,int,int) ;
 int FUNC_1 (int,int,int) ;

__attribute__((used)) static inline u32 FUNC_2(const void *VAR_1, u32 VAR_2, u32 VAR_3)
{
 u32 VAR_4, VAR_5, VAR_6;
 const unsigned char *VAR_7 = VAR_1;

 VAR_4 = VAR_5 = VAR_6 = VAR_0 + VAR_2 + VAR_3;

 while (VAR_2 > 12) {
  VAR_4 += *(u32 *)(VAR_7);
  VAR_5 += *(u32 *)(VAR_7 + 4);
  VAR_6 += *(u32 *)(VAR_7 + 8);
  FUNC_1(VAR_4, VAR_5, VAR_6);
  VAR_2 -= 12;
  VAR_7 += 12;
 }
 switch (VAR_2) {
 case 12: VAR_6 += (u32)VAR_7[11]<<24;
 case 11: VAR_6 += (u32)VAR_7[10]<<16;
 case 10: VAR_6 += (u32)VAR_7[9]<<8;
 case 9: VAR_6 += VAR_7[8];
 case 8: VAR_5 += (u32)VAR_7[7]<<24;
 case 7: VAR_5 += (u32)VAR_7[6]<<16;
 case 6: VAR_5 += (u32)VAR_7[5]<<8;
 case 5: VAR_5 += VAR_7[4];
 case 4: VAR_4 += (u32)VAR_7[3]<<24;
 case 3: VAR_4 += (u32)VAR_7[2]<<16;
 case 2: VAR_4 += (u32)VAR_7[1]<<8;
 case 1: VAR_4 += VAR_7[0];
   FUNC_0(VAR_4, VAR_5, VAR_6);
 case 0:
  break;
 }

 return VAR_6;
}
