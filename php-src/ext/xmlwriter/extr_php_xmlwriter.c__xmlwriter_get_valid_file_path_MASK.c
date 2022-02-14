
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int zend_stat_t ;
struct TYPE_5__ {int * scheme; } ;
typedef TYPE_1__ xmlURI ;
typedef int xmlChar ;


 int VAR_0 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,char*,int ) ;
 size_t FUNC_3 (char*,int ) ;
 scalar_t__ FUNC_4 (char*,int *) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (char*,char*,int) ;
 TYPE_1__* FUNC_7 () ;
 int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*,char*) ;
 int * FUNC_11 (int *,int *) ;

__attribute__((used)) static char *FUNC_12(char *VAR_1, char *VAR_2, int VAR_3 ) {
 xmlURI *VAR_4;
 xmlChar *VAR_5;
 char *VAR_6;
 int VAR_7 = 0;

 VAR_4 = FUNC_7();
 VAR_5 = FUNC_11((xmlChar *)VAR_1, (xmlChar *) ":");
 FUNC_10(VAR_4, (char *)VAR_5);
 FUNC_8(VAR_5);

 if (VAR_4->scheme != ((void*)0)) {

  if (FUNC_6(VAR_1, "file:///", 8) == 0) {
   if (VAR_1[sizeof("file:///") - 1] == '\0') {
    FUNC_9(VAR_4);
    return ((void*)0);
   }
   VAR_7 = 1;



   VAR_1 += 7;

  } else if (FUNC_6(VAR_1, "file://localhost/",17) == 0) {
   if (VAR_1[sizeof("file://localhost/") - 1] == '\0') {
    FUNC_9(VAR_4);
    return ((void*)0);
   }

   VAR_7 = 1;



   VAR_1 += 16;

  }
 }

 if ((VAR_4->scheme == ((void*)0) || VAR_7)) {
  char VAR_8[VAR_0];
  size_t VAR_9;

  if (!FUNC_0(VAR_1, VAR_2) && !FUNC_1(VAR_1, VAR_2)) {
   FUNC_9(VAR_4);
   return ((void*)0);
  }

  FUNC_2(VAR_8, VAR_1, FUNC_5(VAR_1));
  VAR_9 = FUNC_3(VAR_8, FUNC_5(VAR_1));

  if (VAR_9 > 0) {
   zend_stat_t VAR_10;
   if (FUNC_4(VAR_8, &VAR_10) != 0) {
    FUNC_9(VAR_4);
    return ((void*)0);
   }
  }

  VAR_6 = VAR_2;
 } else {
  VAR_6 = VAR_1;
 }

 FUNC_9(VAR_4);

 return VAR_6;
}
