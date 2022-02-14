
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int posguid; } ;
struct TYPE_12__ {TYPE_2__ typelib_header; TYPE_1__* typelib; } ;
typedef TYPE_4__ msft_typelib_t ;
struct TYPE_13__ {int hreftype; int next_hash; void* guid; } ;
struct TYPE_11__ {int member_5; int member_4; int member_3; int member_2; int member_1; int member_0; } ;
struct TYPE_9__ {int attrs; } ;
typedef TYPE_5__ MSFT_GuidEntry ;
typedef void* GUID ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*,TYPE_5__*) ;
 void* FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(msft_typelib_t *VAR_1)
{
    MSFT_GuidEntry VAR_2;
    int VAR_3;
    void *VAR_4;
    GUID VAR_5 = {0,0,0,{0,0,0,0,0,0}};

    VAR_2.guid = VAR_5;
    VAR_2.hreftype = -2;
    VAR_2.next_hash = -1;

    VAR_4 = FUNC_1( VAR_1->typelib->attrs, VAR_0 );
    if (VAR_4) VAR_2.guid = *(GUID *)VAR_4;

    VAR_3 = FUNC_0(VAR_1, &VAR_2);
    VAR_1->typelib_header.posguid = VAR_3;

    return;
}
