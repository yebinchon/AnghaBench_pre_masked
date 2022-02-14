
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mg_connection {int dummy; } ;
typedef int src ;
typedef int dst ;
typedef int FILE ;







 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,unsigned long,void*,char*,char const*,char*,int) ;
 int FUNC_2 (struct mg_connection*,char*,int,int) ;
 int * FUNC_3 (char const*,char*) ;
 int FUNC_4 (int *,void const*,int) ;
 scalar_t__ FUNC_5 () ;
 int * VAR_3 ;
 int * VAR_4 ;
 scalar_t__ FUNC_6 (char const*,char*) ;

void FUNC_7(struct mg_connection *VAR_5, const char *VAR_6,
                           const void *VAR_7, int VAR_8, int VAR_9) {
  FILE *VAR_10 = ((void*)0);
  char VAR_11[60], VAR_12[60];
  const char *VAR_13 = ((void*)0);
  switch (VAR_9) {
    case 129:
      VAR_13 = "<-";
      break;
    case 128:
      VAR_13 = "->";
      break;
    case 132:
      VAR_13 = "<A";
      break;
    case 130:
      VAR_13 = "C>";
      break;
    case 131:
      VAR_13 = "XX";
      break;
  }
  if (VAR_13 == ((void*)0)) return;

  if (FUNC_6(VAR_6, "-") == 0) {
    VAR_10 = VAR_4;
  } else if (FUNC_6(VAR_6, "--") == 0) {
    VAR_10 = VAR_3;




  }
  if (VAR_10 == ((void*)0)) return;

  FUNC_2(VAR_5, VAR_11, sizeof(VAR_11),
                      VAR_0 | VAR_1);
  FUNC_2(VAR_5, VAR_12, sizeof(VAR_12), VAR_0 |
                                                VAR_1 |
                                                VAR_2);
  FUNC_1(VAR_10, "%lu %p %s %s %s %d\n", (unsigned long) FUNC_5(), (void *) VAR_5,
          VAR_11, VAR_13, VAR_12, (int) VAR_8);
  if (VAR_8 > 0) {
    FUNC_4(VAR_10, VAR_7, VAR_8);
  }
  if (VAR_10 != VAR_4 && VAR_10 != VAR_3) FUNC_0(VAR_10);
}
