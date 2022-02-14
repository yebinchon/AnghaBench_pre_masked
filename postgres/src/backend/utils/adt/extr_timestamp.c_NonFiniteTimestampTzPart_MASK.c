
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef double float8 ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char*) ;
 double FUNC_3 () ;

__attribute__((used)) static float8
FUNC_4(int VAR_5, int VAR_6, char *VAR_7,
       bool VAR_8, bool VAR_9)
{
 if ((VAR_5 != VAR_4) && (VAR_5 != VAR_3))
 {
  if (VAR_9)
   FUNC_0(VAR_2,
     (FUNC_1(VAR_1),
      FUNC_2("timestamp with time zone units \"%s\" not recognized",
       VAR_7)));
  else
   FUNC_0(VAR_2,
     (FUNC_1(VAR_1),
      FUNC_2("timestamp units \"%s\" not recognized",
       VAR_7)));
 }

 switch (VAR_6)
 {

  case 139:
  case 137:
  case 133:
  case 136:
  case 143:
  case 148:
  case 135:
  case 134:
  case 129:
  case 146:
  case 142:
  case 145:
  case 132:
  case 130:
  case 131:
   return 0.0;


  case 128:
  case 147:
  case 149:
  case 138:
  case 140:
  case 141:
  case 144:
   if (VAR_8)
    return -FUNC_3();
   else
    return FUNC_3();

  default:
   if (VAR_9)
    FUNC_0(VAR_2,
      (FUNC_1(VAR_0),
       FUNC_2("timestamp with time zone units \"%s\" not supported",
        VAR_7)));
   else
    FUNC_0(VAR_2,
      (FUNC_1(VAR_0),
       FUNC_2("timestamp units \"%s\" not supported",
        VAR_7)));
   return 0.0;
 }
}
