
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT32 ;
typedef int HDC ;
typedef int DWORD ;


 int FUNC_0 (int ,int ,int ,int,int,int ,int ,int ,int ) ;
 int FUNC_1 (int,char*,int ,int,int,int) ;

__attribute__((used)) static void FUNC_2(HDC VAR_0, HDC VAR_1, UINT32 *VAR_2, UINT32 *VAR_3,
                               DWORD VAR_4, UINT32 VAR_5, int VAR_6)
{
    *VAR_3 = 0xFEDCBA98;
    *VAR_2 = 0x89ABCDEF;
    FUNC_0(VAR_0, 0, 0, 1, 1, VAR_1, 0, 0, VAR_4);
    FUNC_1(VAR_5 == *VAR_2,
        "BitBlt with dwRop %06X. Expected 0x%08X, got 0x%08X from line %d\n",
        VAR_4, VAR_5, *VAR_2, VAR_6);
}
