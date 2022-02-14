
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ (* fnFoundSeek ) (TYPE_1__*,int *,int ) ;
typedef scalar_t__ ULONG ;
struct TYPE_7__ {int nFilters; int ** ppFiltersInGraph; } ;
typedef int IMediaSeeking ;
typedef TYPE_1__ IFilterGraphImpl ;
typedef int IBaseFilter ;
typedef int IAMFilterMiscFlags ;
typedef scalar_t__ HRESULT ;
typedef int DWORD_PTR ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,void**) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ VAR_5 ;
 int FUNC_6 (char*,TYPE_1__*,scalar_t__ (*) (TYPE_1__*,int *,int ),int ) ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static HRESULT FUNC_7(IFilterGraphImpl *VAR_7, fnFoundSeek VAR_8, DWORD_PTR VAR_9) {
    BOOL VAR_10 = VAR_6;
    int VAR_11;
    HRESULT VAR_12, VAR_13 = VAR_5;

    FUNC_6("(%p)->(%p %08lx)\n", VAR_7, VAR_8, VAR_9);


    for(VAR_11 = 0; VAR_11 < VAR_7->nFilters; VAR_11++)
    {
        IMediaSeeking *VAR_14 = ((void*)0);
        IBaseFilter* VAR_15 = VAR_7->ppFiltersInGraph[VAR_11];
        IAMFilterMiscFlags *VAR_16 = ((void*)0);
        ULONG VAR_17;
        FUNC_3(VAR_15, &VAR_3, (void**)&VAR_16);
        if (!VAR_16)
            continue;
        VAR_17 = FUNC_1(VAR_16);
        FUNC_2(VAR_16);
        if (VAR_17 != VAR_0)
            continue;

        FUNC_3(VAR_15, &VAR_4, (void**)&VAR_14);
        if (!VAR_14)
            continue;
        VAR_12 = VAR_8(VAR_7, VAR_14, VAR_9);
        FUNC_4(VAR_14);
        if (VAR_13 != VAR_1)
            VAR_10 = VAR_2;
        if (VAR_13 == VAR_5 || (FUNC_0(VAR_12) && VAR_12 != VAR_1 && FUNC_5(VAR_13)))
            VAR_13 = VAR_12;
    }

    if (VAR_10)
        return VAR_1;
    return VAR_13;
}
