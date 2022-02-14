
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct promptdisk_params {int* PathRequiredSize; int PathBufferSize; int PathBuffer; } ;
typedef int WCHAR ;
typedef int HWND ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int *,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(HWND VAR_5, struct promptdisk_params *VAR_6)
{
    int VAR_7;
    WCHAR VAR_8[VAR_3];
    FUNC_2(FUNC_1(VAR_5, VAR_2), VAR_8, VAR_3);
    VAR_7 = FUNC_6(VAR_8)+1;

    if(VAR_6->PathRequiredSize)
    {
        *VAR_6->PathRequiredSize = VAR_7;
        FUNC_3("returning PathRequiredSize=%d\n",*VAR_6->PathRequiredSize);
    }
    if(!VAR_6->PathBuffer)
    {
        FUNC_0(VAR_5, VAR_4);
        return;
    }
    if(VAR_7 > VAR_6->PathBufferSize)
    {
        FUNC_0(VAR_5, VAR_0);
        return;
    }
    FUNC_5(VAR_6->PathBuffer, VAR_8);
    FUNC_3("returning PathBuffer=%s\n", FUNC_4(VAR_6->PathBuffer));
    FUNC_0(VAR_5, VAR_1);
}
