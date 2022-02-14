
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IStream ;
typedef int IDropTarget ;
typedef int HWND ;
typedef int HANDLE ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *,void**) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,int **) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static IDropTarget* FUNC_6(HWND VAR_1)
{
    IDropTarget *VAR_2 = ((void*)0);
    HANDLE VAR_3;
    IStream *VAR_4;

    VAR_3 = FUNC_5(VAR_1);
    if(!VAR_3) return ((void*)0);

    if(FUNC_3(FUNC_4(VAR_3, &VAR_4)))
    {
        FUNC_1(VAR_4, &VAR_0, (void**)&VAR_2);
        FUNC_2(VAR_4);
    }
    FUNC_0(VAR_3);
    return VAR_2;
}
