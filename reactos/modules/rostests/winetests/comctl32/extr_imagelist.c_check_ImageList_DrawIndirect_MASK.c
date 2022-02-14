
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT32 ;
typedef int IMAGELISTDRAWPARAMS ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int ,char*,int,int,int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(IMAGELISTDRAWPARAMS *VAR_0, UINT32 *VAR_1,
                                         UINT32 VAR_2, int VAR_3)
{
    VAR_1[0] = 0x00FFFFFF;
    FUNC_2(VAR_0);
    FUNC_1(FUNC_0(VAR_1[0], VAR_2),
       "ImageList_DrawIndirect: Pixel %08X, Expected a close match to %08X from line %d\n",
       VAR_1[0] & 0x00FFFFFF, VAR_2, VAR_3);
}
