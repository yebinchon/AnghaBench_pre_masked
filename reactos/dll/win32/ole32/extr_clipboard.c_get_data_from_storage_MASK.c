
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int med ;
struct TYPE_13__ {int tymed; } ;
struct TYPE_11__ {int * pstg; } ;
struct TYPE_12__ {TYPE_1__ u; int * pUnkForRelease; int tymed; } ;
typedef TYPE_2__ STGMEDIUM ;
typedef int IStorage ;
typedef int ILockBytes ;
typedef int IDataObject ;
typedef int HRESULT ;
typedef int * HGLOBAL ;
typedef TYPE_3__ FORMATETC ;


 int FUNC_0 (int *,int ,int **) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,TYPE_3__*,TYPE_2__*) ;
 int FUNC_5 (int *,TYPE_3__*,TYPE_2__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ,int *,int *,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_2__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int *,int,int ,int **) ;
 int VAR_7 ;
 int FUNC_12 (TYPE_2__*,int ,int) ;

__attribute__((used)) static HRESULT FUNC_13(IDataObject *VAR_8, FORMATETC *VAR_9, HGLOBAL *VAR_10)
{
    HGLOBAL VAR_11;
    IStorage *VAR_12;
    HRESULT VAR_13;
    FORMATETC VAR_14;
    STGMEDIUM VAR_15;
    ILockBytes *VAR_16;

    *VAR_10 = ((void*)0);

    VAR_11 = FUNC_2( VAR_2|VAR_3, 0 );
    if(!VAR_11) return VAR_0;

    VAR_13 = FUNC_0(VAR_11, VAR_1, &VAR_16);
    if(FUNC_10(VAR_13))
    {
        VAR_13 = FUNC_11(VAR_16, VAR_4|VAR_6|VAR_5, 0, &VAR_12);
        FUNC_6(VAR_16);
    }
    if(FUNC_1(VAR_13))
    {
        FUNC_3(VAR_11);
        return VAR_13;
    }

    VAR_14 = *VAR_9;
    VAR_15.tymed = VAR_14.tymed = VAR_7;
    VAR_15.u.pstg = VAR_12;
    VAR_15.pUnkForRelease = ((void*)0);

    VAR_13 = FUNC_5(VAR_8, &VAR_14, &VAR_15);
    if(FUNC_1(VAR_13))
    {
        FUNC_12(&VAR_15, 0, sizeof(VAR_15));
        VAR_13 = FUNC_4(VAR_8, &VAR_14, &VAR_15);
        if(FUNC_1(VAR_13)) goto end;

        VAR_13 = FUNC_7(VAR_15.u.pstg, 0, ((void*)0), ((void*)0), VAR_12);
        FUNC_9(&VAR_15);
        if(FUNC_1(VAR_13)) goto end;
    }
    *VAR_10 = VAR_11;

end:
    FUNC_8(VAR_12);
    if(FUNC_1(VAR_13)) FUNC_3(VAR_11);
    return VAR_13;
}
