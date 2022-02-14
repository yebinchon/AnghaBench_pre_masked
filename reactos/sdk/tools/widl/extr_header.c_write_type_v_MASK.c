
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_1__ ;


typedef int var_list_t ;
struct TYPE_13__ {int attrs; } ;
typedef TYPE_1__ type_t ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (char,int *) ;
 char* FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 int * FUNC_6 (TYPE_1__*) ;
 TYPE_1__* FUNC_7 (TYPE_1__*) ;
 scalar_t__ FUNC_8 (TYPE_1__*) ;
 TYPE_1__* FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (int *,int const*,int *,int ,int ) ;
 int FUNC_11 (int *,TYPE_1__*,int ,int) ;
 int FUNC_12 (int *,TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_13(FILE *VAR_6, type_t *VAR_7, int VAR_8, int VAR_9, const char *VAR_10)
{
  type_t *VAR_11 = ((void*)0);
  int VAR_12 = 0;

  if (!VAR_6) return;

  if (VAR_7) {
    for (VAR_11 = VAR_7; FUNC_4(VAR_11); VAR_11 = FUNC_9(VAR_11), VAR_12++)
      ;

    if (FUNC_8(VAR_11) == VAR_4) {
      int VAR_13;
      const char *VAR_14 = FUNC_2(VAR_11->attrs, VAR_0);
      if (!VAR_14 && VAR_5) VAR_14 = "STDMETHODCALLTYPE";
      if (FUNC_3(VAR_11->attrs, VAR_1)) FUNC_0(VAR_6, "inline ");
      FUNC_11(VAR_6, FUNC_7(VAR_11), VAR_3, VAR_9);
      FUNC_1(' ', VAR_6);
      if (VAR_12) FUNC_1('(', VAR_6);
      if (VAR_14) FUNC_0(VAR_6, "%s ", VAR_14);
      for (VAR_13 = 0; VAR_13 < VAR_12; VAR_13++)
        FUNC_1('*', VAR_6);
    } else
      FUNC_11(VAR_6, VAR_7, VAR_3, VAR_9);
  }

  if (VAR_10) FUNC_0(VAR_6, "%s%s", !VAR_7 || FUNC_5(VAR_7) ? " " : "", VAR_10 );

  if (VAR_7) {
    if (FUNC_8(VAR_11) == VAR_4) {
      const var_list_t *VAR_15 = FUNC_6(VAR_11);

      if (VAR_12) FUNC_1(')', VAR_6);
      FUNC_1('(', VAR_6);
      if (VAR_15)
          FUNC_10(VAR_6, VAR_15, ((void*)0), 0, VAR_2);
      else
          FUNC_0(VAR_6, "void");
      FUNC_1(')', VAR_6);
    } else
      FUNC_12(VAR_6, VAR_7, VAR_8);
  }
}
