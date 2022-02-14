
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int nrtypeinfos; } ;
struct TYPE_7__ {int* typelib_typeinfo_offsets; TYPE_1__ typelib_header; scalar_t__* typelib_segment_data; } ;
typedef TYPE_2__ msft_typelib_t ;
struct TYPE_8__ {int typekind; int memoffset; int res3; int res4; int posguid; int NameOffset; int docstringoffs; int oCustData; int datatype1; int res19; scalar_t__ res18; scalar_t__ datatype2; scalar_t__ size; scalar_t__ cImplTypes; scalar_t__ cbSizeVft; scalar_t__ helpcontext; scalar_t__ helpstringcontext; scalar_t__ version; scalar_t__ flags; scalar_t__ resA; scalar_t__ res9; scalar_t__ res8; scalar_t__ res7; scalar_t__ cElement; scalar_t__ res5; scalar_t__ res2; } ;
typedef TYPE_3__ MSFT_TypeInfoBase ;


 size_t VAR_0 ;
 int FUNC_0 (TYPE_2__*,size_t,int,int ) ;

__attribute__((used)) static int FUNC_1(
 msft_typelib_t *VAR_1,
 int VAR_2)
{
    int VAR_3;
    MSFT_TypeInfoBase *VAR_4;

    VAR_3 = FUNC_0(VAR_1, VAR_0, sizeof(MSFT_TypeInfoBase), 0);

    VAR_1->typelib_typeinfo_offsets[VAR_1->typelib_header.nrtypeinfos++] = VAR_3;

    VAR_4 = (void *)(VAR_1->typelib_segment_data[VAR_0] + VAR_3);

    VAR_4->typekind = (VAR_1->typelib_header.nrtypeinfos - 1) << 16;
    VAR_4->memoffset = -1;
    VAR_4->res2 = 0;
    VAR_4->res3 = -1;
    VAR_4->res4 = 3;
    VAR_4->res5 = 0;
    VAR_4->cElement = 0;
    VAR_4->res7 = 0;
    VAR_4->res8 = 0;
    VAR_4->res9 = 0;
    VAR_4->resA = 0;
    VAR_4->posguid = -1;
    VAR_4->flags = 0;
    VAR_4->NameOffset = VAR_2;
    VAR_4->version = 0;
    VAR_4->docstringoffs = -1;
    VAR_4->helpstringcontext = 0;
    VAR_4->helpcontext = 0;
    VAR_4->oCustData = -1;
    VAR_4->cbSizeVft = 0;
    VAR_4->cImplTypes = 0;
    VAR_4->size = 0;
    VAR_4->datatype1 = -1;
    VAR_4->datatype2 = 0;
    VAR_4->res18 = 0;
    VAR_4->res19 = -1;

    return VAR_3;
}
