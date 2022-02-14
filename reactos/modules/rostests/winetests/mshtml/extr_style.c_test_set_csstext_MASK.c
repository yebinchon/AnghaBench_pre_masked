
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VARIANT ;
typedef int IHTMLStyle ;
typedef scalar_t__ HRESULT ;


 scalar_t__ FUNC_0 (int *,int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int,char*,scalar_t__) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int *,char*) ;
 scalar_t__ FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(IHTMLStyle *VAR_2)
{
    VARIANT VAR_3;
    HRESULT VAR_4;

    FUNC_6(VAR_2, "background-color: black;");

    VAR_4 = FUNC_0(VAR_2, &VAR_3);
    FUNC_4(VAR_4 == VAR_0, "get_backgroundColor: %08x\n", VAR_4);
    FUNC_4(FUNC_2(&VAR_3) == VAR_1, "type failed: %d\n", FUNC_2(&VAR_3));
    FUNC_4(!FUNC_5(FUNC_1(&VAR_3), "black"), "str=%s\n", FUNC_7(FUNC_1(&VAR_3)));
    FUNC_3(&VAR_3);
}
