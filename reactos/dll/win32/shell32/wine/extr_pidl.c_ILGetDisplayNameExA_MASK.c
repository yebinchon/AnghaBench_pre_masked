
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int LPSTR ;
typedef int LPSHELLFOLDER ;
typedef int LPCITEMIDLIST ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int *,int ) ;
 int VAR_2 ;
 int FUNC_1 (char*,int ,int ,int ,...) ;
 int FUNC_2 (int ,int ,int *,int,int ,int,int *,int *) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static BOOL FUNC_4(LPSHELLFOLDER VAR_3, LPCITEMIDLIST VAR_4, LPSTR VAR_5, DWORD VAR_6)
{
    BOOL VAR_7 = VAR_1;
    WCHAR VAR_8[VAR_2];

    FUNC_1("%p %p %p %d\n", VAR_3, VAR_4, VAR_5, VAR_6);

    if (!VAR_4 || !VAR_5)
        return VAR_1;

    VAR_7 = FUNC_0(VAR_3, VAR_4, VAR_8, VAR_6);
    FUNC_2(VAR_0, 0, VAR_8, -1, VAR_5, VAR_2, ((void*)0), ((void*)0));
    FUNC_1("%p %p %s\n", VAR_3, VAR_4, FUNC_3(VAR_5));

    return VAR_7;
}
