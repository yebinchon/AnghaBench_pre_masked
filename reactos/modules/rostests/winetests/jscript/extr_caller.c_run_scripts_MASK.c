
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IActiveScriptParse ;
typedef scalar_t__ HRESULT ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *,int *,void**) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ VAR_1 ;
 int * FUNC_6 () ;
 int FUNC_7 (int,char*,scalar_t__) ;
 int FUNC_8 (int *,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_9 (int ,int ) ;

__attribute__((used)) static void FUNC_10(void)
{
    IActiveScriptParse *VAR_5;
    HRESULT VAR_6;

    VAR_5 = FUNC_6();

    VAR_6 = FUNC_1(VAR_5, &VAR_0, (void**)&VAR_2);
    FUNC_7(VAR_6 == VAR_1, "Could not get IVariantChangeType iface: %08x\n", VAR_6);

    FUNC_5(VAR_4);
    FUNC_8(VAR_5,
                   "var obj = {"
                   "    toString: function() { return 'strval'; },"
                   "    valueOf: function()  { return 10; }"
                   "};"
                   "testArgConv(obj);");
    FUNC_0(VAR_4);

    FUNC_9(VAR_2, VAR_3);
    FUNC_3(VAR_3);
    FUNC_4(VAR_2);

    FUNC_2(VAR_5);
}
