
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

__attribute__((used)) static u32 FUNC_0(u32 VAR_13)
{
 u32 VAR_14 = VAR_13 & 0xf;
 if (VAR_13 & VAR_11)
  VAR_14 |= VAR_6 | VAR_9;
 if (VAR_13 & VAR_12)
  VAR_14 |= VAR_10 | VAR_4 | VAR_5 |
         VAR_2 | VAR_3 | VAR_9;
 if (VAR_13 & 0x10)
  VAR_14 |= VAR_7;



 if (VAR_13 & 0x20)
  VAR_14 |= VAR_8 | VAR_1;
 if (VAR_13 & 0x40)
  VAR_14 |= VAR_0;

 return VAR_14;
}
