
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef float WCHAR ;
typedef int HRESULT ;


 int FUNC_0 (float const*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *,int ,int *,float const*,int ,float const*,int ,int) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (char*,int ) ;

__attribute__((used)) static void FUNC_8(void)
{
    HRESULT VAR_3;

    static const WCHAR VAR_4[] = {'F','a','k','e',' ','W','i','n','e',' ','S','e','r','v','i','c','e',0};
    static const WCHAR VAR_5[] = {'F','a','k','e',' ','W','i','n','e',' ','S','e','r','v','i','c','e',' ','F','i','l','e',0};

    VAR_3 = FUNC_2(VAR_2,&VAR_1);
    FUNC_6(FUNC_5(VAR_3),"Unable to get current language id\n");
    FUNC_7("Current Language %x\n",VAR_1);

    VAR_3 = FUNC_4(&VAR_0);
    FUNC_6(FUNC_5(VAR_3),"Unable to register COM for TextService\n");
    VAR_3 = FUNC_3(VAR_2, &VAR_0);
    FUNC_6(FUNC_5(VAR_3),"Unable to register text service(%x)\n",VAR_3);
    VAR_3 = FUNC_1(VAR_2, &VAR_0, VAR_1,
            &VAR_0, VAR_4, FUNC_0(VAR_4), VAR_5, FUNC_0(VAR_5), 1);
    FUNC_6(FUNC_5(VAR_3),"Unable to add Language Profile (%x)\n",VAR_3);
}
