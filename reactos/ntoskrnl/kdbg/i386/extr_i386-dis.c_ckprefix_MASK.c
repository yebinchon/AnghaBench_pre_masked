
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,int*) ;

 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int* VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int,int ) ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;

__attribute__((used)) static void
FUNC_3 (void)
{
  int VAR_19;
  VAR_15 = 0;
  VAR_14 = 0;
  VAR_18 = 0;
  VAR_16 = 0;
  while (1)
    {
      FUNC_0 (VAR_17, VAR_12 + 1);
      VAR_19 = 0;
      switch (*VAR_12)
 {

 case 0x40:
 case 0x41:
 case 0x42:
 case 0x43:
 case 0x44:
 case 0x45:
 case 0x46:
 case 0x47:
 case 0x48:
 case 0x49:
 case 0x4a:
 case 0x4b:
 case 0x4c:
 case 0x4d:
 case 0x4e:
 case 0x4f:
     if (VAR_13)
       VAR_19 = *VAR_12;
     else
       return;
   break;
 case 0xf3:
   VAR_14 |= VAR_10;
   break;
 case 0xf2:
   VAR_14 |= VAR_9;
   break;
 case 0xf0:
   VAR_14 |= VAR_8;
   break;
 case 0x2e:
   VAR_14 |= VAR_1;
   break;
 case 0x36:
   VAR_14 |= VAR_11;
   break;
 case 0x3e:
   VAR_14 |= VAR_3;
   break;
 case 0x26:
   VAR_14 |= VAR_4;
   break;
 case 0x64:
   VAR_14 |= VAR_5;
   break;
 case 0x65:
   VAR_14 |= VAR_7;
   break;
 case 0x66:
   VAR_14 |= VAR_2;
   break;
 case 0x67:
   VAR_14 |= VAR_0;
   break;
 case 128:



   if (VAR_14)
     {
       VAR_14 |= VAR_6;
       VAR_12++;
       return;
     }
   VAR_14 = VAR_6;
   break;
 default:
   return;
 }

      if (VAR_15)
 {
   FUNC_1 (FUNC_2 (VAR_15, 0));
   FUNC_1 (" ");
 }
      VAR_15 = VAR_19;
      VAR_12++;
    }
}
