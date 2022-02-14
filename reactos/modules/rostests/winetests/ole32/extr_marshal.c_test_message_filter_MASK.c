
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct host_object_data {int stream; int * member_4; int member_3; int * member_2; int * member_1; int * member_0; } ;
typedef int LPVOID ;
typedef int IUnknown ;
typedef int IMessageFilter ;
typedef int IClassFactory ;
typedef scalar_t__ HRESULT ;
typedef int HANDLE ;
typedef int DWORD ;


 scalar_t__ FUNC_0 (int *,int **) ;
 scalar_t__ FUNC_1 (int *,int **,...) ;
 scalar_t__ FUNC_2 (int *,int **,...) ;
 scalar_t__ FUNC_3 (int *,int **,...) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int ,int *) ;
 int FUNC_7 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int,char*,scalar_t__) ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 (scalar_t__,scalar_t__ (*) (int *,int **)) ;
 int FUNC_13 (struct host_object_data*,int *) ;
 int VAR_9 ;

__attribute__((used)) static void FUNC_14(void)
{
    HRESULT VAR_10;
    IClassFactory *VAR_11 = ((void*)0);
    DWORD VAR_12;
    IUnknown *VAR_13 = ((void*)0);
    IMessageFilter *VAR_14 = ((void*)0);
    HANDLE VAR_15;

    struct host_object_data VAR_16 = { ((void*)0), &VAR_0, *(IUnknown*)&VAR_7,
                                            &VAR_2, &VAR_3 };

    VAR_8 = 0;

    VAR_10 = FUNC_2(((void*)0), VAR_6, &VAR_16.stream);
    FUNC_12(VAR_10, FUNC_2);
    VAR_12 = FUNC_13(&VAR_16, &VAR_15);

    FUNC_10();

    FUNC_6(VAR_16.stream, VAR_9, VAR_5, ((void*)0));
    VAR_10 = FUNC_1(&VAR_16.stream, &VAR_0, (void **)&VAR_11);
    FUNC_12(VAR_10, FUNC_1);
    FUNC_5(VAR_16.stream);

    FUNC_10();

    VAR_10 = FUNC_3(VAR_11, ((void*)0), &VAR_1, (LPVOID*)&VAR_13);
    FUNC_9(VAR_10 == VAR_4, "Call should have returned RPC_E_CALL_REJECTED, but return 0x%08x instead\n", VAR_10);
    if (VAR_13) FUNC_7(VAR_13);
    VAR_13 = ((void*)0);

    VAR_10 = FUNC_0(&VAR_3, &VAR_14);
    FUNC_12(VAR_10, FUNC_0);

    VAR_10 = FUNC_3(VAR_11, ((void*)0), &VAR_1, (LPVOID*)&VAR_13);
    FUNC_12(VAR_10, FUNC_3);

    FUNC_7(VAR_13);

    FUNC_4(VAR_11);

    FUNC_11();

    FUNC_8(VAR_12, VAR_15);

    VAR_10 = FUNC_0(VAR_14, ((void*)0));
    FUNC_12(VAR_10, FUNC_0);
}
