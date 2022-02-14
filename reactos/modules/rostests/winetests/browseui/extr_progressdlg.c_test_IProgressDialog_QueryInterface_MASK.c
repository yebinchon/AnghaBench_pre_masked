
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IUnknown ;
typedef int IProgressDialog ;
typedef int IOleWindow ;
typedef scalar_t__ HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int *,int ,int *,void*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int *,int *,void**) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int *,void**) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ VAR_6 ;
 int FUNC_8 (int,char*,scalar_t__) ;
 int FUNC_9 (char*,scalar_t__) ;

__attribute__((used)) static void FUNC_10(void)
{
    IProgressDialog *VAR_7;
    IProgressDialog *VAR_8;
    IOleWindow *VAR_9;
    IUnknown *VAR_10;
    HRESULT VAR_11;

    VAR_11 = FUNC_0(&VAR_1, ((void*)0), VAR_0, &VAR_4, (void*)&VAR_7);
    if (FUNC_1(VAR_11)) {
        FUNC_9("CoCreateInstance for IProgressDialog returned 0x%x\n", VAR_11);
        return;
    }

    VAR_11 = FUNC_4(VAR_7, &VAR_5, ((void*)0));
    FUNC_8(VAR_11 == VAR_2, "got 0x%x (expected E_POINTER)\n", VAR_11);

    VAR_11 = FUNC_4(VAR_7, &VAR_5, (void**)&VAR_10);
    FUNC_8(VAR_11 == VAR_6, "QueryInterface (IUnknown) returned 0x%x\n", VAR_11);
    if (FUNC_7(VAR_11)) {
        FUNC_6(VAR_10);
    }

    VAR_11 = FUNC_4(VAR_7, &VAR_3, (void**)&VAR_9);
    FUNC_8(VAR_11 == VAR_6, "QueryInterface (IOleWindow) returned 0x%x\n", VAR_11);
    if (FUNC_7(VAR_11)) {
        VAR_11 = FUNC_2(VAR_9, &VAR_4, (void**)&VAR_8);
        FUNC_8(VAR_11 == VAR_6, "QueryInterface (IProgressDialog) returned 0x%x\n", VAR_11);
        if (FUNC_7(VAR_11)) {
            FUNC_5(VAR_8);
        }
        FUNC_3(VAR_9);
    }
    FUNC_5(VAR_7);
}
