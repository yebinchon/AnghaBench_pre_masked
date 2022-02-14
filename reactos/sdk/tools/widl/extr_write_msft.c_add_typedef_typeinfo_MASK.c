
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_18__ {int typelib_idx; int attrs; int name; } ;
typedef TYPE_3__ type_t ;
struct TYPE_16__ {int nrtypeinfos; } ;
struct TYPE_19__ {TYPE_1__ typelib_header; } ;
typedef TYPE_4__ msft_typelib_t ;
struct TYPE_20__ {TYPE_2__* typeinfo; } ;
typedef TYPE_5__ msft_typeinfo_t ;
struct TYPE_17__ {int datatype1; unsigned int size; int datatype2; unsigned int typekind; } ;


 int VAR_0 ;
 TYPE_5__* FUNC_0 (TYPE_4__*,int ,int ,int ) ;
 int FUNC_1 (TYPE_4__*,int ,TYPE_3__*,int*,int*) ;
 int FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 TYPE_3__* FUNC_4 (TYPE_3__*) ;
 unsigned int FUNC_5 (TYPE_3__*,unsigned int*) ;

__attribute__((used)) static void FUNC_6(msft_typelib_t *VAR_1, type_t *VAR_2)
{
    msft_typeinfo_t *VAR_3 = ((void*)0);
    int VAR_4, VAR_5, VAR_6 = 0;
    unsigned int VAR_7, VAR_8 = 0;
    type_t *VAR_9;

    if (-1 < VAR_2->typelib_idx)
        return;

    VAR_9 = FUNC_4(VAR_2);

    if (!VAR_9->name || FUNC_3(VAR_2->name, VAR_9->name) != 0)
    {
        VAR_2->typelib_idx = VAR_1->typelib_header.nrtypeinfos;
        VAR_3 = FUNC_0(VAR_1, VAR_0, VAR_2->name, VAR_2->attrs);
    }
    else
        VAR_6 = 1;

    FUNC_1(VAR_1, FUNC_2(VAR_9), VAR_9, &VAR_4, &VAR_5);
    VAR_7 = FUNC_5(VAR_9, &VAR_8);

    if (VAR_3)
    {
        VAR_3->typeinfo->datatype1 = VAR_4;
        VAR_3->typeinfo->size = VAR_7;
        VAR_3->typeinfo->datatype2 = VAR_5;
        VAR_3->typeinfo->typekind |= (VAR_8 << 11 | VAR_8 << 6);
    }


    if (VAR_6)
        VAR_2->typelib_idx = VAR_9->typelib_idx;
}
