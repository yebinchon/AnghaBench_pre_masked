
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * scheme; } ;
typedef TYPE_1__ xmlURI ;
typedef int xmlChar ;


 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,char*) ;
 scalar_t__ FUNC_2 (char*,char*,int) ;
 TYPE_1__* FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,char const*) ;
 int * FUNC_7 (int *,int *) ;

char *FUNC_8(char *VAR_0, char *VAR_1, int VAR_2 ) {
 xmlURI *VAR_3;
 xmlChar *VAR_4;
 char *VAR_5;
 int VAR_6 = 0;

 VAR_3 = FUNC_3();
 VAR_4 = FUNC_7((xmlChar *)VAR_0, (xmlChar *)":");
 FUNC_6(VAR_3, (const char *)VAR_4);
 FUNC_4(VAR_4);

 if (VAR_3->scheme != ((void*)0)) {

  if (FUNC_2(VAR_0, "file:///",8) == 0) {
   VAR_6 = 1;



   VAR_0 += 7;

  } else if (FUNC_2(VAR_0, "file://localhost/",17) == 0) {
   VAR_6 = 1;



   VAR_0 += 16;

  }
 }

 VAR_5 = VAR_0;

 if ((VAR_3->scheme == ((void*)0) || VAR_6)) {
  if (!FUNC_0(VAR_0, VAR_1) && !FUNC_1(VAR_0, VAR_1)) {
   FUNC_5(VAR_3);
   return ((void*)0);
  }
  VAR_5 = VAR_1;
 }

 FUNC_5(VAR_3);

 return VAR_5;
}
