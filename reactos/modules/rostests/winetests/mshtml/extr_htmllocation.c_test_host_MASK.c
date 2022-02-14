
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct location_test {scalar_t__ host; int name; } ;
typedef int IHTMLLocation ;
typedef scalar_t__ HRESULT ;
typedef int BSTR ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,char*,int ,scalar_t__,...) ;
 int FUNC_3 (int ,scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(IHTMLLocation *VAR_2, const struct location_test *VAR_3)
{
    HRESULT VAR_4;
    BSTR VAR_5;

    VAR_4 = FUNC_0(VAR_2, ((void*)0));
    FUNC_2(VAR_4 == VAR_0,
            "%s: get_host should have failed with E_POINTER (0x%08x), was: 0x%08x\n",
            VAR_3->name, VAR_0, VAR_4);

    VAR_4 = FUNC_0(VAR_2, &VAR_5);
    FUNC_2(VAR_4 == VAR_1, "%s: get_host failed: 0x%08x\n", VAR_3->name, VAR_4);
    if(VAR_4 == VAR_1)
        FUNC_2(FUNC_3(VAR_5, VAR_3->host),
                "%s: expected retrieved host to be L\"%s\", was: %s\n",
                VAR_3->name, VAR_3->host, FUNC_4(VAR_5));
    FUNC_1(VAR_5);
}
