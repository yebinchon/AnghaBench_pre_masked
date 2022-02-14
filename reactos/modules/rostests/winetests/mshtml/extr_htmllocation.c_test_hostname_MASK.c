
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct location_test {char* hostname; int name; } ;
typedef int IHTMLLocation ;
typedef int IHTMLDocument2 ;
typedef scalar_t__ HRESULT ;
typedef int BSTR ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,char*,int ,scalar_t__,...) ;
 int FUNC_4 (int ,char*) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(IHTMLLocation *VAR_2, IHTMLDocument2 *VAR_3, const struct location_test *VAR_4)
{
    HRESULT VAR_5;
    BSTR VAR_6;

    VAR_5 = FUNC_1(VAR_2, ((void*)0));
    FUNC_3(VAR_5 == VAR_0,
            "%s: get_hostname should have failed with E_POINTER (0x%08x), was: 0x%08x\n",
            VAR_4->name, VAR_0, VAR_5);

    VAR_5 = FUNC_1(VAR_2, &VAR_6);
    FUNC_3(VAR_5 == VAR_1, "%s: get_hostname failed: 0x%08x\n", VAR_4->name, VAR_5);
    if(VAR_5 == VAR_1)
        FUNC_3(FUNC_4(VAR_6, VAR_4->hostname),
                "%s: expected retrieved hostname to be L\"%s\", was: %s\n",
                VAR_4->name, VAR_4->hostname, FUNC_5(VAR_6));
    FUNC_2(VAR_6);

    VAR_5 = FUNC_0(VAR_3, &VAR_6);
    FUNC_3(VAR_5 == VAR_1, "%s: get_domain failed: 0x%08x\n", VAR_4->name, VAR_5);
    if(VAR_5 == VAR_1)
        FUNC_3(FUNC_4(VAR_6, VAR_4->hostname ? VAR_4->hostname : ""),
                "%s: expected retrieved domain to be L\"%s\", was: %s\n",
                VAR_4->name, VAR_4->hostname, FUNC_5(VAR_6));
    FUNC_2(VAR_6);
}
