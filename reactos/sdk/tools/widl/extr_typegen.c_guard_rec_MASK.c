
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int typestring_offset; int tfswrite; } ;
typedef TYPE_1__ type_t ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(type_t *VAR_1)
{



    if (VAR_1->typestring_offset)
        VAR_1->tfswrite = VAR_0;
    else
        VAR_1->typestring_offset = 1;
}
