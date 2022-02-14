
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int IVideoWindow ;
typedef int IPin ;
typedef int IFilterGraph2 ;
typedef int IBaseFilter ;
typedef scalar_t__ HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int *,int ,int *,void**) ;
 scalar_t__ FUNC_1 (int *,char const*,int **) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int *,int *) ;
 scalar_t__ FUNC_4 (int *,char*,int *,int **) ;
 scalar_t__ FUNC_5 (int *,int *,int *) ;
 int FUNC_6 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *,int *,void**) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 int * FUNC_11 () ;
 int FUNC_12 (int,char*,scalar_t__) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static HRESULT FUNC_14(WCHAR *VAR_5)
{
    static const WCHAR VAR_6[] = {'O','u','t','p','u','t',0};
    static const WCHAR VAR_7[] = {'I','n',0};
    IBaseFilter *VAR_8, *VAR_9;
    IPin *VAR_10, *VAR_11;
    IFilterGraph2 *VAR_12;
    IVideoWindow *VAR_13;
    HRESULT VAR_14;

    VAR_12 = FUNC_11();

    VAR_14 = FUNC_0(&VAR_1, ((void*)0), VAR_0, &VAR_3, (void **)&VAR_13);
    FUNC_12(VAR_14 == VAR_4, "Failed to create VideoRenderer: %#x\n", VAR_14);

    VAR_14 = FUNC_4(VAR_12, VAR_5, ((void*)0), &VAR_8);
    FUNC_12(VAR_14 == VAR_4, "AddSourceFilter failed: %#x\n", VAR_14);

    VAR_14 = FUNC_8(VAR_13, &VAR_2, (void **)&VAR_9);
    FUNC_12(VAR_14 == VAR_4, "QueryInterface(IBaseFilter) failed: %#x\n", VAR_14);
    VAR_14 = FUNC_3(VAR_12, VAR_9, ((void*)0));
    FUNC_12(VAR_14 == VAR_4, "AddFilter failed: %#x\n", VAR_14);

    VAR_14 = FUNC_1(VAR_8, VAR_6, &VAR_11);
    FUNC_12(VAR_14 == VAR_4, "FindPin failed: %#x\n", VAR_14);
    VAR_14 = FUNC_1(VAR_9, VAR_7, &VAR_10);
    FUNC_12(VAR_14 == VAR_4, "FindPin failed: %#x\n", VAR_14);
    VAR_14 = FUNC_5(VAR_12, VAR_11, VAR_10);

    if (FUNC_10(VAR_14))
        FUNC_13(VAR_12);

    FUNC_7(VAR_10);
    FUNC_7(VAR_11);
    FUNC_2(VAR_8);
    FUNC_2(VAR_9);
    FUNC_9(VAR_13);
    FUNC_6(VAR_12);

    return VAR_14;
}
