
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;
typedef int XLogReaderState ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

void
FUNC_9(XLogReaderState *VAR_3)
{
 uint8 VAR_4 = FUNC_0(VAR_3) & ~VAR_2;

 switch (VAR_4 & VAR_1)
 {
  case 135:
   FUNC_2(VAR_3);
   break;
  case 133:
   FUNC_4(VAR_3);
   break;
  case 134:
   FUNC_3(VAR_3);
   break;
  case 128:
   FUNC_8(VAR_3);
   break;
  case 131:
   FUNC_7(VAR_3);
   break;
  case 132:
   FUNC_5(VAR_3);
   break;
  case 130:





   break;
  case 129:
   FUNC_6(VAR_3);
   break;
  default:
   FUNC_1(VAR_0, "heap2_redo: unknown op code %u", VAR_4);
 }
}
