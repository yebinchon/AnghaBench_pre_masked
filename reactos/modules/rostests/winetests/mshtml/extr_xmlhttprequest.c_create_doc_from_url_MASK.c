
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IUnknown ;
typedef int IPersistMoniker ;
typedef int IMoniker ;
typedef int IHTMLDocument2 ;
typedef int IBindCtx ;
typedef scalar_t__ HRESULT ;
typedef int BSTR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,int *,int,int *,void**) ;
 scalar_t__ FUNC_1 (int ,int **) ;
 scalar_t__ FUNC_2 (int *,int ,int **) ;
 int VAR_3 ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int *,void**) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int ,int *,int *,int) ;
 int FUNC_7 (int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char const*) ;
 int FUNC_10 (int *,int *,int *) ;
 int VAR_11 ;
 int * VAR_12 ;
 int FUNC_11 (int,char*,scalar_t__) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static IHTMLDocument2 *FUNC_13(const char *VAR_13)
{
    BSTR VAR_14;
    IBindCtx *VAR_15;
    IMoniker *VAR_16;
    IPersistMoniker *VAR_17;
    IHTMLDocument2 *VAR_18;
    HRESULT VAR_19;

    VAR_19 = FUNC_1(0, &VAR_15);
    FUNC_11(VAR_19 == VAR_10, "CreateBindCtx failed: 0x%08x\n", VAR_19);

    VAR_14 = FUNC_9(VAR_13);
    VAR_19 = FUNC_2(((void*)0), VAR_14, &VAR_16);
    FUNC_11(VAR_19 == VAR_10, "CreateURLMoniker failed: 0x%08x\n", VAR_19);

    VAR_19 = FUNC_0(&VAR_2, ((void*)0),
            VAR_1 | VAR_0, &VAR_4,
            (void**)&VAR_18);
    FUNC_11(VAR_19 == VAR_10, "CoCreateInstance failed: 0x%08x\n", VAR_19);

    VAR_19 = FUNC_4(VAR_18, &VAR_5,
            (void**)&VAR_17);
    FUNC_11(VAR_19 == VAR_10, "IHTMLDocument2_QueryInterface failed: 0x%08x\n", VAR_19);

    VAR_19 = FUNC_6(VAR_17, VAR_3, VAR_16, VAR_15,
            VAR_9 | VAR_8);
    FUNC_11(VAR_19 == VAR_10, "IPersistMoniker_Load failed: 0x%08x\n", VAR_19);

    FUNC_7(VAR_17);
    FUNC_5(VAR_16);
    FUNC_3(VAR_15);
    FUNC_8(VAR_14);

    VAR_11 = VAR_3;
    VAR_12 = VAR_18;
    FUNC_10((IUnknown*)VAR_18, &VAR_6, (IUnknown*)&VAR_7);
    FUNC_12(&VAR_11);

    return VAR_18;
}
