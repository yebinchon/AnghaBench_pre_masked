
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int vt; int hreftype; TYPE_1__* lptdesc; } ;
struct TYPE_11__ {unsigned short cbSizeInstance; int typekind; TYPE_2__ tdescAlias; } ;
struct TYPE_9__ {int vt; int hreftype; } ;
typedef TYPE_2__ TYPEDESC ;
typedef TYPE_3__ TYPEATTR ;
typedef int ITypeInfo ;
typedef int HRESULT ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int *,int ,int **) ;
 int FUNC_2 (int *,TYPE_3__**) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,TYPE_3__*) ;
 unsigned short VAR_2 ;
 unsigned short VAR_3 ;
 unsigned short VAR_4 ;
 int VAR_5 ;
 unsigned char FUNC_5 (int) ;
 unsigned short FUNC_6 (int *,TYPE_2__*) ;

__attribute__((used)) static HRESULT FUNC_7(ITypeInfo *VAR_6, TYPEDESC *VAR_7, int VAR_8,
        int VAR_9, unsigned short *VAR_10, unsigned short *VAR_11,
        unsigned char *VAR_12, TYPEDESC **VAR_13)
{
    ITypeInfo *VAR_14;
    HRESULT VAR_15 = VAR_5;
    TYPEATTR *VAR_16;

    switch (VAR_7->vt)
    {
    case 129:
    case 131:
        *VAR_11 |= VAR_4;
        if (VAR_8 && VAR_9)
            *VAR_10 = sizeof(void *);
        break;
    case 130:
        *VAR_11 |= VAR_4;

        if (VAR_7->lptdesc->vt == 128)
        {
            FUNC_1(VAR_6, VAR_7->lptdesc->hreftype, &VAR_14);
            FUNC_2(VAR_14, &VAR_16);

            switch (VAR_16->typekind)
            {
            case 134:
            case 136:
            case 137:
                if (VAR_8 && VAR_9)
                    *VAR_10 = sizeof(void *);
                break;
            default:
                *VAR_10 = sizeof(void *);
            }

            FUNC_4(VAR_14, VAR_16);
            FUNC_3(VAR_14);
        }
        else
            *VAR_10 = sizeof(void *);
        break;
    case 132:
        *VAR_11 |= VAR_3 | VAR_4;
        *VAR_10 = FUNC_6(VAR_6, VAR_7);
        *VAR_13 = VAR_7;
        break;
    case 128:
        FUNC_1(VAR_6, VAR_7->hreftype, &VAR_14);
        FUNC_2(VAR_14, &VAR_16);

        switch (VAR_16->typekind)
        {
        case 135:
            *VAR_11 |= VAR_3 | VAR_2;
            if (!VAR_8 && VAR_9)
                *VAR_10 = sizeof(void *);
            *VAR_12 = VAR_1;
            break;
        case 133:
            *VAR_11 |= VAR_3 | VAR_4;
            if (!VAR_8 && VAR_9)
                *VAR_10 = VAR_16->cbSizeInstance;
            *VAR_13 = VAR_7;
            break;
        case 134:
        case 136:
        case 137:
            *VAR_11 |= VAR_4;
            break;
        case 138:
            VAR_15 = FUNC_7(VAR_14, &VAR_16->tdescAlias, VAR_8,
                    VAR_9, VAR_10, VAR_11, VAR_12, VAR_13);
            break;
        default:
            FUNC_0("unhandled kind %#x\n", VAR_16->typekind);
            VAR_15 = VAR_0;
            break;
        }

        FUNC_4(VAR_14, VAR_16);
        FUNC_3(VAR_14);
        break;
    default:
        *VAR_11 |= VAR_3;
        *VAR_13 = VAR_7;
        if (!VAR_8 && VAR_9)
            *VAR_10 = FUNC_6(VAR_6, VAR_7);
        if ((*VAR_12 = FUNC_5(VAR_7->vt)))
            *VAR_11 |= VAR_2;
        break;
    }

    return VAR_15;
}
