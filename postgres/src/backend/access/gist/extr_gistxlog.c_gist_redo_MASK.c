
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;
typedef int XLogReaderState ;
typedef int MemoryContext ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;





 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int VAR_2 ;

void
FUNC_9(XLogReaderState *VAR_3)
{
 uint8 VAR_4 = FUNC_2(VAR_3) & ~VAR_1;
 MemoryContext VAR_5;







 VAR_5 = FUNC_1(VAR_2);
 switch (VAR_4)
 {
  case 128:
   FUNC_8(VAR_3);
   break;
  case 132:
   FUNC_4(VAR_3);
   break;
  case 130:
   FUNC_6(VAR_3);
   break;
  case 129:
   FUNC_7(VAR_3);
   break;
  case 131:
   FUNC_5(VAR_3);
   break;
  default:
   FUNC_3(VAR_0, "gist_redo: unknown op code %u", VAR_4);
 }

 FUNC_1(VAR_5);
 FUNC_0(VAR_2);
}
