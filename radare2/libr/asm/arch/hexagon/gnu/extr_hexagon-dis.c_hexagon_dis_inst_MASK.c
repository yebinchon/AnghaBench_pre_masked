
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int hexagon_opcode ;
typedef int hexagon_insn ;
struct TYPE_3__ {int stream; int (* fprintf_func ) (int ,char*,char*) ;} ;
typedef TYPE_1__ disassemble_info ;
typedef int bfd_vma ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int ,int const*,char**) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (int ,char*,char*) ;

__attribute__((used)) static int
FUNC_4(
     bfd_vma VAR_1,
     hexagon_insn VAR_2,
     char *VAR_3,
     disassemble_info * VAR_4
)
{
  const hexagon_opcode *VAR_5;
  int VAR_6;
  char *VAR_7 = ((void*)0);

  VAR_6 = VAR_0;

  VAR_5 = FUNC_1(VAR_2);
  if (VAR_5) {

      if (!FUNC_0(VAR_3, VAR_2, VAR_1, VAR_5, &VAR_7)) {

        if (VAR_7) {
          (*VAR_4->fprintf_func) (VAR_4->stream, "%s", VAR_7);
          FUNC_2(VAR_3, "");
        }
      }

      return VAR_6;
  }


  FUNC_2(VAR_3, "<unknown>");
  return 4;
}
