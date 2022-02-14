
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;
typedef int LPBYTE ;
typedef int DBINT ;
typedef char DBCHAR ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,int,int ,int,int ,int ,int) ;
 int FUNC_3 (char*) ;
 void* FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(int VAR_2, LPBYTE VAR_3, DBINT VAR_4, zval **VAR_5)
{
 DBCHAR *VAR_6;
 DBINT VAR_7;
 zval *VAR_8;


 VAR_7 = 32 + (2 * (VAR_4));

 switch (VAR_2) {
  case 128:
  case 129: {
   if (VAR_7 < VAR_0) {
    VAR_7 = VAR_0;
   }
   break;
  }
 }

 VAR_6 = FUNC_4(VAR_7);
 VAR_4 = FUNC_2(((void*)0), VAR_2, VAR_3, VAR_4, VAR_1, (LPBYTE) VAR_6, VAR_7);

 VAR_8 = FUNC_4(sizeof(zval));
 if (VAR_4 > 0) {




  while (VAR_4 > 0 && VAR_6[VAR_4 - 1] == ' ') {
   VAR_4--;
  }

  FUNC_1(VAR_8, VAR_6, VAR_4);
 } else {
  FUNC_0(VAR_8);
 }

 FUNC_3(VAR_6);

 *VAR_5 = VAR_8;
}
