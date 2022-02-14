
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int clsid3 ;
typedef int clsid2 ;
typedef int clsid ;
typedef int IUnknown ;
typedef int HRESULT ;
typedef int CLSID ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,int,int) ;
 int FUNC_3 (int,char*,int) ;
 int FUNC_4 (int *,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(void)
{
    CLSID VAR_4, VAR_5, VAR_6;
    HRESULT VAR_7;

    if (0)
        VAR_7 = FUNC_4(((void*)0), ((void*)0));

    FUNC_2(&VAR_4, 0xcc, sizeof(VAR_4));
    FUNC_2(&VAR_6, 0xcc, sizeof(VAR_6));
    VAR_7 = FUNC_4(((void*)0), &VAR_4);
    FUNC_3(VAR_7 == VAR_1, "got 0x%08x\n", VAR_7);
    FUNC_3(FUNC_0(&VAR_4, &VAR_0) || FUNC_1(FUNC_0(&VAR_4, &VAR_6)) ,
        "got wrong clsid %s\n", FUNC_5(&VAR_4));

    FUNC_2(&VAR_4, 0xcc, sizeof(VAR_4));
    FUNC_2(&VAR_5, 0xab, sizeof(VAR_5));
    VAR_7 = FUNC_4((IUnknown*)&VAR_2, &VAR_4);
    FUNC_3(VAR_7 == 0x8fff2222, "got 0x%08x\n", VAR_7);
    FUNC_3(FUNC_0(&VAR_4, &VAR_5) || FUNC_1(FUNC_0(&VAR_4, &VAR_6)) ,
        "got wrong clsid %s\n", FUNC_5(&VAR_4));


    FUNC_2(&VAR_4, 0xcc, sizeof(VAR_4));
    FUNC_2(&VAR_5, 0xab, sizeof(VAR_5));
    FUNC_2(&VAR_6, 0xcc, sizeof(VAR_6));
    VAR_7 = FUNC_4((IUnknown*)&VAR_3, &VAR_4);
    FUNC_3(VAR_7 == 0x8fff2222, "got 0x%08x\n", VAR_7);
    FUNC_3(FUNC_0(&VAR_4, &VAR_5) || FUNC_1(FUNC_0(&VAR_4, &VAR_6)) ,
        "got wrong clsid %s\n", FUNC_5(&VAR_4));
}
