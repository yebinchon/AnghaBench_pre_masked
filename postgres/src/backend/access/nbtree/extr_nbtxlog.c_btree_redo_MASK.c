
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;
typedef int XLogReaderState ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,int,int *) ;
 int FUNC_4 (int,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int,int *) ;
 int FUNC_8 (int,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,char*,int) ;

void
FUNC_11(XLogReaderState *VAR_2)
{
 uint8 VAR_3 = FUNC_0(VAR_2) & ~VAR_1;

 switch (VAR_3)
 {
  case 139:
   FUNC_3(1, 0, VAR_2);
   break;
  case 137:
   FUNC_3(0, 0, VAR_2);
   break;
  case 138:
   FUNC_3(0, 1, VAR_2);
   break;
  case 132:
   FUNC_7(1, VAR_2);
   break;
  case 131:
   FUNC_7(0, VAR_2);
   break;
  case 128:
   FUNC_9(VAR_2);
   break;
  case 140:
   FUNC_2(VAR_2);
   break;
  case 136:
   FUNC_4(VAR_3, VAR_2);
   break;
  case 130:
  case 129:
   FUNC_8(VAR_3, VAR_2);
   break;
  case 134:
   FUNC_5(VAR_2);
   break;
  case 133:
   FUNC_6(VAR_2);
   break;
  case 135:
   FUNC_1(VAR_2, 0);
   break;
  default:
   FUNC_10(VAR_0, "btree_redo: unknown op code %u", VAR_3);
 }
}
