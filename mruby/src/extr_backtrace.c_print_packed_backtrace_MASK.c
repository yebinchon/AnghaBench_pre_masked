
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct backtrace_location {char* filename; int lineno; scalar_t__ method_id; } ;
typedef int mrb_value ;
typedef int mrb_state ;
typedef int mrb_int ;
struct TYPE_2__ {scalar_t__ flags; } ;
typedef int FILE ;


 TYPE_1__* FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,char*,...) ;
 scalar_t__ FUNC_2 (int *,int ,int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 char* FUNC_5 (int *,scalar_t__) ;
 scalar_t__ FUNC_6 (struct backtrace_location const*,int) ;
 int * VAR_1 ;

__attribute__((used)) static void
FUNC_7(mrb_state *VAR_2, mrb_value VAR_3)
{
  FILE *VAR_4 = VAR_1;
  const struct backtrace_location *VAR_5;
  int VAR_6, VAR_7;
  int VAR_8 = FUNC_4(VAR_2);

  VAR_5 = (struct backtrace_location*)FUNC_2(VAR_2, VAR_3, &VAR_0);
  if (VAR_5 == ((void*)0)) return;
  VAR_6 = (mrb_int)FUNC_0(VAR_3)->flags;

  if (FUNC_6(VAR_5, VAR_6) == 0) return;
  FUNC_1(VAR_4, "trace (most recent call last):\n");
  for (VAR_7 = 0; VAR_7<VAR_6; VAR_7++) {
    const struct backtrace_location *VAR_9 = &VAR_5[VAR_6-VAR_7-1];
    if (VAR_9->filename == ((void*)0)) continue;
    FUNC_1(VAR_4, "\t[%d] %s:%d", VAR_7, VAR_9->filename, VAR_9->lineno);
    if (VAR_9->method_id != 0) {
      const char *VAR_10;

      VAR_10 = FUNC_5(VAR_2, VAR_9->method_id);
      FUNC_1(VAR_4, ":in %s", VAR_10);
      FUNC_3(VAR_2, VAR_8);
    }
    FUNC_1(VAR_4, "\n");
  }
}
