
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int med ;
typedef int ULARGE_INTEGER ;
struct TYPE_16__ {int tymed; } ;
struct TYPE_15__ {scalar_t__ QuadPart; } ;
struct TYPE_13__ {int * pstm; } ;
struct TYPE_14__ {TYPE_1__ u; int * pUnkForRelease; int tymed; } ;
typedef TYPE_2__ STGMEDIUM ;
typedef TYPE_3__ LARGE_INTEGER ;
typedef int IStream ;
typedef int IDataObject ;
typedef int HRESULT ;
typedef int * HGLOBAL ;
typedef TYPE_4__ FORMATETC ;


 int FUNC_0 (int *,int ,int **) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,TYPE_4__*,TYPE_2__*) ;
 int FUNC_5 (int *,TYPE_4__*,TYPE_2__*) ;
 int FUNC_6 (int *,int *,int ,int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,TYPE_3__,int ,int *) ;
 int FUNC_9 (TYPE_2__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_10 (TYPE_2__*,int ,int) ;

__attribute__((used)) static HRESULT FUNC_11(IDataObject *VAR_8, FORMATETC *VAR_9, HGLOBAL *VAR_10)
{
    HGLOBAL VAR_11;
    IStream *VAR_12 = ((void*)0);
    HRESULT VAR_13;
    FORMATETC VAR_14;
    STGMEDIUM VAR_15;

    *VAR_10 = ((void*)0);

    VAR_11 = FUNC_2( VAR_2|VAR_3, 0 );
    if(!VAR_11) return VAR_0;

    VAR_13 = FUNC_0(VAR_11, VAR_1, &VAR_12);
    if(FUNC_1(VAR_13)) goto error;

    VAR_14 = *VAR_9;
    VAR_15.tymed = VAR_14.tymed = VAR_7;
    VAR_15.u.pstm = VAR_12;
    VAR_15.pUnkForRelease = ((void*)0);

    VAR_13 = FUNC_5(VAR_8, &VAR_14, &VAR_15);
    if(FUNC_1(VAR_13))
    {
        LARGE_INTEGER VAR_16;
        ULARGE_INTEGER VAR_17;

        FUNC_10(&VAR_15, 0, sizeof(VAR_15));
        VAR_13 = FUNC_4(VAR_8, &VAR_14, &VAR_15);
        if(FUNC_1(VAR_13)) goto error;

        VAR_16.QuadPart = 0;
        FUNC_8(VAR_15.u.pstm, VAR_16, VAR_4, &VAR_17);
        FUNC_8(VAR_15.u.pstm, VAR_16, VAR_5, ((void*)0));
        VAR_13 = FUNC_6(VAR_15.u.pstm, VAR_12, VAR_17, ((void*)0), ((void*)0));
        FUNC_9(&VAR_15);
        if(FUNC_1(VAR_13)) goto error;
    }
    *VAR_10 = VAR_11;
    FUNC_7(VAR_12);
    return VAR_6;

error:
    if(VAR_12) FUNC_7(VAR_12);
    FUNC_3(VAR_11);
    return VAR_13;
}
