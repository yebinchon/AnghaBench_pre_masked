
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mg_str {int p; scalar_t__ len; } ;
typedef int buf ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int * FUNC_1 (char*,int,int *) ;
 int FUNC_2 (int ,scalar_t__,int ,scalar_t__,char*,int ,int ,scalar_t__,int ,scalar_t__,int ,scalar_t__,int ,scalar_t__,char*) ;
 scalar_t__ FUNC_3 (int ,char*,int ) ;
 scalar_t__ FUNC_4 (struct mg_str*,char*) ;
 int FUNC_5 (char*,char*,char*,char*,char*) ;
 int FUNC_6 (char*) ;

int FUNC_7(struct mg_str VAR_1, struct mg_str VAR_2,
                         struct mg_str VAR_3, struct mg_str VAR_4,
                         struct mg_str VAR_5, struct mg_str VAR_6,
                         struct mg_str VAR_7, struct mg_str VAR_8,
                         struct mg_str VAR_9, FILE *VAR_10) {
  char VAR_11[128], VAR_12[sizeof(VAR_11)], VAR_13[sizeof(VAR_11)], VAR_14[sizeof(VAR_11)];
  char VAR_15[33];






  while (FUNC_1(VAR_11, sizeof(VAR_11), VAR_10) != ((void*)0)) {
    if (FUNC_5(VAR_11, "%[^:]:%[^:]:%s", VAR_12, VAR_14, VAR_13) == 3 &&
        FUNC_4(&VAR_3, VAR_12) == 0 &&
        FUNC_4(&VAR_9, VAR_14) == 0) {

      FUNC_2(VAR_1.p, VAR_1.len, VAR_2.p, VAR_2.len, VAR_13, FUNC_6(VAR_13),
                   VAR_8.p, VAR_8.len, VAR_7.p, VAR_7.len, VAR_4.p, VAR_4.len,
                   VAR_6.p, VAR_6.len, VAR_15);
      FUNC_0(VAR_0, ("%.*s %s %.*s %s", (int) VAR_3.len, VAR_3.p,
                     VAR_14, (int) VAR_5.len, VAR_5.p, VAR_15));
      return FUNC_3(VAR_5.p, VAR_15, FUNC_6(VAR_15)) == 0;
    }
  }


  return 0;
}
