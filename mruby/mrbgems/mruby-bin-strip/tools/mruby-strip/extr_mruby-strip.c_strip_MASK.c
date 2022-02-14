
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strip_args {int argc_start; int argc; char** argv; scalar_t__ lvar; } ;
typedef int mrb_state ;
typedef int mrb_irep ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,char*) ;
 int FUNC_2 (int ,char*,char*) ;
 int FUNC_3 (int *,int *,int ,int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int *) ;
 int * FUNC_6 (int *,int *) ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_7(mrb_state *VAR_5, struct strip_args *VAR_6)
{
  int VAR_7;

  for (VAR_7 = VAR_6->argc_start; VAR_7 < VAR_6->argc; ++VAR_7) {
    char *VAR_8;
    FILE *VAR_9;
    mrb_irep *VAR_10;
    FILE *VAR_11;
    int VAR_12;

    VAR_8 = VAR_6->argv[VAR_7];
    VAR_9 = FUNC_1(VAR_8, "rb");
    if (VAR_9 == ((void*)0)) {
      FUNC_2(VAR_4, "can't open file for reading %s\n", VAR_8);
      return VAR_0;
    }

    VAR_10 = FUNC_6(VAR_5, VAR_9);
    FUNC_0(VAR_9);
    if (VAR_10 == ((void*)0)) {
      FUNC_2(VAR_4, "can't read irep file %s\n", VAR_8);
      return VAR_0;
    }


    if (VAR_6->lvar) {
      FUNC_5(VAR_5, VAR_10);
    }

    VAR_11 = FUNC_1(VAR_8, "wb");
    if (VAR_11 == ((void*)0)) {
      FUNC_2(VAR_4, "can't open file for writing %s\n", VAR_8);
      FUNC_4(VAR_5, VAR_10);
      return VAR_0;
    }


    VAR_12 = FUNC_3(VAR_5, VAR_10, VAR_2, VAR_11);

    FUNC_0(VAR_11);
    FUNC_4(VAR_5, VAR_10);

    if (VAR_12 != VAR_3) {
      FUNC_2(VAR_4, "error occurred during dumping %s\n", VAR_8);
      return VAR_0;
    }
  }
  return VAR_1;
}
