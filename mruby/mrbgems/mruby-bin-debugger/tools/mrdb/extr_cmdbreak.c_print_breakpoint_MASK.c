
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int method_name; int * class_name; } ;
struct TYPE_6__ {int lineno; int * file; } ;
struct TYPE_8__ {TYPE_2__ methodpoint; TYPE_1__ linepoint; } ;
struct TYPE_9__ {scalar_t__ type; size_t enable; TYPE_3__ point; int bpno; } ;
typedef TYPE_4__ mrb_debug_breakpoint ;


 char const* VAR_0 ;
 char const* VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 char* VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (char*,int ,char const*,int *,...) ;

__attribute__((used)) static void
FUNC_1(mrb_debug_breakpoint *VAR_6)
{
  const char* VAR_7[] = {VAR_0, VAR_1};

  if (VAR_6->type == VAR_5) {
    FUNC_0(VAR_2,
      VAR_6->bpno, VAR_7[VAR_6->enable], VAR_6->point.linepoint.file, VAR_6->point.linepoint.lineno);
  }
  else {
    if (VAR_6->point.methodpoint.class_name == ((void*)0)) {
      FUNC_0(VAR_4,
        VAR_6->bpno, VAR_7[VAR_6->enable], &VAR_6->point.methodpoint.method_name);
    }
    else {
      FUNC_0(VAR_3,
        VAR_6->bpno, VAR_7[VAR_6->enable], VAR_6->point.methodpoint.class_name, VAR_6->point.methodpoint.method_name);
    }
  }
}
