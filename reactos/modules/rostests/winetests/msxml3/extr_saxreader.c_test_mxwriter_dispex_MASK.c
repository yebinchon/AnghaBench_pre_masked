
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IUnknown ;
typedef int IMXWriter ;
typedef int IDispatchEx ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *,int ,int *,void**) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,int *,void**) ;
 int FUNC_3 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int *,int *,void**) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_6 ;
 scalar_t__ FUNC_7 (int *,int ) ;
 int VAR_7 ;
 int FUNC_8 (int,char*,int ) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(void)
{
    IDispatchEx *VAR_8;
    IMXWriter *VAR_9;
    IUnknown *VAR_10;
    HRESULT VAR_11;

    VAR_11 = FUNC_0(&VAR_1, ((void*)0), VAR_0,
            &VAR_4, (void**)&VAR_9);
    FUNC_1(VAR_11, VAR_6);

    VAR_11 = FUNC_4(VAR_9, &VAR_3, (void**)&VAR_8);
    FUNC_1(VAR_11, VAR_6);
    VAR_11 = FUNC_2(VAR_8, &VAR_5, (void**)&VAR_10);
    FUNC_9(VAR_10);
    FUNC_6(VAR_10);
    FUNC_3(VAR_8);
    FUNC_5(VAR_9);

    if (FUNC_7(&VAR_2, VAR_7))
    {
        VAR_11 = FUNC_0(&VAR_2, ((void*)0), VAR_0, &VAR_5, (void**)&VAR_10);
        FUNC_8(VAR_11 == VAR_6, "got 0x%08x\n", VAR_11);
        FUNC_9(VAR_10);
        FUNC_6(VAR_10);
    }
}
