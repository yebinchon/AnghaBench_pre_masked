
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_9__ ;
typedef struct TYPE_27__ TYPE_8__ ;
typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_10__ ;


struct TYPE_21__ {scalar_t__ data; } ;
struct TYPE_27__ {TYPE_2__ name_seg; } ;
typedef TYPE_8__ WMSFT_TLBFile ;
struct TYPE_28__ {int typekind; int res4; int cElement; int posguid; int flags; int NameOffset; int version; int docstringoffs; scalar_t__ cImplTypes; int datatype1; int datatype2; int res19; scalar_t__ res18; int size; int cbSizeVft; int oCustData; int helpcontext; int helpstringcontext; scalar_t__ resA; scalar_t__ res9; scalar_t__ res8; scalar_t__ res7; scalar_t__ res5; scalar_t__ res3; scalar_t__ res2; int memoffset; } ;
struct TYPE_26__ {int hRef; } ;
struct TYPE_25__ {int wTypeFlags; int typekind; int cbAlignment; int cVars; int cFuncs; int wMinorVerNum; int wMajorVerNum; scalar_t__ cImplTypes; int cbSizeInstance; int cbSizeVft; } ;
struct TYPE_24__ {int offset; } ;
struct TYPE_23__ {int offset; } ;
struct TYPE_22__ {int offset; } ;
struct TYPE_20__ {int offset; } ;
struct TYPE_19__ {TYPE_7__* impltypes; TYPE_6__ typeattr; TYPE_5__* DllName; int tdescAlias; int pcustdata_list; int dwHelpContext; int dwHelpStringContext; TYPE_4__* DocString; int hreftype; TYPE_3__* Name; TYPE_1__* guid; } ;
typedef TYPE_9__ MSFT_TypeInfoBase ;
typedef TYPE_10__ ITypeInfoImpl ;
typedef int INT16 ;
typedef int HREFTYPE ;
typedef int DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,TYPE_8__*,int *,int *) ;
 int FUNC_1 (int ,TYPE_8__*) ;
 int FUNC_2 (TYPE_10__*,TYPE_8__*) ;
 int FUNC_3 (TYPE_10__*,TYPE_8__*) ;

__attribute__((used)) static DWORD FUNC_4(ITypeInfoImpl *VAR_5, INT16 VAR_6, WMSFT_TLBFile *VAR_7, char *VAR_8)
{
    DWORD VAR_9;

    VAR_9 = sizeof(MSFT_TypeInfoBase);

    if(VAR_8){
        MSFT_TypeInfoBase *VAR_10 = (MSFT_TypeInfoBase*)VAR_8;
        if(VAR_5->typeattr.wTypeFlags & VAR_4)
            VAR_10->typekind = VAR_2;
        else
            VAR_10->typekind = VAR_5->typeattr.typekind;
        VAR_10->typekind |= VAR_6 << 16;
        VAR_10->typekind |= (VAR_5->typeattr.cbAlignment << 11) | (VAR_5->typeattr.cbAlignment << 6);
        VAR_10->memoffset = FUNC_2(VAR_5, VAR_7);
        VAR_10->res2 = 0;
        VAR_10->res3 = 0;
        VAR_10->res4 = 3;
        VAR_10->res5 = 0;
        VAR_10->cElement = (VAR_5->typeattr.cVars << 16) | VAR_5->typeattr.cFuncs;
        VAR_10->res7 = 0;
        VAR_10->res8 = 0;
        VAR_10->res9 = 0;
        VAR_10->resA = 0;
        if(VAR_5->guid)
            VAR_10->posguid = VAR_5->guid->offset;
        else
            VAR_10->posguid = -1;
        VAR_10->flags = VAR_5->typeattr.wTypeFlags;
        if(VAR_5->Name) {
            VAR_10->NameOffset = VAR_5->Name->offset;

            ((unsigned char*)VAR_7->name_seg.data)[VAR_5->Name->offset+9] = 0x38;
            *(HREFTYPE*)((unsigned char*)VAR_7->name_seg.data+VAR_5->Name->offset) = VAR_5->hreftype;
        }else {
            VAR_10->NameOffset = -1;
        }
        VAR_10->version = (VAR_5->typeattr.wMinorVerNum << 16) | VAR_5->typeattr.wMajorVerNum;
        if(VAR_5->DocString)
            VAR_10->docstringoffs = VAR_5->DocString->offset;
        else
            VAR_10->docstringoffs = -1;
        VAR_10->helpstringcontext = VAR_5->dwHelpStringContext;
        VAR_10->helpcontext = VAR_5->dwHelpContext;
        VAR_10->oCustData = FUNC_1(VAR_5->pcustdata_list, VAR_7);
        VAR_10->cImplTypes = VAR_5->typeattr.cImplTypes;
        VAR_10->cbSizeVft = VAR_5->typeattr.cbSizeVft;
        VAR_10->size = VAR_5->typeattr.cbSizeInstance;
        if(VAR_5->typeattr.typekind == VAR_1){
            VAR_10->datatype1 = FUNC_3(VAR_5, VAR_7);
        }else if(VAR_5->typeattr.typekind == VAR_0){
            VAR_10->datatype1 = FUNC_0(VAR_5->tdescAlias, VAR_7, ((void*)0), ((void*)0));
        }else if(VAR_5->typeattr.typekind == VAR_3){
            if(VAR_5->DllName)
                VAR_10->datatype1 = VAR_5->DllName->offset;
            else
                VAR_10->datatype1 = -1;
        }else{
            if(VAR_5->typeattr.cImplTypes > 0)
                VAR_10->datatype1 = VAR_5->impltypes[0].hRef;
            else
                VAR_10->datatype1 = -1;
        }
        VAR_10->datatype2 = VAR_6;
        VAR_10->res18 = 0;
        VAR_10->res19 = -1;
    }

    return VAR_9;
}
