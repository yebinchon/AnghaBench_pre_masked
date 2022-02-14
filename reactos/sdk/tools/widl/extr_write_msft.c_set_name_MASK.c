
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int NameOffset; } ;
struct TYPE_8__ {TYPE_2__ typelib_header; TYPE_1__* typelib; } ;
typedef TYPE_3__ msft_typelib_t ;
struct TYPE_6__ {int name; } ;


 int FUNC_0 (TYPE_3__*,int ) ;

__attribute__((used)) static void FUNC_1(msft_typelib_t *VAR_0)
{
    int VAR_1;

    VAR_1 = FUNC_0(VAR_0, VAR_0->typelib->name);
    if (VAR_1 == -1) return;
    VAR_0->typelib_header.NameOffset = VAR_1;
    return;
}
