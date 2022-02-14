
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_3__* typeinfos; } ;
typedef TYPE_2__ msft_typelib_t ;
struct TYPE_7__ {scalar_t__* var_data; scalar_t__* func_data; TYPE_1__* typeinfo; struct TYPE_7__* next_typeinfo; } ;
typedef TYPE_3__ msft_typeinfo_t ;
struct TYPE_5__ {int memoffset; int cElement; } ;



__attribute__((used)) static void FUNC_0(msft_typelib_t *VAR_0, int VAR_1)
{
    msft_typeinfo_t *VAR_2;

    for (VAR_2 = VAR_0->typeinfos; VAR_2; VAR_2 = VAR_2->next_typeinfo) {
 VAR_2->typeinfo->memoffset = VAR_1;
 if (VAR_2->func_data)
     VAR_1 += VAR_2->func_data[0] + ((VAR_2->typeinfo->cElement & 0xffff) * 12);
 if (VAR_2->var_data)
     VAR_1 += VAR_2->var_data[0] + (((VAR_2->typeinfo->cElement >> 16) & 0xffff) * 12);
        if (VAR_2->func_data || VAR_2->var_data)
            VAR_1 += 4;
    }
}
