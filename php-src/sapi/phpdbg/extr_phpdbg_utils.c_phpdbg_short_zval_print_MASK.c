
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zval ;
typedef int zend_string ;
struct TYPE_4__ {int kind; } ;
typedef TYPE_1__ zend_ast ;
struct TYPE_5__ {int * name; } ;
 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 int FUNC_0 (int *) ;
 int* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 TYPE_1__* FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 TYPE_2__* FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (char*) ;
 char* FUNC_11 (int ) ;
 char* FUNC_12 (char*) ;
 int FUNC_13 (char*,char*,size_t) ;
 int * FUNC_14 (int ,char*,int) ;
 int FUNC_15 (char**,int ,char*,int,...) ;
 int FUNC_16 (char*,char) ;
 size_t FUNC_17 (char*) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int *) ;

char *FUNC_21(zval *VAR_3, int VAR_4)
{
 char *VAR_5 = ((void*)0);

 switch (FUNC_9(VAR_3)) {
  case 128:
   VAR_5 = FUNC_12("");
   break;
  case 133:
   VAR_5 = FUNC_12("null");
   break;
  case 135:
   VAR_5 = FUNC_12("false");
   break;
  case 129:
   VAR_5 = FUNC_12("true");
   break;
  case 134:
   FUNC_15(&VAR_5, 0, VAR_2, FUNC_5(VAR_3));
   break;
  case 136:
   FUNC_15(&VAR_5, 0, "%.*G", 14, FUNC_4(VAR_3));


   if (FUNC_18(FUNC_4(VAR_3)) && !FUNC_16(VAR_5, '.')) {
    size_t VAR_6 = FUNC_17(VAR_5);
    char *VAR_7 = FUNC_11(VAR_6 + FUNC_17(".0") + 1);
    FUNC_13(VAR_7, VAR_5, VAR_6);
    VAR_7[VAR_6] = '.';
    VAR_7[VAR_6+1] = '0';
    VAR_7[VAR_6+2] = '\0';
    FUNC_10(VAR_5);
    VAR_5 = VAR_7;
   }
   break;
  case 130: {
   int VAR_8;
   zend_string *VAR_9 = FUNC_14(FUNC_8(VAR_3), "\\\"\n\t\0", 5);
   for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_9); VAR_8++) {
    if (FUNC_1(VAR_9)[VAR_8] < 32) {
     FUNC_1(VAR_9)[VAR_8] = ' ';
    }
   }
   FUNC_15(&VAR_5, 0, "\"%.*s\"%c",
    FUNC_0(VAR_9) <= VAR_4 - 2 ? (int) FUNC_0(VAR_9) : (VAR_4 - 3),
    FUNC_1(VAR_9), FUNC_0(VAR_9) <= VAR_4 - 2 ? 0 : '+');
   FUNC_20(VAR_9);
   } break;
  case 131:
   FUNC_15(&VAR_5, 0, "Rsrc #%d", FUNC_7(VAR_3));
   break;
  case 138:
   FUNC_15(&VAR_5, 0, "array(%d)", FUNC_19(FUNC_2(VAR_3)));
   break;
  case 132: {
   zend_string *VAR_10 = FUNC_6(VAR_3)->name;
   FUNC_15(&VAR_5, 0, "%.*s%c",
    FUNC_0(VAR_10) <= VAR_4 ? (int) FUNC_0(VAR_10) : VAR_4 - 1,
    FUNC_1(VAR_10), FUNC_0(VAR_10) <= VAR_4 ? 0 : '+');
   break;
  }
  case 137: {
   zend_ast *VAR_11 = FUNC_3(VAR_3);

   if (VAR_11->kind == VAR_0
    || VAR_11->kind == VAR_1) {
    VAR_5 = FUNC_12("<constant>");
   } else {
    VAR_5 = FUNC_12("<ast>");
   }
   break;
  }
  default:
   FUNC_15(&VAR_5, 0, "unknown type: %d", FUNC_9(VAR_3));
   break;
 }

 return VAR_5;
}
