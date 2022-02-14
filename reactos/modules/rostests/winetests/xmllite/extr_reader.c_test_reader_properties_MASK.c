
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LONG_PTR ;
typedef int IXmlReader ;
typedef int HRESULT ;


 int FUNC_0 (int *,void**,int *) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ,int*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int,char*,int) ;

__attribute__((used)) static void FUNC_5(void)
{
    IXmlReader *VAR_4;
    LONG_PTR VAR_5;
    HRESULT VAR_6;

    VAR_6 = FUNC_0(&VAR_0, (void**)&VAR_4, ((void*)0));
    FUNC_4(VAR_6 == VAR_1, "S_OK, got %08x\n", VAR_6);

    VAR_5 = 0;
    VAR_6 = FUNC_1(VAR_4, VAR_2, &VAR_5);
    FUNC_4(VAR_6 == VAR_1, "GetProperty failed: %08x\n", VAR_6);
    FUNC_4(VAR_5 == 256, "Unexpected default max depth value %ld\n", VAR_5);

    VAR_6 = FUNC_3(VAR_4, VAR_3, 0);
    FUNC_4(VAR_6 == VAR_1, "SetProperty failed: %08x\n", VAR_6);

    VAR_6 = FUNC_3(VAR_4, VAR_2, 0);
    FUNC_4(VAR_6 == VAR_1, "SetProperty failed: %08x\n", VAR_6);

    VAR_5 = 256;
    VAR_6 = FUNC_1(VAR_4, VAR_2, &VAR_5);
    FUNC_4(VAR_6 == VAR_1, "GetProperty failed: %08x\n", VAR_6);
    FUNC_4(VAR_5 == 0, "Unexpected max depth value %ld\n", VAR_5);

    FUNC_2(VAR_4);
}
