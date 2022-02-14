
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct disassemble_info {int stream; int (* fprintf_func ) (int ,char*,int ) ;} ;
typedef int bfd_vma ;


 int FUNC_0 (int ,char*,int ) ;

__attribute__((used)) static void FUNC_1 (bfd_vma VAR_0, struct disassemble_info *VAR_1)
{
    (*VAR_1->fprintf_func) (VAR_1->stream, "0x%x", VAR_0);
}
