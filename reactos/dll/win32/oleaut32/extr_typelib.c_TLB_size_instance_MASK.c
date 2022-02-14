
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int WORD ;
typedef int VARIANT ;
typedef int ULONG ;
struct TYPE_8__ {int hreftype; TYPE_2__* lpadesc; } ;
struct TYPE_9__ {int vt; TYPE_3__ u; } ;
struct TYPE_7__ {int cDims; TYPE_4__ tdescElem; TYPE_1__* rgbounds; } ;
struct TYPE_6__ {int cElements; } ;
typedef TYPE_4__ TYPEDESC ;
typedef int SYSKIND ;
typedef int ITypeInfoImpl ;
typedef int HRESULT ;
typedef int DECIMAL ;
typedef int DATE ;
typedef int CY ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,int ,int*,int*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static HRESULT FUNC_4(ITypeInfoImpl *VAR_3, SYSKIND VAR_4,
        TYPEDESC *VAR_5, ULONG *VAR_6, WORD *VAR_7)
{
    ULONG VAR_8, VAR_9, VAR_10;
    HRESULT VAR_11;

    VAR_10 = FUNC_3(VAR_4);

    switch(VAR_5->vt){
    case 128:
        *VAR_6 = 0;
        break;
    case 147:
    case 136:
        *VAR_6 = 1;
        break;
    case 146:
    case 156:
    case 135:
        *VAR_6 = 2;
        break;
    case 145:
    case 139:
    case 149:
    case 134:
    case 143:
    case 132:
    case 148:
        *VAR_6 = 4;
        break;
    case 138:
    case 144:
    case 133:
        *VAR_6 = 8;
        break;
    case 155:
    case 150:
    case 131:
    case 140:
    case 137:
    case 142:
    case 141:
        *VAR_6 = VAR_10;
        break;
    case 152:
        *VAR_6 = sizeof(DATE);
        break;
    case 129:
        *VAR_6 = sizeof(VARIANT);




        break;
    case 151:
        *VAR_6 = sizeof(DECIMAL);
        break;
    case 153:
        *VAR_6 = sizeof(CY);
        break;
    case 154:
        *VAR_6 = 0;
        for(VAR_8 = 0; VAR_8 < VAR_5->u.lpadesc->cDims; ++VAR_8)
            *VAR_6 += VAR_5->u.lpadesc->rgbounds[VAR_8].cElements;
        VAR_11 = FUNC_4(VAR_3, VAR_4, &VAR_5->u.lpadesc->tdescElem, &VAR_9, VAR_7);
        if(FUNC_0(VAR_11))
            return VAR_11;
        *VAR_6 *= VAR_9;
        return VAR_2;
    case 130:
        return FUNC_2(VAR_3, VAR_5->u.hreftype, VAR_6, VAR_7);
    default:
        FUNC_1("Unsized VT: 0x%x\n", VAR_5->vt);
        return VAR_0;
    }

    if(VAR_7){
        if(*VAR_6 < 4)
            *VAR_7 = *VAR_6;
        else
            *VAR_7 = 4;
    }

    return VAR_2;
}
