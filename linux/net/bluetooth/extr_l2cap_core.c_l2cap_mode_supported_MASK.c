
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int __u8 ;
typedef int __u32 ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static inline int FUNC_0(__u8 VAR_4, __u32 VAR_5)
{
 u32 VAR_6 = VAR_3;
 if (!VAR_2)
  VAR_6 |= VAR_0 | VAR_1;

 switch (VAR_4) {
 case 129:
  return VAR_0 & VAR_5 & VAR_6;
 case 128:
  return VAR_1 & VAR_5 & VAR_6;
 default:
  return 0x00;
 }
}
