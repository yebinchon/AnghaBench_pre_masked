
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int ut8 ;
struct TYPE_5__ {int syntax; } ;
typedef TYPE_1__ tms320_dasm_t ;


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
 scalar_t__ FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (int,int *) ;
 int FUNC_3 (int,int *) ;
 int FUNC_4 (int,int *) ;
 int FUNC_5 (int,int *) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_6 (int ,char*,char*,...) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;

void FUNC_7(tms320_dasm_t * VAR_16)
{
 ut8 VAR_17 = 0;



 if (FUNC_0 (VAR_16, VAR_11)) {
  FUNC_6 (VAR_16->syntax, "TRNx", "trn%d", FUNC_1 (VAR_16, VAR_11));
 }



 if (FUNC_0 (VAR_16, VAR_12)) {
  FUNC_6 (VAR_16->syntax, "Tx", "t%d", FUNC_1 (VAR_16, VAR_12));
 }

 if (FUNC_0 (VAR_16, VAR_10)) {
  FUNC_6 (VAR_16->syntax, "Tx", "t%d", FUNC_1 (VAR_16, VAR_10));
 }



 if (FUNC_0(VAR_16, VAR_15)) {
  FUNC_6(VAR_16->syntax, "BitIn", "%s", FUNC_4(FUNC_1(VAR_16, VAR_15) >> 1, ((void*)0)));
  FUNC_6(VAR_16->syntax, "BitOut", "%s", FUNC_4(FUNC_1(VAR_16, VAR_15) >> 0, ((void*)0)));
 }



 if (FUNC_0 (VAR_16, VAR_13)) {
  FUNC_6 (VAR_16->syntax, "TCx", "%s", FUNC_3 (FUNC_1 (VAR_16, VAR_13), ((void*)0)));
 }

 if (FUNC_0(VAR_16, VAR_14)) {
  FUNC_6(VAR_16->syntax, "TCx", "%s", FUNC_3(FUNC_1(VAR_16, VAR_14) >> 0, ((void*)0)));
  FUNC_6(VAR_16->syntax, "TCy", "%s", FUNC_3(FUNC_1(VAR_16, VAR_14) >> 1, ((void*)0)));
 }



 if (FUNC_0(VAR_16, VAR_9)) {
  FUNC_6(VAR_16->syntax, "xsrc", "%s", FUNC_5(FUNC_1(VAR_16, VAR_9), ((void*)0)));
  FUNC_6(VAR_16->syntax, "XAsrc", "%s", FUNC_5(FUNC_1(VAR_16, VAR_9), ((void*)0)));
 }

 if (FUNC_0(VAR_16, VAR_8)) {
  FUNC_6(VAR_16->syntax, "xdst", "%s", FUNC_5(FUNC_1(VAR_16, VAR_8), ((void*)0)));
  FUNC_6(VAR_16->syntax, "XAdst", "%s", FUNC_5(FUNC_1(VAR_16, VAR_8), ((void*)0)));
 }



 if (FUNC_0(VAR_16, VAR_3) && FUNC_0(VAR_16, VAR_2)) {
  if (FUNC_1 (VAR_16, VAR_3) == FUNC_1 (VAR_16, VAR_2)) {
   FUNC_6 (VAR_16->syntax, "[src,] dst", "dst");
  } else {
   FUNC_6 (VAR_16->syntax, "[src,] dst", "src, dst");
  }
 }

 if (FUNC_0(VAR_16, VAR_3) && FUNC_0(VAR_16, VAR_2)) {
  FUNC_6(VAR_16->syntax, "src1", "%s", FUNC_2(FUNC_1(VAR_16, VAR_3), ((void*)0)));
  FUNC_6(VAR_16->syntax, "src2", "%s", FUNC_2(FUNC_1(VAR_16, VAR_2), ((void*)0)));

  FUNC_6(VAR_16->syntax, "dst1", "%s", FUNC_2(FUNC_1(VAR_16, VAR_3), ((void*)0)));
  FUNC_6(VAR_16->syntax, "dst2", "%s", FUNC_2(FUNC_1(VAR_16, VAR_2), ((void*)0)));
 }


 VAR_17 &= 0;
 VAR_17 |= FUNC_0(VAR_16, VAR_3) ? 0x01 : 0x00;
 VAR_17 |= FUNC_0(VAR_16, VAR_2) ? 0x02 : 0x00;

 switch (VAR_17) {
 case 0x01:
  FUNC_6(VAR_16->syntax, "TAx", "%s", FUNC_2(FUNC_1(VAR_16, VAR_3), ((void*)0)));
  break;
 case 0x02:
  FUNC_6(VAR_16->syntax, "TAx", "%s", FUNC_2(FUNC_1(VAR_16, VAR_2), ((void*)0)));
  FUNC_6(VAR_16->syntax, "TAy", "%s", FUNC_2(FUNC_1(VAR_16, VAR_2), ((void*)0)));
  break;
 case 0x03:
  FUNC_6(VAR_16->syntax, "TAx", "%s", FUNC_2(FUNC_1(VAR_16, VAR_3), ((void*)0)));
  FUNC_6(VAR_16->syntax, "TAy", "%s", FUNC_2(FUNC_1(VAR_16, VAR_2), ((void*)0)));
  break;
 }

 if (FUNC_0(VAR_16, VAR_3)) {
  FUNC_6(VAR_16->syntax, "src", "%s", FUNC_2(FUNC_1(VAR_16, VAR_3), ((void*)0)));
 }

 if (FUNC_0(VAR_16, VAR_2)) {
  FUNC_6(VAR_16->syntax, "dst", "%s", FUNC_2(FUNC_1(VAR_16, VAR_2), ((void*)0)));
 }

 if (FUNC_0 (VAR_16, VAR_7)) {
  FUNC_6 (VAR_16->syntax, "XACsrc", "%s", FUNC_5 (FUNC_1 (VAR_16, VAR_7), ((void*)0)));
 }

 if (FUNC_0 (VAR_16, VAR_6)) {
  FUNC_6 (VAR_16->syntax, "XACdst", "%s", FUNC_5 (FUNC_1 (VAR_16, VAR_6), ((void*)0)));
 }



 VAR_17 &= 0;
 VAR_17 |= FUNC_0(VAR_16, VAR_4) ? 0x01 : 0x00;
 VAR_17 |= FUNC_0(VAR_16, VAR_5) ? 0x02 : 0x00;
 VAR_17 |= FUNC_0(VAR_16, VAR_0) ? 0x10 : 0x00;
 VAR_17 |= FUNC_0(VAR_16, VAR_1) ? 0x20 : 0x00;

 switch (VAR_17) {
 case 0x01:
  FUNC_6(VAR_16->syntax, "ACx", "ac%d", FUNC_1(VAR_16, VAR_4));
  break;
 case 0x03:
  FUNC_6(VAR_16->syntax, "ACx", "ac%d", FUNC_1(VAR_16, VAR_4));
  FUNC_6(VAR_16->syntax, "ACy", "ac%d", FUNC_1(VAR_16, VAR_5));
  break;
 case 0x11:
  if (FUNC_1(VAR_16, VAR_4) == FUNC_1(VAR_16, VAR_0)) {
   FUNC_6(VAR_16->syntax, "[, ACy]", "");
   FUNC_6(VAR_16->syntax, "[ACx,] ACy", "ACy");
  } else {
   FUNC_6(VAR_16->syntax, "[, ACy]", ", ACy");
   FUNC_6(VAR_16->syntax, "[ACx,] ACy", "ACx, ACy");
  }
  FUNC_6(VAR_16->syntax, "ACx", "ac%d", FUNC_1(VAR_16, VAR_4));
  FUNC_6(VAR_16->syntax, "ACy", "ac%d", FUNC_1(VAR_16, VAR_0));
  break;
 case 0x33:
  FUNC_6(VAR_16->syntax, "ACx", "ac%d", FUNC_1(VAR_16, VAR_4));
  FUNC_6(VAR_16->syntax, "ACy", "ac%d", FUNC_1(VAR_16, VAR_5));
  FUNC_6(VAR_16->syntax, "ACz", "ac%d", FUNC_1(VAR_16, VAR_0));
  FUNC_6(VAR_16->syntax, "ACw", "ac%d", FUNC_1(VAR_16, VAR_1));
  break;
 case 0x10:
  FUNC_6(VAR_16->syntax, "ACx", "ac%d", FUNC_1(VAR_16, VAR_0));
  break;
 case 0x30:
  FUNC_6(VAR_16->syntax, "ACx", "ac%d", FUNC_1(VAR_16, VAR_0));
  FUNC_6(VAR_16->syntax, "ACy", "ac%d", FUNC_1(VAR_16, VAR_1));
  break;
 }
}
