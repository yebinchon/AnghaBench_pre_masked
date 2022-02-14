
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int VAR_3 ;
 int* VAR_4 ;
 int FUNC_2 (int*,char*,int) ;
 int FUNC_3 (char*,...) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

int FUNC_4()
{
 switch(VAR_0) {
 case 129:
  VAR_3 = 1;
  VAR_1 = 1;
  VAR_6 = 3;
  break;
 case 131:
  VAR_3 = -1;
  VAR_1 = 1;
  VAR_6 = 3;
  break;
 case 128:
  VAR_3 = 1;
  VAR_1 = 0;
  VAR_6 = 4;
  break;
 case 130:


  if (!FUNC_2(VAR_4, "\x7f\x45\x4c\x46", 4)) {
   short VAR_8 = (VAR_4[0x12]<<8) + VAR_4[0x13];
   switch(VAR_8) {
   case 0x0300:
    if (VAR_2==-1)
     VAR_2 = 1;
    if (!VAR_5)
     FUNC_3("# -a x86\n");
    VAR_0 = 128;
    VAR_2 = 1;
    return 1;
   case 0x0014:
    if (VAR_2==-1)
     VAR_2 = 0;
    if (!VAR_5)
    FUNC_3("# -a ppc\n");
    VAR_0 = 129;
    return 1;
   case 0x2800:
    if (VAR_2==-1)
     VAR_2 = 1;
    if (!VAR_5)
    FUNC_3("# -a arm\n");
    VAR_0 = 131;
    return 1;
   default:
    FUNC_3("Unsupported architecture '%04x'.\n", VAR_8);
    FUNC_0(1);
   }
  } else

  if (!FUNC_2(VAR_4, "\x4d\x5a",2)) {
   unsigned short VAR_9 = VAR_4[0x3c];
   if (!FUNC_2(VAR_4+VAR_9, "PE\x00\x00",4)) {
    unsigned short VAR_10 = (VAR_4[VAR_9+4]<<8)+VAR_4[VAR_9+5];
    switch(VAR_10) {
    case 0x4c01:
     if (VAR_2==-1)
      VAR_2 = 1;
     FUNC_3("# -a x86\n");
     VAR_0 = 128;
     VAR_2 = 1;
     return 1;
    case 0xc001:
     if (VAR_2==-1)
      VAR_2 = 1;
     FUNC_3("# -a arm\n");
     VAR_0 = 131;
     VAR_2 = 1;
     return 1;
    default:
     FUNC_1(VAR_7, "Unknown architecture.\n");
     break;
    }
   }
  } else {
   FUNC_1(VAR_7, "Plz. gimmie an architecture. (xrefs -a [arch])\n");
   FUNC_0(1);
  }
 }

 return 0;
}
