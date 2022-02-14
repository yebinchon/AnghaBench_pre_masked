
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;


 int FUNC_0 (char*,int) ;
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







__attribute__((used)) static u8 FUNC_1(u16 VAR_12)
{
 if (VAR_12 & VAR_8) {
  switch (VAR_12) {
  case 132:
   return VAR_1;
  case 133:
   return VAR_0;
  case 131:
   return VAR_4;
  case 130:
   return VAR_3;
  case 129:
  case 128:
   return VAR_5;
  }

  FUNC_0("Unknown advertising packet type: 0x%02x",
       VAR_12);

  return VAR_2;
 }

 if (VAR_12 & VAR_6) {
  if (VAR_12 & VAR_7)
   return VAR_0;

  return VAR_1;
 }

 if (VAR_12 & VAR_11)
  return VAR_5;

 if (VAR_12 & VAR_10)
  return VAR_4;

 if (VAR_12 == VAR_9 ||
     VAR_12 & VAR_7)
  return VAR_3;

 FUNC_0("Unknown advertising packet type: 0x%02x",
       VAR_12);

 return VAR_2;
}
