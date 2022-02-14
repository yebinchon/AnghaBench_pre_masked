
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Oid ;


 int FUNC_0 (int ) ;

 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;





 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,char const*,int ) ;
 int FUNC_6 (int) ;
 char* FUNC_7 (char*) ;

__attribute__((used)) static void
FUNC_8(Oid VAR_2, const char *VAR_3, Oid VAR_4)
{
 char *VAR_5;

 FUNC_0(FUNC_1(VAR_4));

 switch (VAR_2)
 {
  case 133:
   FUNC_0(FUNC_1(VAR_4));
   VAR_5 = FUNC_7("conversion \"%s\" already exists in schema \"%s\"");
   break;
  case 132:
   FUNC_0(FUNC_1(VAR_4));
   VAR_5 = FUNC_7("statistics object \"%s\" already exists in schema \"%s\"");
   break;
  case 129:
   FUNC_0(FUNC_1(VAR_4));
   VAR_5 = FUNC_7("text search parser \"%s\" already exists in schema \"%s\"");
   break;
  case 130:
   FUNC_0(FUNC_1(VAR_4));
   VAR_5 = FUNC_7("text search dictionary \"%s\" already exists in schema \"%s\"");
   break;
  case 128:
   FUNC_0(FUNC_1(VAR_4));
   VAR_5 = FUNC_7("text search template \"%s\" already exists in schema \"%s\"");
   break;
  case 131:
   FUNC_0(FUNC_1(VAR_4));
   VAR_5 = FUNC_7("text search configuration \"%s\" already exists in schema \"%s\"");
   break;
  default:
   FUNC_2(VAR_1, "unsupported object class %u", VAR_2);
   break;
 }

 FUNC_3(VAR_1,
   (FUNC_4(VAR_0),
    FUNC_5(VAR_5, VAR_3, FUNC_6(VAR_4))));
}
