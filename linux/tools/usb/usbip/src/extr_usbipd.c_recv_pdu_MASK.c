
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;






 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int VAR_1 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*,int,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,int*,int*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(int VAR_2)
{
 uint16_t VAR_3 = VAR_0;
 int VAR_4;
 int VAR_5;

 VAR_4 = FUNC_5(VAR_2, &VAR_3, &VAR_5);
 if (VAR_4 < 0) {
  FUNC_0("could not receive opcode: %#0x", VAR_3);
  return -1;
 }

 VAR_4 = FUNC_6(VAR_1);
 if (VAR_4 < 0) {
  FUNC_0("could not refresh device list: %d", VAR_4);
  return -1;
 }

 FUNC_2("received request: %#0x(%d)", VAR_3, VAR_2);
 switch (VAR_3) {
 case 129:
  VAR_4 = FUNC_3(VAR_2);
  break;
 case 128:
  VAR_4 = FUNC_4(VAR_2);
  break;
 case 130:
 case 131:
 default:
  FUNC_1("received an unknown opcode: %#0x", VAR_3);
  VAR_4 = -1;
 }

 if (VAR_4 == 0)
  FUNC_2("request %#0x(%d): complete", VAR_3, VAR_2);
 else
  FUNC_2("request %#0x(%d): failed", VAR_3, VAR_2);

 return VAR_4;
}
