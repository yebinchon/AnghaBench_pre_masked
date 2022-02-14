
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int varflags; } ;
struct TYPE_8__ {int help_string_dll_offset; TYPE_2__ typelib_header; TYPE_1__* typelib; } ;
typedef TYPE_3__ msft_typelib_t ;
struct TYPE_6__ {int attrs; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,char*) ;
 char* FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(msft_typelib_t *VAR_1)
{
    char *VAR_2 = FUNC_1( VAR_1->typelib->attrs, VAR_0 );

    if (VAR_2)
    {
        int VAR_3 = FUNC_0(VAR_1, VAR_2);
        if (VAR_3 != -1)
        {
            VAR_1->help_string_dll_offset = VAR_3;
            VAR_1->typelib_header.varflags |= 0x100;
        }
    }
}
