
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct location_test {scalar_t__ href; int name; } ;
typedef int IHTMLLocation ;
typedef scalar_t__ HRESULT ;
typedef int BSTR ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,char*,int ,scalar_t__,...) ;
 int FUNC_4 (int ,scalar_t__) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(IHTMLLocation *VAR_2, const struct location_test *VAR_3)
{
    HRESULT VAR_4;
    BSTR VAR_5;

    VAR_4 = FUNC_0(VAR_2, ((void*)0));
    FUNC_3(VAR_4 == VAR_0,
            "%s: get_href should have failed with E_POINTER (0x%08x), was: 0x%08x\n",
            VAR_3->name, VAR_0, VAR_4);

    VAR_4 = FUNC_0(VAR_2, &VAR_5);
    FUNC_3(VAR_4 == VAR_1, "%s: get_href failed: 0x%08x\n", VAR_3->name, VAR_4);
    if(VAR_4 == VAR_1)
        FUNC_3(FUNC_4(VAR_5, VAR_3->href),
                "%s: expected retrieved href to be L\"%s\", was: %s\n",
                VAR_3->name, VAR_3->href, FUNC_5(VAR_5));
    FUNC_2(VAR_5);

    VAR_4 = FUNC_1(VAR_2, &VAR_5);
    FUNC_3(VAR_4 == VAR_1, "%s: toString failed: 0x%08x\n", VAR_3->name, VAR_4);
    FUNC_3(FUNC_4(VAR_5, VAR_3->href), "%s: toString returned %s, expected %s\n",
       VAR_3->name, FUNC_5(VAR_5), VAR_3->href);
    FUNC_2(VAR_5);
}
