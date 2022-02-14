
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ vt; int hreftype; } ;
struct TYPE_9__ {int typekind; TYPE_1__ tdescAlias; int cImplTypes; int guid; } ;
typedef TYPE_1__ TYPEDESC ;
typedef TYPE_2__ TYPEATTR ;
typedef int ITypeInfo ;
typedef int GUID ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;
 unsigned char VAR_7 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int *,int ,int **) ;
 int FUNC_2 (int *,TYPE_2__**) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,TYPE_2__*) ;






 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_5 (unsigned char*,size_t,unsigned char) ;
 int FUNC_6 (unsigned char*,size_t,size_t) ;
 int FUNC_7 (int) ;
 unsigned char FUNC_8 (scalar_t__) ;
 int FUNC_9 (int *,int ,int *) ;
 int FUNC_10 (unsigned char*,size_t*,int *) ;
 size_t FUNC_11 (int *,unsigned char*,size_t*,TYPE_2__*) ;
 size_t FUNC_12 (int *,unsigned char*,size_t*,TYPE_1__*,int ,int ) ;

__attribute__((used)) static size_t FUNC_13(ITypeInfo *VAR_12, unsigned char *VAR_13,
        size_t *VAR_14, TYPEDESC *VAR_15, BOOL VAR_16, BOOL VAR_17)
{
    unsigned char VAR_18, VAR_19 = 0;
    size_t VAR_20, VAR_21 = *VAR_14;
    ITypeInfo *VAR_22;
    TYPEATTR *VAR_23;
    GUID VAR_24;

    if (VAR_15->vt == VAR_11)
    {
        FUNC_1(VAR_12, VAR_15->hreftype, &VAR_22);
        FUNC_2(VAR_22, &VAR_23);

        switch (VAR_23->typekind)
        {
        case 130:
            FUNC_7(!VAR_16);
            FUNC_5(VAR_13, *VAR_14, VAR_7);
            FUNC_5(VAR_13, *VAR_14, VAR_6);
            FUNC_5(VAR_13, *VAR_14, VAR_2);
            FUNC_5(VAR_13, *VAR_14, VAR_3);
            break;
        case 128:
            FUNC_7(!VAR_16);
            VAR_20 = FUNC_11(VAR_22, VAR_13, VAR_14, VAR_23);
            VAR_21 = *VAR_14;
            FUNC_5 (VAR_13, *VAR_14, VAR_7);
            FUNC_5 (VAR_13, *VAR_14, 0);
            FUNC_6(VAR_13, *VAR_14, VAR_20 - *VAR_14);
            break;
        case 129:
        case 131:
            FUNC_10(VAR_13, VAR_14, &VAR_23->guid);
            break;
        case 132:
            FUNC_9(VAR_22, VAR_23->cImplTypes, &VAR_24);
            FUNC_10(VAR_13, VAR_14, &VAR_24);
            break;
        case 133:
            VAR_21 = FUNC_13(VAR_22, VAR_13, VAR_14, &VAR_23->tdescAlias, VAR_16, VAR_17);
            break;
        default:
            FUNC_0("unhandled kind %#x\n", VAR_23->typekind);
            FUNC_6(VAR_13, *VAR_14, 0);
            break;
        }

        FUNC_4(VAR_22, VAR_23);
        FUNC_3(VAR_22);
    }
    else if ((VAR_18 = FUNC_8(VAR_15->vt)))
    {
        FUNC_7(!VAR_16);
        FUNC_5(VAR_13, *VAR_14, VAR_7);
        FUNC_5(VAR_13, *VAR_14, VAR_6);
        FUNC_5(VAR_13, *VAR_14, VAR_18);
        FUNC_5(VAR_13, *VAR_14, VAR_3);
    }
    else
    {
        VAR_20 = FUNC_12(VAR_12, VAR_13, VAR_14, VAR_15, VAR_0, VAR_0);

        if (VAR_17) VAR_19 |= VAR_1;
        if (VAR_15->vt == VAR_9 || VAR_15->vt == VAR_10 || VAR_15->vt == VAR_8)
            VAR_19 |= VAR_4;

        VAR_21 = *VAR_14;

        FUNC_5 (VAR_13, *VAR_14, VAR_16 ? VAR_5 : VAR_7);
        FUNC_5 (VAR_13, *VAR_14, VAR_19);
        FUNC_6(VAR_13, *VAR_14, VAR_20 - *VAR_14);
    }

    return VAR_21;
}
