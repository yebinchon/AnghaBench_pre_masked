
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int vt; int hreftype; int lptdesc; } ;
struct TYPE_9__ {int typekind; int cbSizeInstance; TYPE_1__ tdescAlias; } ;
typedef TYPE_1__ TYPEDESC ;
typedef TYPE_2__ TYPEATTR ;
typedef int ITypeInfo ;
typedef int HRESULT ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int *,int ,int **) ;
 int FUNC_2 (int *,TYPE_2__**) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,TYPE_2__*) ;
 unsigned short VAR_2 ;
 unsigned short VAR_3 ;
 unsigned short VAR_4 ;
 unsigned short VAR_5 ;
 unsigned short VAR_6 ;
 int VAR_7 ;



 int FUNC_5 (char*,int) ;
 unsigned char FUNC_6 (int) ;
 int FUNC_7 (int *,int ,int,int,unsigned short*,unsigned short*,unsigned char*,TYPE_1__**) ;

__attribute__((used)) static HRESULT FUNC_8(ITypeInfo *VAR_8, TYPEDESC *VAR_9, int VAR_10,
        int VAR_11, unsigned short *VAR_12, unsigned short *VAR_13,
        unsigned char *VAR_14, TYPEDESC **VAR_15)
{
    ITypeInfo *VAR_16;
    HRESULT VAR_17 = VAR_7;
    TYPEATTR *VAR_18;

    *VAR_12 = 0;
    *VAR_13 = VAR_6;
    *VAR_14 = 0;
    *VAR_15 = VAR_9;

    FUNC_5("vt %u\n", VAR_9->vt);

    switch (VAR_9->vt)
    {
    case 128:

        *VAR_13 |= VAR_4 | VAR_5;
        break;


    case 136:
    case 131:
    case 134:
        *VAR_13 |= VAR_3 | VAR_5;
        break;
    case 130:
    case 133:
    case 135:
        *VAR_13 |= VAR_5;
        break;
    case 132:
        return FUNC_7(VAR_8, VAR_9->lptdesc, VAR_10, VAR_11,
                VAR_12, VAR_13, VAR_14, VAR_15);
    case 129:
        FUNC_1(VAR_8, VAR_9->hreftype, &VAR_16);
        FUNC_2(VAR_16, &VAR_18);

        switch (VAR_18->typekind)
        {
        case 138:
            *VAR_13 |= VAR_2;
            *VAR_14 = VAR_1;
            break;
        case 137:



            if (VAR_18->cbSizeInstance <= 8)
                *VAR_13 |= VAR_3 | VAR_5;
            else
                *VAR_13 |= VAR_4 | VAR_5;

            break;
        case 139:
            VAR_17 = FUNC_8(VAR_16, &VAR_18->tdescAlias, VAR_10, VAR_11,
                    VAR_12, VAR_13, VAR_14, VAR_15);
            break;
        default:
            FUNC_0("unhandled kind %#x\n", VAR_18->typekind);
            VAR_17 = VAR_0;
            break;
        }

        FUNC_4(VAR_16, VAR_18);
        FUNC_3(VAR_16);
        break;
    default:
        if ((*VAR_14 = FUNC_6(VAR_9->vt)))
            *VAR_13 |= VAR_2;
        else
        {
            FUNC_0("unhandled type %u\n", VAR_9->vt);
            return VAR_0;
        }
        break;
    }

    return VAR_17;
}
