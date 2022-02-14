
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * fp; struct TYPE_4__* path; } ;
typedef TYPE_1__ source_file ;
typedef int mrb_state ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_2(mrb_state *VAR_0, source_file *VAR_1)
{
  if (VAR_1 != ((void*)0)) {
    if (VAR_1->path != ((void*)0)) {
      FUNC_1(VAR_0, VAR_1->path);
    }
    if (VAR_1->fp != ((void*)0)) {
      FUNC_0(VAR_1->fp);
      VAR_1->fp = ((void*)0);
    }
    FUNC_1(VAR_0, VAR_1);
  }
}
