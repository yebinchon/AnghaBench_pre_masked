
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IHTMLDocument5 ;
typedef int IHTMLDocument2 ;
typedef scalar_t__ HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,int *,int,int *,void**) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int *,int *,void**) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_5 (int,char*,scalar_t__) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static IHTMLDocument2 *FUNC_7(void)
{
    IHTMLDocument2 *VAR_6;
    IHTMLDocument5 *VAR_7;
    HRESULT VAR_8;

    VAR_8 = FUNC_0(&VAR_2, ((void*)0), VAR_1|VAR_0,
            &VAR_3, (void**)&VAR_6);
    FUNC_5(VAR_8 == VAR_5, "CoCreateInstance failed: %08x\n", VAR_8);
    if(FUNC_1(VAR_8))
        return ((void*)0);

    VAR_8 = FUNC_2(VAR_6, &VAR_4, (void**)&VAR_7);
    if(FUNC_1(VAR_8)) {
        FUNC_6("Could not get IHTMLDocument5, probably too old IE\n");
        FUNC_3(VAR_6);
        return ((void*)0);
    }

    FUNC_4(VAR_7);
    return VAR_6;
}
