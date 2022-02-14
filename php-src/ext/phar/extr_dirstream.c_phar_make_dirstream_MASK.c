
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_1__ ;


typedef int zend_ulong ;
typedef int zend_string ;
typedef int php_stream ;
struct TYPE_12__ {scalar_t__ nNumOfElements; } ;
typedef TYPE_1__ HashTable ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t FUNC_1 (int *) ;
 char* FUNC_2 (int *) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char*,char,size_t) ;
 scalar_t__ FUNC_5 (char*,char*,size_t) ;
 int FUNC_6 (char*,char*,size_t) ;
 int FUNC_7 (TYPE_1__*,char*,size_t) ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_8 (int *,TYPE_1__*,int *,char*) ;
 scalar_t__ FUNC_9 (size_t,int,int) ;
 size_t FUNC_10 (char*) ;
 int FUNC_11 (char*,char*,size_t) ;
 scalar_t__ FUNC_12 (TYPE_1__*,int **,int *) ;
 scalar_t__ FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (TYPE_1__*,int,int *,int *,int ) ;
 int FUNC_15 (TYPE_1__*) ;
 scalar_t__ FUNC_16 (TYPE_1__*) ;
 int FUNC_17 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static php_stream *FUNC_18(char *VAR_5, HashTable *VAR_6)
{
 HashTable *VAR_7;
 size_t VAR_8 = FUNC_10(VAR_5);
 char *VAR_9, *VAR_10, *VAR_11;
 zend_string *VAR_12;
 size_t VAR_13;
 zend_ulong VAR_14;

 FUNC_0(VAR_7);
 FUNC_14(VAR_7, 64, ((void*)0), ((void*)0), 0);

 if ((*VAR_5 == '/' && VAR_8 == 1 && (VAR_6->nNumOfElements == 0)) || (VAR_8 >= sizeof(".phar")-1 && !FUNC_5(VAR_5, ".phar", sizeof(".phar")-1))) {


  FUNC_3(VAR_5);
  return FUNC_8(&VAR_4, VAR_7, ((void*)0), "r");
 }

 FUNC_15(VAR_6);

 while (VAR_0 != FUNC_13(VAR_6)) {
  if (VAR_1 == FUNC_12(VAR_6, &VAR_12, &VAR_14)) {
   break;
  }

  VAR_13 = FUNC_1(VAR_12);
  if (VAR_13 <= VAR_8) {
   if (VAR_13 == 0 || VAR_13 < VAR_8 || !FUNC_11(FUNC_2(VAR_12), VAR_5, VAR_8)) {
    if (VAR_2 != FUNC_16(VAR_6)) {
     break;
    }
    continue;
   }
  }

  if (*VAR_5 == '/') {

   if (VAR_13 >= sizeof(".phar")-1 && !FUNC_5(FUNC_2(VAR_12), ".phar", sizeof(".phar")-1)) {

    if (VAR_2 != FUNC_16(VAR_6)) {
     break;
    }
    continue;
   }

   if (((void*)0) != (VAR_10 = (char *) FUNC_4(FUNC_2(VAR_12), '/', VAR_13))) {

    VAR_9 = (char *) FUNC_9(VAR_10 - FUNC_2(VAR_12), 1, 1);
    FUNC_6(VAR_9, FUNC_2(VAR_12), VAR_10 - FUNC_2(VAR_12));
    VAR_13 = VAR_10 - FUNC_2(VAR_12);
    VAR_9[VAR_13] = '\0';
   } else {
    VAR_9 = (char *) FUNC_9(VAR_13, 1, 1);
    FUNC_6(VAR_9, FUNC_2(VAR_12), VAR_13);
    VAR_9[VAR_13] = '\0';
   }

   goto PHAR_ADD_ENTRY;
  } else {
   if (0 != FUNC_5(FUNC_2(VAR_12), VAR_5, VAR_8)) {

    if (VAR_2 != FUNC_16(VAR_6)) {
     break;
    }
    continue;
   } else {
    if (FUNC_2(VAR_12)[VAR_8] != '/') {
     if (VAR_2 != FUNC_16(VAR_6)) {
      break;
     }
     continue;
    }
   }
  }

  VAR_11 = FUNC_2(VAR_12);
  VAR_11 += VAR_8 + 1;

  if (((void*)0) != (VAR_10 = (char *) FUNC_4(VAR_11, '/', VAR_13 - VAR_8 - 1))) {

   VAR_11 -= VAR_8 + 1;
   VAR_9 = (char *) FUNC_9(VAR_10 - VAR_11 + VAR_8, 1, 1);
   FUNC_6(VAR_9, VAR_11 + VAR_8 + 1, VAR_10 - VAR_11 - VAR_8 - 1);
   VAR_13 = VAR_10 - VAR_11 - VAR_8 - 1;
   VAR_9[VAR_13] = '\0';
  } else {

   VAR_11 -= VAR_8 + 1;
   VAR_9 = (char *) FUNC_9(VAR_13 - VAR_8, 1, 1);
   FUNC_6(VAR_9, VAR_11 + VAR_8 + 1, VAR_13 - VAR_8 - 1);
   VAR_9[VAR_13 - VAR_8 - 1] = '\0';
   VAR_13 = VAR_13 - VAR_8 - 1;
  }
PHAR_ADD_ENTRY:
  if (VAR_13) {
   FUNC_7(VAR_7, VAR_9, VAR_13);
  }

  FUNC_3(VAR_9);

  if (VAR_2 != FUNC_16(VAR_6)) {
   break;
  }
 }

 if (VAR_0 != FUNC_13(VAR_7)) {
  FUNC_3(VAR_5);
  FUNC_17(VAR_7, VAR_3, 0);
  return FUNC_8(&VAR_4, VAR_7, ((void*)0), "r");
 } else {
  FUNC_3(VAR_5);
  return FUNC_8(&VAR_4, VAR_7, ((void*)0), "r");
 }
}
