
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RBinJavaObj ;
typedef int RAnal ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 () ;

__attribute__((used)) static int FUNC_4(RAnal *VAR_0, const char* VAR_1) {
 RBinJavaObj *VAR_2 = (RBinJavaObj *) FUNC_1 (VAR_0);

 if (!VAR_2) {
  FUNC_0 ("Execute \"af\" to set the current bin, and this will bind the current bin\n");
  return -1;
 }
 switch (*VAR_1) {
 case 'c':

  FUNC_3 ();
  break;
 case 'u':
  switch (*(VAR_1+1)) {
   case 't': {FUNC_2 (VAR_0, VAR_2); return 1;}
   default: break;
  }
  break;
 case 's':
  switch (*(VAR_1+1)) {

   default: break;
  }
  break;

 default: FUNC_0("Command not supported"); break;
 }
 return 0;
}
