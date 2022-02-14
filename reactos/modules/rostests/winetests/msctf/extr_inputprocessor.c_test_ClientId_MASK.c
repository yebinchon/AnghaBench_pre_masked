
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ TfClientId ;
typedef int LPVOID ;
typedef int ITfClientId ;
typedef int HRESULT ;
typedef int GUID ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int *,scalar_t__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *,int *) ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int,char*) ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static void FUNC_6(void)
{
    ITfClientId *VAR_6;
    TfClientId VAR_7,VAR_8;
    HRESULT VAR_9;
    GUID VAR_10;

    VAR_9 = FUNC_3(VAR_4, &VAR_2, (LPVOID*)&VAR_6);
    FUNC_5(FUNC_4(VAR_9),"Unable to acquire ITfClientId interface\n");

    FUNC_0(&VAR_10);

    VAR_9 = FUNC_1(VAR_6,&VAR_1,&VAR_7);
    FUNC_5(FUNC_4(VAR_9),"GetClientId failed\n");
    VAR_9 = FUNC_1(VAR_6,&VAR_1,&VAR_8);
    FUNC_5(FUNC_4(VAR_9),"GetClientId failed\n");
    FUNC_5(VAR_7==VAR_8,"Id's for GUID_NULL do not match\n");
    VAR_9 = FUNC_1(VAR_6,&VAR_0,&VAR_8);
    FUNC_5(FUNC_4(VAR_9),"GetClientId failed\n");
    FUNC_5(VAR_8!=VAR_7,"Id matches GUID_NULL\n");
    FUNC_5(VAR_8==VAR_5,"Id for CLSID_FakeService not matching tid\n");
    FUNC_5(VAR_8!=VAR_3,"Id for CLSID_FakeService matching cid\n");
    VAR_9 = FUNC_1(VAR_6,&VAR_10,&VAR_8);
    FUNC_5(FUNC_4(VAR_9),"GetClientId failed\n");
    FUNC_5(VAR_8!=VAR_7,"Id matches GUID_NULL\n");
    FUNC_5(VAR_8!=VAR_5,"Id for random guid matching tid\n");
    FUNC_5(VAR_8!=VAR_3,"Id for random guid matching cid\n");
    FUNC_2(VAR_6);
}
