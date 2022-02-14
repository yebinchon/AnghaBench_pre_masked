
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int __u8 ;
typedef int __u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

void FUNC_0(__u16 VAR_6, __u8 *VAR_7)
{
 u8 VAR_8 = *VAR_7;

 if (VAR_6 & VAR_3)
  VAR_8 |= VAR_0;

 if (VAR_6 & VAR_5)
  VAR_8 |= VAR_2;

 if (VAR_6 & VAR_4)
  VAR_8 |= VAR_1;

 *VAR_7 = VAR_8;
}
