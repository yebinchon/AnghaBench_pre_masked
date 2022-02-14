
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int stream; int (* fprintf_func ) (int ,char*,char*) ;} ;
typedef TYPE_1__ disassemble_info ;


 char** VAR_0 ;
 int FUNC_0 (int ,char*,char*) ;

__attribute__((used)) static void
FUNC_1 (unsigned VAR_1, disassemble_info *VAR_2)
{
  (*VAR_2->fprintf_func) (VAR_2->stream, "%s", VAR_1 ? VAR_0[VAR_1] : "fr0");
}
