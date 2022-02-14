
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IShellView ;
typedef int IShellFolder ;
typedef int IOleWindow ;
typedef scalar_t__ HRESULT ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int *,int *,int *,void**) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int *,int *,void**) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int **) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (int,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_7(void)
{
    IShellFolder *VAR_7;
    IShellView *VAR_8;
    IOleWindow *VAR_9;
    HRESULT VAR_10;

    VAR_10 = FUNC_5(&VAR_7);
    FUNC_6(VAR_10 == VAR_5, "got (0x%08x)\n", VAR_10);

    VAR_10 = FUNC_0(VAR_7, ((void*)0), &VAR_4, (void**)&VAR_8);
    FUNC_6(VAR_10 == VAR_5, "got (0x%08x)\n", VAR_10);

    VAR_10 = FUNC_3(VAR_8, &VAR_3, (void**)&VAR_9);
    FUNC_6(VAR_10 == VAR_0, "got (0x%08x)\n", VAR_10);


    VAR_10 = FUNC_2(VAR_8, VAR_6);
    FUNC_6(VAR_10 == VAR_1, "got (0x%08x)\n", VAR_10);
    VAR_10 = FUNC_2(VAR_8, VAR_2);
    FUNC_6(VAR_10 == VAR_1, "got (0x%08x)\n", VAR_10);

    FUNC_4(VAR_8);
    FUNC_1(VAR_7);
}
