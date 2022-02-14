
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int RSocket ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int * FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,char*,char*,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,char const*,int *) ;
 int * FUNC_7 (int) ;
 int * FUNC_8 (int *,int*) ;
 int FUNC_9 (int ,int ) ;
 char* FUNC_10 (char*,char) ;
 char* FUNC_11 (char const*) ;

__attribute__((used)) static ut8 *FUNC_12 (const char *VAR_3, int *VAR_4, int *VAR_5) {
 VAR_3 += 6;
 *VAR_4 = 404;



 if (*VAR_3 == ':') {

  RSocket *VAR_6 = FUNC_7 (0);
  if (!FUNC_6 (VAR_6, VAR_3 + 1, ((void*)0))) {
   FUNC_1 ("Cannot listen\n");
   FUNC_5 (VAR_6);
   return ((void*)0);
  }
  RSocket *VAR_7 = FUNC_3 (VAR_6);
  ut8 *VAR_8 = FUNC_8 (VAR_7, VAR_5);
  FUNC_5 (VAR_7);
  FUNC_5 (VAR_6);
  if (VAR_8) {
   *VAR_4 = 200;
   return VAR_8;
  }
 } else {

  char *VAR_9 = FUNC_11 (VAR_3);
  if (!VAR_9) {
   return ((void*)0);
  }
  char *VAR_10 = FUNC_10 (VAR_9, ':');
  if (VAR_10) {
   *VAR_10++ = 0;
   RSocket *VAR_11 = FUNC_7 (0);
   if (FUNC_4 (VAR_11, VAR_9, VAR_10, VAR_0, 0)) {
    ut8 *VAR_12 = FUNC_8 (VAR_11, VAR_5);
    if (*VAR_5 < 1) {
     FUNC_0 (VAR_12);
    } else {
     *VAR_4 = 200;
    }
    FUNC_5 (VAR_11);
    FUNC_2 (VAR_9);
    return VAR_12;
   }
   FUNC_5 (VAR_11);
  } else {
   FUNC_1 ("Missing port.\n");
  }
  FUNC_2 (VAR_9);
 }
 return ((void*)0);
}
