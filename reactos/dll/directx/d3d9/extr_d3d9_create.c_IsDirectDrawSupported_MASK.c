
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HDC ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;
 int VAR_2 ;
 int FUNC_2 (int *,int ) ;
 int VAR_3 ;

__attribute__((used)) static BOOL FUNC_3()
{
    HDC VAR_4;
    DWORD VAR_5;
    DWORD VAR_6;

    VAR_4 = FUNC_0(((void*)0));
    VAR_5 = FUNC_1(VAR_4, VAR_2);
    VAR_6 = FUNC_1(VAR_4, VAR_0);
    FUNC_2(((void*)0), VAR_4);

    if (VAR_5 * VAR_6 < 8)
        return VAR_1;

    return VAR_3;
}
