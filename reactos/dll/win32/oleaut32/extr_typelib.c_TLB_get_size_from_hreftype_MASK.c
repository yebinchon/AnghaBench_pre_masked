
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int WORD ;
typedef int ULONG ;
struct TYPE_7__ {int ITypeInfo2_iface; } ;
struct TYPE_6__ {int cbAlignment; int cbSizeInstance; } ;
typedef TYPE_1__ TYPEATTR ;
typedef TYPE_2__ ITypeInfoImpl ;
typedef int ITypeInfo ;
typedef int HRESULT ;
typedef int HREFTYPE ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int **) ;
 int FUNC_2 (int *,TYPE_1__**) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,TYPE_1__*) ;
 int VAR_0 ;

__attribute__((used)) static HRESULT FUNC_5(ITypeInfoImpl *VAR_1, HREFTYPE VAR_2,
        ULONG *VAR_3, WORD *VAR_4)
{
    ITypeInfo *VAR_5;
    TYPEATTR *VAR_6;
    HRESULT VAR_7;

    VAR_7 = FUNC_1(&VAR_1->ITypeInfo2_iface, VAR_2, &VAR_5);
    if(FUNC_0(VAR_7))
        return VAR_7;

    VAR_7 = FUNC_2(VAR_5, &VAR_6);
    if(FUNC_0(VAR_7)){
        FUNC_3(VAR_5);
        return VAR_7;
    }

    if(VAR_3)
        *VAR_3 = VAR_6->cbSizeInstance;
    if(VAR_4)
        *VAR_4 = VAR_6->cbAlignment;

    FUNC_4(VAR_5, VAR_6);
    FUNC_3(VAR_5);

    return VAR_0;
}
