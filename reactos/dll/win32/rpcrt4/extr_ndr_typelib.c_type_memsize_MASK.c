
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int VARIANT ;
struct TYPE_11__ {unsigned int cbSizeInstance; } ;
struct TYPE_10__ {int vt; int hreftype; TYPE_2__* lpadesc; } ;
struct TYPE_9__ {unsigned int cDims; TYPE_1__* rgbounds; TYPE_3__ tdescElem; } ;
struct TYPE_8__ {unsigned int cElements; } ;
typedef TYPE_3__ TYPEDESC ;
typedef TYPE_4__ TYPEATTR ;
typedef int ITypeInfo ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (int *,int ,int **) ;
 int FUNC_2 (int *,TYPE_4__**) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,TYPE_4__*) ;
__attribute__((used)) static unsigned int FUNC_5(ITypeInfo *VAR_0, TYPEDESC *VAR_1)
{
    switch (VAR_1->vt)
    {
    case 144:
    case 135:
        return 1;
    case 143:
    case 134:
    case 151:
        return 2;
    case 142:
    case 133:
    case 138:
    case 140:
    case 131:
    case 146:
    case 145:
        return 4;
    case 141:
    case 132:
    case 137:
    case 148:
        return 8;
    case 150:
    case 136:
    case 139:
    case 130:
    case 147:
        return sizeof(void *);
    case 128:
        return sizeof(VARIANT);
    case 149:
    {
        unsigned int VAR_2 = FUNC_5(VAR_0, &VAR_1->lpadesc->tdescElem);
        unsigned int VAR_3;
        for (VAR_3 = 0; VAR_3 < VAR_1->lpadesc->cDims; VAR_3++)
            VAR_2 *= VAR_1->lpadesc->rgbounds[VAR_3].cElements;
        return VAR_2;
    }
    case 129:
    {
        unsigned int VAR_4 = 0;
        ITypeInfo *VAR_5;
        TYPEATTR *VAR_6;

        FUNC_1(VAR_0, VAR_1->hreftype, &VAR_5);
        FUNC_2(VAR_5, &VAR_6);
        VAR_4 = VAR_6->cbSizeInstance;
        FUNC_4(VAR_5, VAR_6);
        FUNC_3(VAR_5);
        return VAR_4;
    }
    default:
        FUNC_0("unhandled type %u\n", VAR_1->vt);
        return 0;
    }
}
