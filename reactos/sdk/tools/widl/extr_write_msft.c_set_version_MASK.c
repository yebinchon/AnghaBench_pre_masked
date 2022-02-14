
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int version; } ;
struct TYPE_7__ {TYPE_2__* typelib; TYPE_1__ typelib_header; } ;
typedef TYPE_3__ msft_typelib_t ;
struct TYPE_6__ {int attrs; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1(msft_typelib_t *VAR_1)
{
    VAR_1->typelib_header.version = FUNC_0( VAR_1->typelib->attrs, VAR_0 );
}
