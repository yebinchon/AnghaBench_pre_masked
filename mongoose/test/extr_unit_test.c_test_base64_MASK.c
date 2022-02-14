
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cases ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (unsigned char*,int,char*) ;
 int FUNC_3 (unsigned char*,int,char*) ;
 int FUNC_4 (char const*,char*) ;
 int FUNC_5 (char const*) ;

__attribute__((used)) static const char *FUNC_6(void) {
  const char *VAR_0[] = {"test", "longer string"};
  unsigned long VAR_1;
  char VAR_2[8192];
  char VAR_3[8192];

  for (VAR_1 = 0; VAR_1 < sizeof(VAR_0) / sizeof(VAR_0[0]); VAR_1++) {
    FUNC_3((unsigned char *) VAR_0[VAR_1], FUNC_5(VAR_0[VAR_1]), VAR_2);
    FUNC_2((unsigned char *) VAR_2, FUNC_5(VAR_2), VAR_3);

    FUNC_0(FUNC_4(VAR_0[VAR_1], VAR_3), 0);
  }

  FUNC_0(FUNC_2((unsigned char *) "кю", 4, VAR_3), 0);
  FUNC_0(FUNC_2((unsigned char *) "AAAA----", 8, VAR_3), 4);
  FUNC_0(FUNC_2((unsigned char *) "Q2VzYW50YQ==", 12, VAR_3), 12);
  FUNC_1(VAR_3, "Cesanta");

  return ((void*)0);
}
