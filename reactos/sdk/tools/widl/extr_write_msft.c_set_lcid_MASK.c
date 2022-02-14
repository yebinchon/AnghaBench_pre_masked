
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int lcid2; int lcid; } ;
struct TYPE_9__ {TYPE_2__ typelib_header; TYPE_1__* typelib; } ;
typedef TYPE_3__ msft_typelib_t ;
struct TYPE_10__ {int cval; } ;
typedef TYPE_4__ expr_t ;
struct TYPE_7__ {int attrs; } ;


 int VAR_0 ;
 TYPE_4__* FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1(msft_typelib_t *VAR_1)
{
    const expr_t *VAR_2 = FUNC_0( VAR_1->typelib->attrs, VAR_0 );
    if(VAR_2)
    {
        VAR_1->typelib_header.lcid = VAR_2->cval;
        VAR_1->typelib_header.lcid2 = VAR_2->cval;
    }
}
