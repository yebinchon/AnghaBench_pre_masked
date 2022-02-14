
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct host_object_data {int stream; int * member_4; int member_3; int * member_2; int * member_1; int * member_0; } ;
typedef int LPVOID ;
typedef int IUnknown ;
typedef int IClassFactory ;
typedef int HRESULT ;
typedef int HANDLE ;
typedef int DWORD ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *,...) ;
 int FUNC_3 (int *,int *,...) ;
 int VAR_0 ;
 int FUNC_4 (int *,int *,...) ;
 int FUNC_5 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,int ,int *) ;
 int FUNC_8 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_9 (int ,int ) ;
 int VAR_10 ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 (int ,int (*) (int *,int *)) ;
 int VAR_11 ;
 int FUNC_13 (struct host_object_data*,int *) ;
 int VAR_12 ;

__attribute__((used)) static void FUNC_14(void)
{
    IClassFactory *VAR_13 = ((void*)0);
    DWORD VAR_14;
    IUnknown *VAR_15 = ((void*)0);
    HANDLE VAR_16;
    HRESULT VAR_17;

    struct host_object_data VAR_18 = { ((void*)0), &VAR_1, *(IUnknown*)&VAR_8,
                                            &VAR_3, &VAR_4 };

    VAR_17 = FUNC_0(&VAR_0, &VAR_7);
    FUNC_12(VAR_17, FUNC_0);

    VAR_17 = FUNC_1(&VAR_4, ((void*)0));
    FUNC_12(VAR_17, FUNC_1);

    VAR_9 = 0;

    VAR_17 = FUNC_3(((void*)0), &VAR_6, &VAR_18.stream);
    FUNC_12(VAR_17, FUNC_3);
    VAR_14 = FUNC_13(&VAR_18, &VAR_16);
    VAR_11 = VAR_14;

    FUNC_10();

    FUNC_7(VAR_18.stream, VAR_12, VAR_5, ((void*)0));
    VAR_17 = FUNC_2(&VAR_18.stream, &VAR_1, (void **)&VAR_13);
    FUNC_12(VAR_17, FUNC_2);
    FUNC_6(VAR_18.stream);

    FUNC_10();

    VAR_10 = 3;
    VAR_17 = FUNC_4(VAR_13, ((void*)0), &VAR_2, (LPVOID*)&VAR_15);
    FUNC_12(VAR_17, FUNC_4);

    VAR_10 = 5;
    FUNC_8(VAR_15);

    FUNC_5(VAR_13);

    FUNC_11();

    FUNC_9(VAR_14, VAR_16);

    VAR_17 = FUNC_1(((void*)0), ((void*)0));
    FUNC_12(VAR_17, FUNC_1);
}
