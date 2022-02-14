
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;
typedef int UCHAR ;


 int FUNC_0 (char*,char*,int const) ;

__attribute__((used)) static void FUNC_1(const UCHAR *VAR_0, ULONG VAR_1, char *VAR_2)
{
    ULONG VAR_3;
    VAR_2[0] = '\0';
    for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
    {
        FUNC_0(VAR_2 + VAR_3 * 2, "%02x", VAR_0[VAR_3]);
    }
    return;
}
