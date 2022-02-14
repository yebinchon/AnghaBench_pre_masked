
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zend_string ;
struct TYPE_3__ {int * name; int constants_table; int function_table; } ;
typedef TYPE_1__ zend_class_entry ;


 int * FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 char* FUNC_2 (int *) ;
 char* FUNC_3 (char*,size_t,int*) ;
 char* FUNC_4 (char const*,size_t,int*,int *) ;
 char* FUNC_5 (char*,size_t,int*,int *) ;
 char* FUNC_6 (char const*,size_t,int*) ;
 char* FUNC_7 (char const*,size_t,int*) ;
 int VAR_0 ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*) ;
 int VAR_1 ;
 char* FUNC_10 (size_t) ;
 int FUNC_11 (char*,size_t,char*,char*,char*) ;
 int FUNC_12 (char const*) ;
 char* FUNC_13 (char const*,char*) ;
 int VAR_2 ;
 TYPE_1__* FUNC_14 (int *) ;
 int FUNC_15 (char*,char const*,size_t) ;
 char* FUNC_16 (char const*,size_t) ;
 int * FUNC_17 (size_t,int ) ;
 int FUNC_18 (int *,int ) ;

__attribute__((used)) static char *FUNC_19(const char *VAR_3, int VAR_4)
{
 char *VAR_5 = ((void*)0);
 size_t VAR_6 = FUNC_12(VAR_3);

 if (!VAR_4) {
  VAR_0 = 0;
 }
 if (VAR_3[0] == '$') {
  VAR_5 = FUNC_7(VAR_3, VAR_6, &VAR_0);
 } else if (VAR_3[0] == '#') {
  VAR_5 = FUNC_6(VAR_3, VAR_6, &VAR_0);
 } else {
  char *VAR_7, *VAR_8;
  zend_string *VAR_9 = ((void*)0);
  zend_class_entry *VAR_10 = ((void*)0);

  VAR_8 = FUNC_13(VAR_3, "::");
  if (VAR_8) {
   size_t VAR_11 = VAR_8 - VAR_3;
   VAR_9 = FUNC_17(VAR_11, 0);
   FUNC_15(FUNC_2(VAR_9), VAR_3, VAR_11);
   if ((VAR_10 = FUNC_14(VAR_9)) == ((void*)0)) {
    FUNC_18(VAR_9, 0);
    return ((void*)0);
   }
   VAR_7 = FUNC_16(VAR_8 + 2, VAR_6 - 2 - VAR_11);
   VAR_6 -= (VAR_11 + 2);
  } else {
   VAR_7 = FUNC_16(VAR_3, VAR_6);
  }

  switch (VAR_0) {
   case 0:
   case 1:
    VAR_5 = FUNC_5(VAR_7, VAR_6, &VAR_0, VAR_10 ? &VAR_10->function_table : FUNC_0(VAR_1));
    if (VAR_5) {
     break;
    }
   case 2:
   case 3:
    VAR_5 = FUNC_4(VAR_3, VAR_6, &VAR_0, VAR_10 ? &VAR_10->constants_table : FUNC_0(VAR_2));
    if (VAR_5 || VAR_10) {
     break;
    }
   case 4:
   case 5:
    VAR_5 = FUNC_3(VAR_7, VAR_6, &VAR_0);
    break;
   default:
    break;
  }
  FUNC_8(VAR_7);
  if (VAR_9) {
   FUNC_18(VAR_9, 0);
  }
  if (VAR_10 && VAR_5) {
   size_t VAR_12 = FUNC_1(VAR_10->name) + 2 + FUNC_12(VAR_5) + 1;
   char *VAR_13 = FUNC_10(VAR_12);

   FUNC_11(VAR_13, VAR_12, "%s::%s", FUNC_2(VAR_10->name), VAR_5);
   FUNC_9(VAR_5);
   VAR_5 = VAR_13;
  }
 }

 return VAR_5;
}
