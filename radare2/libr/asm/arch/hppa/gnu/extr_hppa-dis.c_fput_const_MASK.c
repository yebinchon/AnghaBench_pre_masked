
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int stream; int (* fprintf_func ) (int ,char*,unsigned int) ;} ;
typedef TYPE_1__ disassemble_info ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*,unsigned int) ;

__attribute__((used)) static void
FUNC_2 (unsigned VAR_0, disassemble_info *VAR_1)
{
 if ((int)VAR_0 < 0) {
  (*VAR_1->fprintf_func) (VAR_1->stream, "-%x", -(int)VAR_0);
 } else {
  (*VAR_1->fprintf_func) (VAR_1->stream, "%x", VAR_0);
 }
}
