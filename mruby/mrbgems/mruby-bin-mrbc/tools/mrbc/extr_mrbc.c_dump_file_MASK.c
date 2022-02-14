
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mrbc_args {char* initname; char* prog; int flags; scalar_t__ remove_lv; } ;
struct TYPE_2__ {int * irep; } ;
struct RProc {TYPE_1__ body; } ;
typedef int mrb_state ;
typedef int mrb_irep ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,char*,...) ;
 int FUNC_1 (int *,int *,int ,int *) ;
 int FUNC_2 (int *,int *,int ,int *,char*) ;
 int FUNC_3 (int *,int *) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_4(mrb_state *VAR_3, FILE *VAR_4, const char *VAR_5, struct RProc *VAR_6, struct mrbc_args *VAR_7)
{
  int VAR_8 = VAR_1;
  mrb_irep *VAR_9 = VAR_6->body.irep;

  if (VAR_7->remove_lv) {
    FUNC_3(VAR_3, VAR_9);
  }
  if (VAR_7->initname) {
    VAR_8 = FUNC_2(VAR_3, VAR_9, VAR_7->flags, VAR_4, VAR_7->initname);
    if (VAR_8 == VAR_0) {
      FUNC_0(VAR_2, "%s: invalid C language symbol name\n", VAR_7->initname);
    }
  }
  else {
    VAR_8 = FUNC_1(VAR_3, VAR_9, VAR_7->flags, VAR_4);
  }
  if (VAR_8 != VAR_1) {
    FUNC_0(VAR_2, "%s: error in mrb dump (%s) %d\n", VAR_7->prog, VAR_5, VAR_8);
  }
  return VAR_8;
}
