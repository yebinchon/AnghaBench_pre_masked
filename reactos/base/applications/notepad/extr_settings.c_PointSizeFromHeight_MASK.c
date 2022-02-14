
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LONG ;
typedef int HDC ;
typedef int DWORD ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,int,int ) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static DWORD FUNC_4(LONG VAR_1)
{
    DWORD VAR_2;
    HDC VAR_3;

    VAR_3 = FUNC_0(((void*)0));
    VAR_2 = -FUNC_2(VAR_1, 720, FUNC_1(VAR_3, VAR_0));
    FUNC_3(((void*)0), VAR_3);


    VAR_2 += 5;
    VAR_2 -= VAR_2 % 10;

    return VAR_2;
}
