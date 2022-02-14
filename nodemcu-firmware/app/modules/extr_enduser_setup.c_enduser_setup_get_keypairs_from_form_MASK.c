
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct keypairs_t {void** keypairs; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char) ;
 struct keypairs_t* FUNC_2 (int) ;
 int FUNC_3 (struct keypairs_t*) ;
 int FUNC_4 (void*,char*,size_t,size_t) ;
 int FUNC_5 (char*) ;
 void* FUNC_6 (size_t) ;
 int FUNC_7 (char*,int) ;
 int FUNC_8 (char*,char*,int) ;
 size_t FUNC_9 (char*) ;
 char* FUNC_10 (char*,char*) ;

__attribute__((used)) static struct keypairs_t *FUNC_11(char *VAR_0, int VAR_1) {
  int VAR_2 = FUNC_1(VAR_0, '&') + 1;
  int VAR_3 = FUNC_1(VAR_0, '=');

  if (VAR_2 == 1 && VAR_3 == 0) {
    FUNC_0("No keypair in form body");
    return ((void*)0);
  }

  struct keypairs_t *VAR_4 = FUNC_2(VAR_2);

  int VAR_5 = 0;
  int VAR_6;

  char *VAR_7 = FUNC_6(VAR_1+1);
  FUNC_7(VAR_7, VAR_1+1);
  FUNC_8(VAR_7, VAR_0, VAR_1);
  char *VAR_8 = FUNC_10(VAR_7, "=");

  char VAR_9 = '=';
  while (VAR_8) {
    size_t VAR_10 = FUNC_9(VAR_8);
    VAR_4->keypairs[VAR_5] = FUNC_6(VAR_10 + 1);
    VAR_6 = FUNC_4(VAR_4->keypairs[VAR_5], VAR_8, VAR_10, VAR_10 + 1);
    if (VAR_6) {
      FUNC_0("Unable to decode parameter");
      FUNC_3(VAR_4);
      FUNC_5(VAR_7);
      return ((void*)0);
    }

    VAR_5++;
    if (VAR_5 > VAR_2*2) {
      FUNC_0("Too many keypairs!");
      FUNC_3(VAR_4);
      FUNC_5(VAR_7);
      return ((void*)0);
    }

    if (VAR_9 == '=') {
      VAR_8 = FUNC_10(((void*)0), "&");
      VAR_9='&';
    } else {
      VAR_8 = FUNC_10(((void*)0), "=");
      VAR_9='=';
    }
  }
  FUNC_5(VAR_7);
  return VAR_4;
}
