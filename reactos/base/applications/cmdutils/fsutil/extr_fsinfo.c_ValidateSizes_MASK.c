
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;
typedef int FILESYSTEM_STATISTICS ;
typedef int DWORD ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ,int,int) ;
 int VAR_0 ;

inline int
FUNC_2(ULONG VAR_1, DWORD VAR_2, DWORD VAR_3, DWORD VAR_4)
{

    if (VAR_1 * VAR_2 > VAR_3)
    {
        FUNC_1(VAR_0, FUNC_0("Only performed a partial read: %lu (expected: %lu)\n"), VAR_3, VAR_1 * VAR_2);
        return 1;
    }


    if ((sizeof(FILESYSTEM_STATISTICS) + VAR_4) * VAR_2 > VAR_3)
    {
        FUNC_1(VAR_0, FUNC_0("Only performed a partial read: %lu (expected: %Iu)\n"), VAR_3, (sizeof(FILESYSTEM_STATISTICS) + VAR_4));
        return 1;
    }

    return 0;
}
