
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int lineno; char* path; int * fp; } ;
typedef TYPE_1__ source_file ;
typedef int mrb_state ;
typedef int mrb_debug_context ;


 int * FUNC_0 (char*,char*) ;
 int FUNC_1 (TYPE_1__*,char,int) ;
 scalar_t__ FUNC_2 (int *,int) ;
 int FUNC_3 (int *,TYPE_1__*) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static source_file*
FUNC_6(mrb_state *VAR_0, mrb_debug_context *VAR_1, char *VAR_2)
{
  source_file *VAR_3;

  VAR_3 = (source_file*)FUNC_2(VAR_0, sizeof(source_file));

  FUNC_1(VAR_3, '\0', sizeof(source_file));
  VAR_3->fp = FUNC_0(VAR_2, "rb");

  if (VAR_3->fp == ((void*)0)) {
    FUNC_3(VAR_0, VAR_3);
    return ((void*)0);
  }

  VAR_3->lineno = 1;
  VAR_3->path = (char*)FUNC_2(VAR_0, FUNC_5(VAR_2) + 1);
  FUNC_4(VAR_3->path, VAR_2);
  return VAR_3;
}
