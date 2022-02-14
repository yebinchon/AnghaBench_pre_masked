
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPOLESTR ;
typedef int IUriContainer ;
typedef int IUri ;
typedef int IUnknown ;
typedef int IMoniker ;
typedef int IBindStatusCallback ;
typedef int IBindCtx ;
typedef int * HRESULT ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (int *,int *,int,int *,void**) ;
 int * FUNC_2 (int ,int *,int *,int **) ;
 int * VAR_2 ;
 scalar_t__ FUNC_3 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int * FUNC_4 (int *,int *,int *,int *,void**) ;
 int * FUNC_5 (int *,int *,int *,int *,void**) ;
 int * FUNC_6 (int *,int *,int *,int *) ;
 int * FUNC_7 (int *,int *,void**) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (int *,int **) ;
 int FUNC_10 (int *) ;
 int * VAR_9 ;
 int VAR_10 ;
 int FUNC_11 (int ) ;
 int * VAR_11 ;
 int * VAR_12 ;
 int VAR_13 ;
 int FUNC_12 (int,char*,...) ;
 scalar_t__ VAR_14 ;

__attribute__((used)) static void FUNC_13(void)
{
    IMoniker *VAR_15, *VAR_16;
    LPOLESTR VAR_17;
    IBindCtx *VAR_18;
    IUnknown *VAR_19;
    HRESULT VAR_20;

    VAR_20 = FUNC_1(&VAR_4, ((void*)0), VAR_1|VAR_0,
            &VAR_5, (void**)&VAR_15);
    FUNC_12(VAR_20 == VAR_12, "Could not create IInternet instance: %08x\n", VAR_20);
    if(FUNC_3(VAR_20))
        return;

    VAR_20 = FUNC_7(VAR_15, &VAR_3, (void**)&VAR_16);
    FUNC_12(VAR_20 == VAR_12, "Could not get IAsyncMoniker iface: %08x\n", VAR_20);
    FUNC_12(VAR_15 == VAR_16, "mon != async_mon\n");
    FUNC_8(VAR_16);

    VAR_20 = FUNC_6(VAR_15, ((void*)0), ((void*)0), &VAR_17);
    FUNC_12(VAR_20 == VAR_2, "GetDisplayName failed: %08x, expected E_OUTOFMEMORY\n", VAR_20);

    if(VAR_14) {
      IUriContainer *VAR_21;
      IUri *VAR_22;

      VAR_20 = FUNC_7(VAR_15, &VAR_8, (void**)&VAR_21);
      FUNC_12(VAR_20 == VAR_12, "Could not get IUriMoniker iface: %08x\n", VAR_20);


      VAR_22 = (void*)0xdeadbeef;
      VAR_20 = FUNC_9(VAR_21, &VAR_22);
      FUNC_12(VAR_20 == VAR_11, "GetIUri failed: %08x\n", VAR_20);
      FUNC_12(!VAR_22, "uri = %p, expected NULL\n", VAR_22);

      FUNC_10(VAR_21);
    }

    FUNC_11(VAR_10);
    VAR_20 = FUNC_2(0, (IBindStatusCallback*)&VAR_13, ((void*)0), &VAR_18);
    FUNC_12(VAR_20 == VAR_12, "CreateAsyncBindCtx failed: %08x\n\n", VAR_20);
    FUNC_0(VAR_10);

    if(VAR_14) {
        VAR_19 = (void*)0xdeadbeef;
        VAR_20 = FUNC_5(VAR_15, VAR_18, ((void*)0), &VAR_6, (void**)&VAR_19);
        FUNC_12(VAR_20 == VAR_9, "BindToStorage failed: %08x, expected MK_E_SYNTAX\n", VAR_20);
        FUNC_12(!VAR_19, "unk = %p\n", VAR_19);

        VAR_19 = (void*)0xdeadbeef;
        VAR_20 = FUNC_4(VAR_15, VAR_18, ((void*)0), &VAR_7, (void**)&VAR_19);
        FUNC_12(VAR_20 == VAR_9, "BindToStorage failed: %08x, expected MK_E_SYNTAX\n", VAR_20);
        FUNC_12(!VAR_19, "unk = %p\n", VAR_19);
    }

    FUNC_8(VAR_15);
}
