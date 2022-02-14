
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct disassemble_info {int stream; int (* fprintf_func ) (int ,char*,char*,char*,scalar_t__) ;} ;
struct TYPE_8__ {TYPE_2__* cond; TYPE_1__* opcode; } ;
typedef TYPE_3__ aarch64_inst ;
struct TYPE_7__ {scalar_t__* names; } ;
struct TYPE_6__ {int flags; } ;


 unsigned int FUNC_0 (scalar_t__*) ;
 int VAR_0 ;
 int FUNC_1 (char*,TYPE_3__ const*) ;
 int FUNC_2 (int ,char*,char*,char*,scalar_t__) ;

__attribute__((used)) static void
FUNC_3 (const aarch64_inst *VAR_1, struct disassemble_info *VAR_2)
{
return;
  if (VAR_1->opcode->flags & VAR_0)
    {
      char VAR_3[8];
      unsigned int VAR_4, VAR_5;

      FUNC_1 (VAR_3, VAR_1);
      VAR_5 = FUNC_0 (VAR_1->cond->names);
      for (VAR_4 = 1; VAR_4 < VAR_5 && VAR_1->cond->names[VAR_4]; ++VAR_4)
 (*VAR_2->fprintf_func) (VAR_2->stream, "%s %s.%s",
          VAR_4 == 1 ? "  //" : ",",
          VAR_3, VAR_1->cond->names[VAR_4]);
    }
}
