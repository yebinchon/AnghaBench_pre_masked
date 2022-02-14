
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int DWORD ;


 scalar_t__ FUNC_0 (int const,int const) ;
 int FUNC_1 (char*,int const,int const,int) ;

__attribute__((used)) static DWORD FUNC_2(const WCHAR *VAR_0, unsigned int VAR_1, unsigned int VAR_2)
{
    if (VAR_1 < VAR_2-1 && FUNC_0(VAR_0[VAR_1],VAR_0[VAR_1+1]))
    {
        DWORD VAR_3 = 0x10000 + ((VAR_0[VAR_1] - 0xd800) << 10) + (VAR_0[VAR_1+1] - 0xdc00);
        FUNC_1("Surrogate Pair %x %x => %x\n",VAR_0[VAR_1], VAR_0[VAR_1+1], VAR_3);
        return VAR_3;
    }
    return 0;
}
