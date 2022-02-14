
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32 ;
typedef int STREAM ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (char*,...) ;

void
FUNC_2(STREAM VAR_3)
{
 uint32 VAR_4;
 uint32 VAR_5;
 uint32 VAR_6;
 FUNC_0(VAR_3, VAR_4);
 FUNC_0(VAR_3, VAR_5);
 FUNC_0(VAR_3, VAR_6);







 if (VAR_4 == 0x07)
 {
  VAR_2 = VAR_0;
  return;
 }


 switch (VAR_4)
 {
  case 0x6:
   FUNC_1("License error alert from server: No license server\n");
   break;

  case 0x8:
   FUNC_1("License error alert from server: Invalid client\n");
   break;

  case 0x4:
  case 0xb:
  case 0xc:
  default:
   FUNC_1("License error alert from server: code %u, state transition %u\n",
    VAR_4, VAR_5);
   break;
 }


 switch (VAR_6)
 {
  default:
   break;
 }

 VAR_1 = VAR_0;
}
