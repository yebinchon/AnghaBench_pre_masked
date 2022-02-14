
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Oid ;


 int VAR_0 ;
 int VAR_1 ;






 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,char const*) ;
 char* FUNC_4 (char*) ;

__attribute__((used)) static void
FUNC_5(Oid VAR_2, const char *VAR_3)
{
 char *VAR_4;

 switch (VAR_2)
 {
  case 133:
   VAR_4 = FUNC_4("event trigger \"%s\" already exists");
   break;
  case 132:
   VAR_4 = FUNC_4("foreign-data wrapper \"%s\" already exists");
   break;
  case 131:
   VAR_4 = FUNC_4("server \"%s\" already exists");
   break;
  case 130:
   VAR_4 = FUNC_4("language \"%s\" already exists");
   break;
  case 129:
   VAR_4 = FUNC_4("publication \"%s\" already exists");
   break;
  case 128:
   VAR_4 = FUNC_4("subscription \"%s\" already exists");
   break;
  default:
   FUNC_0(VAR_1, "unsupported object class %u", VAR_2);
   break;
 }

 FUNC_1(VAR_1,
   (FUNC_2(VAR_0),
    FUNC_3(VAR_4, VAR_3)));
}
