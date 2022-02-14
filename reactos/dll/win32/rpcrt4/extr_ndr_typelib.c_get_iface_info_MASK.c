
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ WORD ;
struct TYPE_8__ {scalar_t__ syskind; } ;
struct TYPE_7__ {scalar_t__ typekind; int cbSizeVft; int guid; scalar_t__ cFuncs; } ;
typedef scalar_t__ TYPEKIND ;
typedef TYPE_1__ TYPEATTR ;
typedef TYPE_2__ TLIBATTR ;
typedef scalar_t__ SYSKIND ;
typedef int ITypeLib ;
typedef int ITypeInfo ;
typedef int HRESULT ;
typedef int HREFTYPE ;
typedef int GUID ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,int **,int *) ;
 int FUNC_2 (int *,int ,int **) ;
 int FUNC_3 (int *,int,int *) ;
 int FUNC_4 (int *,TYPE_1__**) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,TYPE_1__*) ;
 int FUNC_7 (int *,TYPE_2__**) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static HRESULT FUNC_10(ITypeInfo **VAR_2, WORD *VAR_3, WORD *VAR_4,
        GUID *VAR_5)
{
    ITypeInfo *VAR_6, *VAR_7;
    TYPEATTR *VAR_8;
    ITypeLib *VAR_9;
    TLIBATTR *VAR_10;
    TYPEKIND VAR_11;
    HREFTYPE VAR_12;
    SYSKIND VAR_13;
    HRESULT VAR_14;




    VAR_14 = FUNC_4(*VAR_2, &VAR_8);
    if (FUNC_0(VAR_14))
        return VAR_14;
    VAR_11 = VAR_8->typekind;
    FUNC_6(*VAR_2, VAR_8);
    if (VAR_11 == VAR_1)
    {
        VAR_14 = FUNC_3(*VAR_2, -1, &VAR_12);
        if (FUNC_0(VAR_14))
            return VAR_14;

        VAR_14 = FUNC_2(*VAR_2, VAR_12, &VAR_6);
        if (FUNC_0(VAR_14))
            return VAR_14;

        FUNC_5(*VAR_2);
        *VAR_2 = VAR_6;
    }

    VAR_14 = FUNC_1(*VAR_2, &VAR_9, ((void*)0));
    if (FUNC_0(VAR_14))
        return VAR_14;

    VAR_14 = FUNC_7(VAR_9, &VAR_10);
    if (FUNC_0(VAR_14))
    {
        FUNC_8(VAR_9);
        return VAR_14;
    }
    VAR_13 = VAR_10->syskind;
    FUNC_9(VAR_9, VAR_10);
    FUNC_8(VAR_9);

    VAR_14 = FUNC_4(*VAR_2, &VAR_8);
    if (FUNC_0(VAR_14))
        return VAR_14;
    *VAR_3 = VAR_8->cFuncs;
    *VAR_4 = VAR_8->cbSizeVft / (VAR_13 == VAR_0 ? 8 : 4) - *VAR_3;
    FUNC_6(*VAR_2, VAR_8);

    VAR_14 = FUNC_3(*VAR_2, 0, &VAR_12);
    if (FUNC_0(VAR_14))
        return VAR_14;
    VAR_14 = FUNC_2(*VAR_2, VAR_12, &VAR_7);
    if (FUNC_0(VAR_14))
        return VAR_14;
    VAR_14 = FUNC_4(VAR_7, &VAR_8);
    if (FUNC_0(VAR_14))
        return VAR_14;
    *VAR_5 = VAR_8->guid;
    FUNC_6(VAR_7, VAR_8);
    FUNC_5(VAR_7);

    return VAR_14;
}
