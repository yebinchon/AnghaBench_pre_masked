
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {char* val; int len; } ;
typedef TYPE_1__ zend_string ;
typedef scalar_t__ ssize_t ;
typedef int php_stream ;
typedef int headerbuf ;


 char VAR_0 ;
 int VAR_1 ;
 char VAR_2 ;
 TYPE_1__* FUNC_0 () ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char*,char*) ;
 int FUNC_4 (int *) ;
 char FUNC_5 (int *) ;
 int FUNC_6 (int *,char*,int) ;
 scalar_t__ FUNC_7 (int *,char*,int) ;
 scalar_t__ FUNC_8 (char*,char*,int*) ;
 int FUNC_9 (char*,char*,int) ;
 TYPE_1__* FUNC_10 (int,int ) ;
 TYPE_1__* FUNC_11 (TYPE_1__*,int,int ) ;
 int FUNC_12 (TYPE_1__*,int ) ;

__attribute__((used)) static zend_string* FUNC_13(php_stream *VAR_3, int VAR_4, char *VAR_5)
{
 zend_string *VAR_6 = ((void*)0);
 char *VAR_7;
 int VAR_8 = VAR_4, VAR_9 = 0, VAR_10 = 0, VAR_11 = 0;

 if (!VAR_4) {
  VAR_7 = FUNC_3(VAR_5, "Connection: ");
  if (VAR_7) {
   if(!FUNC_9(VAR_7, "close", sizeof("close")-1)) VAR_8 = 1;
   FUNC_2(VAR_7);
  }
 }
 VAR_7 = FUNC_3(VAR_5, "Transfer-Encoding: ");
 if (VAR_7) {
  if(!FUNC_9(VAR_7, "chunked", sizeof("chunked")-1)) VAR_9 = 1;
  FUNC_2(VAR_7);
 }
 VAR_7 = FUNC_3(VAR_5, "Content-Length: ");
 if (VAR_7) {
  VAR_10 = FUNC_1(VAR_7);
  FUNC_2(VAR_7);
  if (!VAR_10 && !VAR_9) {

   return FUNC_0();
  }
 }

 if (VAR_9) {
  char VAR_12, VAR_13, VAR_14[8192];

  VAR_13 = VAR_0;

  while (!VAR_13) {
   int VAR_15 = 0;

   FUNC_6(VAR_3, VAR_14, sizeof(VAR_14));
   if (FUNC_8(VAR_14, "%x", &VAR_15) > 0 ) {
    if (VAR_15 > 0) {
     size_t VAR_16 = 0;

     if (VAR_11 + VAR_15 + 1 < 0) {
      if (VAR_6) {
       FUNC_12(VAR_6, 0);
      }
      return ((void*)0);
     }

     if (VAR_6) {
      VAR_6 = FUNC_11(VAR_6, VAR_11 + VAR_15, 0);
     } else {
      VAR_6 = FUNC_10(VAR_15, 0);
     }

     while (VAR_16 < VAR_15) {
      ssize_t VAR_17 = FUNC_7(VAR_3, VAR_6->val + VAR_11, VAR_15 - VAR_16);
      if (VAR_17 <= 0) {

       VAR_13 = VAR_2;
        break;
      }
      VAR_16 += VAR_17;
       VAR_11 += VAR_17;
      }


     VAR_12 = FUNC_5(VAR_3);
     if (VAR_12 == '\r') {
      VAR_12 = FUNC_5(VAR_3);
     }
     if (VAR_12 != '\n') {

      if (VAR_6) {
       FUNC_12(VAR_6, 0);
      }
      return ((void*)0);
     }
     }
   } else {

    if (VAR_6) {
     FUNC_12(VAR_6, 0);
    }
    return ((void*)0);
   }
   if (VAR_15 == 0) {
    VAR_13 = VAR_2;
   }
  }


  while (1) {
   if (!FUNC_6(VAR_3, VAR_14, sizeof(VAR_14))) {
    break;
   }

   if ((VAR_14[0] == '\r' && VAR_14[1] == '\n') ||
       (VAR_14[0] == '\n')) {

    break;
   }
  }

  if (VAR_6 == ((void*)0)) {
   return FUNC_0();
  }

 } else if (VAR_10) {
  if (VAR_10 < 0 || VAR_10 >= VAR_1) {
   return ((void*)0);
  }
  VAR_6 = FUNC_10(VAR_10, 0);
  while (VAR_11 < VAR_10) {
   ssize_t VAR_18 = FUNC_7(VAR_3, VAR_6->val + VAR_11, VAR_10 - VAR_11);
   if (VAR_18 <= 0) {
    break;
   }
   VAR_11 += VAR_18;
  }
 } else if (VAR_8) {
  do {
   ssize_t VAR_19;
   if (VAR_6) {
    VAR_6 = FUNC_11(VAR_6, VAR_11 + 4096, 0);
   } else {
    VAR_6 = FUNC_10(4096, 0);
   }
   VAR_19 = FUNC_7(VAR_3, VAR_6->val + VAR_11, 4096);
   if (VAR_19 > 0) {
    VAR_11 += VAR_19;
   }
  } while(!FUNC_4(VAR_3));
 } else {
  return ((void*)0);
 }

 VAR_6->val[VAR_11] = '\0';
 VAR_6->len = VAR_11;
 return VAR_6;
}
