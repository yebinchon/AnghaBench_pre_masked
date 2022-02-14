
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zend_string ;
 int FUNC_0 (int ) ;

 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;

 int VAR_3 ;
 int FUNC_2 (int ,char*,char*) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (char*,char*,char*,char*) ;
 int VAR_6 ;
 int FUNC_4 (int,int *) ;
 int FUNC_5 (int *,int,int ,int ) ;
 int VAR_7 ;
 int FUNC_6 (char const*) ;
 char* FUNC_7 () ;
 int FUNC_8 () ;
 int * FUNC_9 (char const*,int ,int ) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void FUNC_11(char *VAR_8, int VAR_9)
{



 if (VAR_5) {
  if (FUNC_1(VAR_3) & VAR_0) {
   FUNC_3("eval", "msg=\"%s\"", "%s", VAR_8);
   return;
  }

  FUNC_3("php", "msg=\"%s\"", "%s", VAR_8);

  if (FUNC_1(VAR_3) & VAR_2) {
   return;
  }

  switch (FUNC_0(VAR_4)) {
   case 135:
   case 136:
   case 137:
   case 132:
   case 134:
   case 133: {
    const char *VAR_10 = FUNC_7();
    zend_string *VAR_11 = FUNC_9(VAR_10, FUNC_6(VAR_10), 0);
    FUNC_5(VAR_11, 3, FUNC_8() - 1, FUNC_8());
    FUNC_10(VAR_11);

    if (!VAR_6) {
     return;
    }

    do {
     switch (FUNC_4(1, ((void*)0))) {
      case 130:
      case 131:
      case 128:
      case 129:
       return;
     }
    } while (!(FUNC_1(VAR_3) & VAR_1));
   }
  }
 } else {
  FUNC_2(VAR_7, "%s\n", VAR_8);
 }
}
