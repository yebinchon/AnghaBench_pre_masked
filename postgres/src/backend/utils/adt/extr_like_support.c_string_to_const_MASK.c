
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Oid ;
typedef int Datum ;
typedef int Const ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 int FUNC_0 (int ,char*,int) ;
 int * FUNC_1 (int,int,int,int,int ,int,int) ;
 int FUNC_2 (char const*,int) ;

__attribute__((used)) static Const *
FUNC_3(const char *VAR_5, Oid VAR_6)
{
 Datum VAR_7 = FUNC_2(VAR_5, VAR_6);
 Oid VAR_8;
 int VAR_9;





 switch (VAR_6)
 {
  case 129:
  case 128:
  case 132:
   VAR_8 = VAR_1;
   VAR_9 = -1;
   break;

  case 130:
   VAR_8 = VAR_0;
   VAR_9 = VAR_4;
   break;

  case 131:
   VAR_8 = VAR_3;
   VAR_9 = -1;
   break;

  default:
   FUNC_0(VAR_2, "unexpected datatype in string_to_const: %u",
     VAR_6);
   return ((void*)0);
 }

 return FUNC_1(VAR_6, -1, VAR_8, VAR_9,
      VAR_7, 0, 0);
}
