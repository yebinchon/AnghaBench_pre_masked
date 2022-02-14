
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct module {scalar_t__ type; TYPE_5__** format_info; } ;
struct TYPE_12__ {TYPE_3__* DataDirectory; } ;
struct TYPE_14__ {TYPE_4__ OptionalHeader; } ;
struct TYPE_10__ {TYPE_1__* pe_info; } ;
struct TYPE_13__ {TYPE_2__ u; } ;
struct TYPE_11__ {int VirtualAddress; int Size; } ;
struct TYPE_9__ {int fmap; } ;
typedef TYPE_6__ IMAGE_NT_HEADERS ;
typedef int DWORD ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 char const* FUNC_0 (TYPE_6__*,void*,int ,int *) ;
 void* FUNC_1 (int *,TYPE_6__**) ;

const char* FUNC_2(struct module* VAR_3, int VAR_4, DWORD* VAR_5)
{
    IMAGE_NT_HEADERS* VAR_6;
    void* VAR_7;

    if (VAR_3->type != VAR_1 || !VAR_3->format_info[VAR_0]) return ((void*)0);
    if (VAR_4 >= VAR_2 ||
        !(VAR_7 = FUNC_1(&VAR_3->format_info[VAR_0]->u.pe_info->fmap, &VAR_6)))
        return ((void*)0);
    if (VAR_5) *VAR_5 = VAR_6->OptionalHeader.DataDirectory[VAR_4].Size;
    return FUNC_0(VAR_6, VAR_7,
                           VAR_6->OptionalHeader.DataDirectory[VAR_4].VirtualAddress, ((void*)0));
}
