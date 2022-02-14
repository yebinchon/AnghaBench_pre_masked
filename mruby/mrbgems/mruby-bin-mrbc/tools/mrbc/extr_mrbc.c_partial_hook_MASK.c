
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mrbc_args {scalar_t__ idx; scalar_t__ argc; char** argv; char* prog; } ;
struct mrb_parser_state {int * f; TYPE_1__* cxt; } ;
struct TYPE_2__ {scalar_t__ partial_data; } ;
typedef TYPE_1__ mrbc_context ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*,char*) ;
 int FUNC_2 (int ,char*,char*,char const*) ;
 int FUNC_3 (struct mrb_parser_state*,char const*) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_4(struct mrb_parser_state *VAR_1)
{
  mrbc_context *VAR_2 = VAR_1->cxt;
  struct mrbc_args *VAR_3 = (struct mrbc_args *)VAR_2->partial_data;
  const char *VAR_4;

  if (VAR_1->f) FUNC_0(VAR_1->f);
  if (VAR_3->idx >= VAR_3->argc) {
    VAR_1->f = ((void*)0);
    return -1;
  }
  VAR_4 = VAR_3->argv[VAR_3->idx++];
  VAR_1->f = FUNC_1(VAR_4, "r");
  if (VAR_1->f == ((void*)0)) {
    FUNC_2(VAR_0, "%s: cannot open program file. (%s)\n", VAR_3->prog, VAR_4);
    return -1;
  }
  FUNC_3(VAR_1, VAR_4);
  return 0;
}
