
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IUnknown ;
typedef int IMultiQI ;
typedef scalar_t__ HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,int *,int ,int *,void**) ;
 int FUNC_1 () ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int *,void**) ;
 int FUNC_4 (int *) ;
 scalar_t__ VAR_5 ;
 int FUNC_5 (int,char*) ;
 int FUNC_6 (scalar_t__,scalar_t__ (*) (int *,int *,int ,int *,void**)) ;
 int FUNC_7 (int *,int ) ;

__attribute__((used)) static void FUNC_8(void)
{
    IUnknown *VAR_6;
    IMultiQI *VAR_7;
    HRESULT VAR_8;

    FUNC_7(((void*)0), VAR_2);

    VAR_8 = FUNC_0(&VAR_1, ((void*)0), VAR_0, &VAR_4, (void **)&VAR_6);
    FUNC_6(VAR_8, FUNC_0);
    VAR_8 = FUNC_3(VAR_6, &VAR_3, (void **)&VAR_7);
    FUNC_5(VAR_8 == VAR_5, "created object is not a proxy, so was created in the wrong apartment\n");
    if (VAR_8 == VAR_5)
        FUNC_2(VAR_7);
    FUNC_4(VAR_6);

    FUNC_1();
}
