
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*,int) ;
 char* FUNC_1 (char*) ;

__attribute__((used)) static char *FUNC_2(int VAR_0) {
 char *VAR_1;
 switch (VAR_0) {
 case 1:
  VAR_1 = "CURSOR";
  break;
 case 2:
  VAR_1 = "BITMAP";
  break;
 case 3:
  VAR_1 = "ICON";
  break;
 case 4:
  VAR_1 = "MENU";
  break;
 case 5:
  VAR_1 = "DIALOG";
  break;
 case 6:
  VAR_1 = "STRING";
  break;
 case 7:
  VAR_1 = "FONTDIR";
  break;
 case 8:
  VAR_1 = "FONT";
  break;
 case 9:
  VAR_1 = "ACCELERATOR";
  break;
 case 10:
  VAR_1 = "RCDATA";
  break;
 case 11:
  VAR_1 = "MESSAGETABLE";
  break;
 case 12:
  VAR_1 = "GROUP_CURSOR";
  break;
 case 14:
  VAR_1 = "GROUP_ICON";
  break;
 case 15:
  VAR_1 = "NAMETABLE";
  break;
 case 16:
  VAR_1 = "VERSION";
  break;
 case 17:
  VAR_1 = "DLGINCLUDE";
  break;
 case 19:
  VAR_1 = "PLUGPLAY";
  break;
 case 20:
  VAR_1 = "VXD";
  break;
 case 21:
  VAR_1 = "ANICURSOR";
  break;
 case 22:
  VAR_1 = "ANIICON";
  break;
 case 23:
  VAR_1 = "HTML";
  break;
 case 24:
  VAR_1 = "MANIFEST";
  break;
 default:
  return FUNC_0 ("UNKNOWN (%d)", VAR_0);
 }
 return FUNC_1 (VAR_1);
}
