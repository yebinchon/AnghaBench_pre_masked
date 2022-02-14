
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int JsonTokenType ;
typedef int JsonSemAction ;
typedef int JsonLexContext ;


 int VAR_0 ;

 int VAR_1 ;

 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int *) ;

void
FUNC_6(JsonLexContext *VAR_2, JsonSemAction *VAR_3)
{
 JsonTokenType VAR_4;


 FUNC_0(VAR_2);

 VAR_4 = FUNC_2(VAR_2);


 switch (VAR_4)
 {
  case 128:
   FUNC_4(VAR_2, VAR_3);
   break;
  case 129:
   FUNC_3(VAR_2, VAR_3);
   break;
  default:
   FUNC_5(VAR_2, VAR_3);
 }

 FUNC_1(VAR_0, VAR_2, VAR_1);

}
