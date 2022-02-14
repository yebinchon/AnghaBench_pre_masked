
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct disassemble_info {int stream; int (* fprintf_func ) (int ,char*,char*) ;int target; int (* print_address_func ) (int ,struct disassemble_info*) ;} ;
typedef int str ;
typedef int bfd_vma ;
struct TYPE_7__ {scalar_t__ type; } ;
typedef TYPE_1__ aarch64_opnd_info ;
struct TYPE_8__ {scalar_t__* operands; } ;
typedef TYPE_2__ aarch64_opcode ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int,int ,TYPE_2__ const*,TYPE_1__ const*,int,int*,int *,char**) ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (int ,struct disassemble_info*) ;
 int FUNC_3 (int ,char*,char*) ;
 int FUNC_4 (int ,char*,char*) ;

__attribute__((used)) static void
FUNC_5 (bfd_vma VAR_3, const aarch64_opcode *VAR_4,
  const aarch64_opnd_info *VAR_5, struct disassemble_info *VAR_6)
{
  int VAR_7, VAR_8, VAR_9;
  char *VAR_10 = ((void*)0);
  for (VAR_7 = 0, VAR_9 = 0; VAR_7 < VAR_0; ++VAR_7)
    {
      char VAR_11[128];





      if (VAR_4->operands[VAR_7] == VAR_1
   || VAR_5[VAR_7].type == VAR_1)
 break;


      FUNC_0 (VAR_11, sizeof (VAR_11), VAR_3, VAR_4, VAR_5, VAR_7, &VAR_8,
        &VAR_6->target, &VAR_10);


      if (VAR_11[0] != '\0')
 (*VAR_6->fprintf_func) (VAR_6->stream, "%s",
          VAR_9++ == 0 ? " " : ", ");


      if (VAR_8)
 (*VAR_6->print_address_func) (VAR_6->target, VAR_6);
      else
 (*VAR_6->fprintf_func) (VAR_6->stream, "%s", VAR_11);
    }

    if (VAR_10 && !VAR_2)
      (*VAR_6->fprintf_func) (VAR_6->stream, " ; note: %s", VAR_10);
}
