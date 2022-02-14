
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int * LPITEMIDLIST ;
typedef char CHAR ;
typedef scalar_t__ BOOL ;


 scalar_t__ FUNC_0 (char const*,int *) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (char const*) ;
 int * FUNC_5 (char const*) ;
 scalar_t__ VAR_0 ;
 int FUNC_6 (int,char*,int ) ;
 int FUNC_7 (int *,char const*) ;

__attribute__((used)) static void FUNC_8(void)
{
    const WCHAR VAR_1[] = {'C',':','\\','s','i','d','l','f','p','d','i','r',0};
    const CHAR VAR_2[] = "C:\\sidlfpdir";
    BOOL VAR_3, VAR_4 = !(FUNC_2() & 0x80000000);

    LPITEMIDLIST VAR_5 = ((void*)0);

    VAR_3 = FUNC_0(VAR_2, ((void*)0));
    FUNC_6(VAR_3 == VAR_0, "CreateDirectory failed: %d\n", FUNC_1());

    if(VAR_4)
        VAR_5 = FUNC_5(VAR_1);
    else
        VAR_5 = FUNC_5((const WCHAR *)VAR_2);
    FUNC_7(VAR_5, VAR_1);
    FUNC_3(VAR_5);

    VAR_3 = FUNC_4(VAR_2);
    FUNC_6(VAR_3 == VAR_0, "RemoveDirectory failed: %d\n", FUNC_1());

    if(VAR_4)
        VAR_5 = FUNC_5(VAR_1);
    else
        VAR_5 = FUNC_5((const WCHAR *)VAR_2);
    FUNC_7(VAR_5, VAR_1);
    FUNC_3(VAR_5);
}
