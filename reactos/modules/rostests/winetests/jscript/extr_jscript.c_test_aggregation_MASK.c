
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IUnknown ;
typedef scalar_t__ HRESULT ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *,int *,int,int *,void**) ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_3(void)
{
    IUnknown *VAR_5 = (IUnknown*)0xdeadbeef;
    HRESULT VAR_6;

    VAR_6 = FUNC_0(&VAR_3, (IUnknown*)0xdeadbeef, VAR_2|VAR_1,
            &VAR_4, (void**)&VAR_5);
    FUNC_2(VAR_6 == VAR_0,
       "CoCreateInstance failed: %08x, expected CLASS_E_NOAGGREGATION\n", VAR_6);
    FUNC_2(!VAR_5 || FUNC_1(VAR_5 != ((void*)0)), "unk = %p\n", VAR_5);
}
