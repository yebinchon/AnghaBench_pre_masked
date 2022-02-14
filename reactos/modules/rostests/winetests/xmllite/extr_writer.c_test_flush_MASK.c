
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IXmlWriter ;
typedef int IUnknown ;
typedef scalar_t__ HRESULT ;


 scalar_t__ FUNC_0 (int *,void**,int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (int *,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (int,char*,scalar_t__) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_6(void)
{
    IXmlWriter *VAR_5;
    HRESULT VAR_6;

    VAR_6 = FUNC_0(&VAR_0, (void**)&VAR_5, ((void*)0));
    FUNC_5(VAR_6 == VAR_1, "Expected S_OK, got %08x\n", VAR_6);

    VAR_6 = FUNC_3(VAR_5, (IUnknown*)&VAR_4);
    FUNC_5(VAR_6 == VAR_1, "got 0x%08x\n", VAR_6);

    VAR_6 = FUNC_4(VAR_5, VAR_2);
    FUNC_5(VAR_6 == VAR_1, "got 0x%08x\n", VAR_6);

    VAR_3 = 0;
    VAR_6 = FUNC_1(VAR_5);
    FUNC_5(VAR_6 == VAR_1, "got 0x%08x\n", VAR_6);
    FUNC_5(VAR_3 > 0, "got %d\n", VAR_3);

    VAR_3 = 1;
    VAR_6 = FUNC_1(VAR_5);
    FUNC_5(VAR_6 == VAR_1, "got 0x%08x\n", VAR_6);
    FUNC_5(VAR_3 == 0, "got %d\n", VAR_3);


    VAR_3 = 1;
    FUNC_2(VAR_5);
    FUNC_5(VAR_3 == 0, "got %d\n", VAR_3);
}
