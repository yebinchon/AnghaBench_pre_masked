
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long ULONGLONG ;
typedef int DWORD ;
typedef int CHAR ;


 int FUNC_0 (int*,int) ;
 int VAR_0 ;

__attribute__((used)) static __inline CHAR
FUNC_1()
{

    static DWORD VAR_1 = 1;

    DWORD VAR_2 = 0;
    DWORD VAR_3;


    VAR_1 = (DWORD)(((ULONGLONG)VAR_1 * 48271UL) % 2147483647UL);


    VAR_3 = VAR_1 >> (31 - VAR_0);


    if (VAR_3)
    {


        FUNC_0(&VAR_2, VAR_3);
    }


    return (CHAR)VAR_2;
}
