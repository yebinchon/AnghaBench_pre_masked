
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;
typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int ,int) ;
 int* VAR_12 ;

uint32_t FUNC_2(uint8 VAR_13, uint32_t VAR_14)
{
 uint32_t VAR_15;

 if (VAR_13 > 1) return 0;
 VAR_15 = VAR_12[VAR_13];

 if (VAR_14 > 1) {
  uint8 VAR_16, VAR_17;
  VAR_16 = (VAR_14 / 40) ? (VAR_14 / 40) : 1;
  VAR_17 = VAR_14 / VAR_16;
  FUNC_1(FUNC_0(VAR_13),
          (((VAR_16 - 1) & VAR_7) << VAR_8) |
          (((VAR_17 - 1) & VAR_5) << VAR_6) |
          ((((VAR_17 + 1) / 2 - 1) & VAR_1) << VAR_2) |
          (((VAR_17 - 1) & VAR_3) << VAR_4));
 } else {
  FUNC_1(FUNC_0(VAR_13), VAR_9);
 }

 if(VAR_13==VAR_11){
  FUNC_1(VAR_0, 0x005 | (VAR_14 <= 1 ? 0x100 : 0));
 }
 else if(VAR_13==VAR_10){
  FUNC_1(VAR_0, 0x105 | (VAR_14 <= 1 ? 0x200 : 0));
 }

 VAR_12[VAR_13] = VAR_14;

 return VAR_15;
}
