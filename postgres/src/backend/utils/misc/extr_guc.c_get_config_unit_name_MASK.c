
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xbuf ;
typedef int bbuf ;


 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;



 int VAR_3 ;

 int VAR_4 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (char*,int,char*,int) ;

__attribute__((used)) static const char *
FUNC_2(int VAR_5)
{
 switch (VAR_5 & (VAR_2 | VAR_3))
 {
  case 0:
   return ((void*)0);
  case 134:
   return "B";
  case 133:
   return "kB";
  case 132:
   return "MB";
  case 135:
   {
    static char VAR_6[8];


    if (VAR_6[0] == '\0')
     FUNC_1(VAR_6, sizeof(VAR_6), "%dkB", VAR_0 / 1024);
    return VAR_6;
   }
  case 128:
   {
    static char VAR_7[8];


    if (VAR_7[0] == '\0')
     FUNC_1(VAR_7, sizeof(VAR_7), "%dkB", VAR_4 / 1024);
    return VAR_7;
   }
  case 130:
   return "ms";
  case 129:
   return "s";
  case 131:
   return "min";
  default:
   FUNC_0(VAR_1, "unrecognized GUC units value: %d",
     VAR_5 & (VAR_2 | VAR_3));
   return ((void*)0);
 }
}
