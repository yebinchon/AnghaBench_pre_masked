
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WINTRUST_DATA ;
typedef int LONG ;
typedef int HWND ;
typedef int GUID ;


 int FUNC_0 (char*,int ,...) ;
 int FUNC_1 (int ,int *,int *) ;
 int FUNC_2 (int ,int *,int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static LONG FUNC_4(HWND VAR_0, GUID *VAR_1,
 WINTRUST_DATA *VAR_2)
{
    LONG VAR_3;

    FUNC_0("(%p, %s, %p)\n", VAR_0, FUNC_3(VAR_1), VAR_2);

    VAR_3 = FUNC_2(VAR_0, VAR_1, VAR_2);
    FUNC_1(VAR_0, VAR_1, VAR_2);
    FUNC_0("returning %08x\n", VAR_3);
    return VAR_3;
}
