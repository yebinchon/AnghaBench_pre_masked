
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int RSocket ;


 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (char const*) ;
 char* FUNC_2 (int,int) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (int) ;
 int FUNC_5 (char*,char*,int) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int *,int) ;
 char* FUNC_9 (char*,char*) ;

__attribute__((used)) static char *FUNC_10 (RSocket *VAR_0, int *VAR_1, int *VAR_2) {
 FUNC_6 (VAR_0, ((void*)0));
 const char *VAR_3;
 int VAR_4, VAR_5 = 0, VAR_6 = 32768, VAR_7 = 0;
 char *VAR_8, *VAR_9 = FUNC_2 (1, VAR_6 + 32);
 if (!VAR_9) {
  return ((void*)0);
 }
 char *VAR_10 = ((void*)0);
 int VAR_11 = FUNC_0 (VAR_0, (ut8*)VAR_9, VAR_6);
 if ((VAR_8 = (char*)FUNC_9 (VAR_9, "\n\n"))) {
  VAR_7 += 2;
 } else if ((VAR_8 = (char*)FUNC_9 (VAR_9, "\r\n\r\n"))) {
  VAR_7 += 4;
 } else {
  goto fail;
 }

 VAR_11 -= VAR_7;
 *VAR_8 = 0;

 VAR_3 = FUNC_9 (VAR_9, "Content-Length: ");
 if (VAR_3) {
  VAR_5 = FUNC_1 (VAR_3 + 16);
 } else {
  VAR_5 = VAR_11 - (VAR_8 - VAR_9);
 }
 if (VAR_5 > 0) {
  if (VAR_5 > VAR_11) {
   VAR_10 = FUNC_4 (VAR_5 + 2);
   FUNC_5 (VAR_10, VAR_8 + VAR_7, VAR_11);
   do {
    VAR_4 = FUNC_8 (VAR_0, (ut8*) VAR_10 + VAR_11, VAR_5 - VAR_11);
    if (VAR_4 < 1) {
     break;
    }
    VAR_11 += VAR_4;
   } while (VAR_11 < VAR_5);
   VAR_10[VAR_5] = 0;
  } else {
   VAR_10 = FUNC_4 (VAR_5 + 1);
   if (VAR_10) {
    FUNC_5 (VAR_10, VAR_8 + VAR_7, VAR_5);
    VAR_10[VAR_5] = 0;
   }
  }
 } else {
  VAR_10 = ((void*)0);
 }
fail:
 FUNC_3 (VAR_9);

 FUNC_7 (VAR_0);
 if (VAR_2) {
  *VAR_2 = VAR_5;
 }
 return VAR_10;
}
