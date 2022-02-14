
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef scalar_t__ HRESULT ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int *,int *,int ,int *,char const*,int *) ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (int,char*,scalar_t__) ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_4(void)
{
    static const WCHAR VAR_8[] = {'l','o','c','a','t','i','o','n',0};
    HRESULT VAR_9;

    VAR_9 = FUNC_1(((void*)0), ((void*)0), VAR_3, &VAR_5, VAR_8, ((void*)0));
    FUNC_3(VAR_9 == VAR_0, "got 0x%08x\n", VAR_9);

    FUNC_2(VAR_1);
    VAR_9 = FUNC_1(((void*)0), &VAR_4, VAR_3, &VAR_5, VAR_8, ((void*)0));
    FUNC_3(VAR_9 == VAR_6, "got 0x%08x\n", VAR_9);
    FUNC_0(VAR_1);

    FUNC_2(VAR_2);
    VAR_9 = FUNC_1(&VAR_7, &VAR_4, VAR_3, &VAR_5, VAR_8, ((void*)0));
    FUNC_3(VAR_9 == VAR_6, "got 0x%08x\n", VAR_9);
    FUNC_0(VAR_2);
}
