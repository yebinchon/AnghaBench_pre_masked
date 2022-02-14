
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int stream; int (* fprintf_func ) (int ,char*,unsigned int) ;} ;
typedef TYPE_1__ disassemble_info ;


 unsigned int* VAR_0 ;
 int FUNC_0 (int ,char*,unsigned int) ;
 int FUNC_1 (int ,char*,unsigned int) ;

__attribute__((used)) static void
FUNC_2 (unsigned VAR_1, disassemble_info *VAR_2)
{

  if (VAR_1 < 4) {
   (*VAR_2->fprintf_func) (VAR_2->stream, "fpe%d", VAR_1 * 2 + 1);
  } else {
   (*VAR_2->fprintf_func) (VAR_2->stream, "%sR", VAR_0[VAR_1]);
  }
}
