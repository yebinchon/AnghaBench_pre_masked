
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char const*,...) ;

void
FUNC_4(int VAR_5, const char *VAR_6, const char *VAR_7)
{
 switch (VAR_5)
 {
  case 131:
   FUNC_0(VAR_4,
     (FUNC_1(VAR_0),
      FUNC_3("date/time field value out of range: \"%s\"",
       VAR_6)));
   break;
  case 129:

   FUNC_0(VAR_4,
     (FUNC_1(VAR_0),
      FUNC_3("date/time field value out of range: \"%s\"",
       VAR_6),
      FUNC_2("Perhaps you need a different \"datestyle\" setting.")));
   break;
  case 130:
   FUNC_0(VAR_4,
     (FUNC_1(VAR_1),
      FUNC_3("interval field value out of range: \"%s\"",
       VAR_6)));
   break;
  case 128:
   FUNC_0(VAR_4,
     (FUNC_1(VAR_3),
      FUNC_3("time zone displacement out of range: \"%s\"",
       VAR_6)));
   break;
  case 132:
  default:
   FUNC_0(VAR_4,
     (FUNC_1(VAR_2),
      FUNC_3("invalid input syntax for type %s: \"%s\"",
       VAR_7, VAR_6)));
   break;
 }
}
