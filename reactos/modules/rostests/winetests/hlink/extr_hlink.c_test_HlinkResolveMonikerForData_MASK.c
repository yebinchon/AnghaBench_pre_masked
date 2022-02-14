
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IBindCtx ;
typedef scalar_t__ HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int **) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int *,int ,int *,int ,int *,int *,int *) ;
 int FUNC_3 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_5 ;
 int * VAR_6 ;
 int FUNC_5 (int,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_6(void)
{
    IBindCtx *VAR_7;
    HRESULT VAR_8;

    FUNC_1(0, &VAR_7);
    VAR_6 = VAR_7;

    FUNC_4(VAR_3);
    FUNC_4(VAR_2);
    FUNC_4(VAR_1);

    VAR_8 = FUNC_2(&VAR_4, 0, VAR_7, 0, ((void*)0), &VAR_0, ((void*)0));
    FUNC_5(VAR_8 == VAR_5, "HlinkResolveMonikerForData failed: %08x\n", VAR_8);

    FUNC_0(VAR_3);
    FUNC_0(VAR_2);
    FUNC_0(VAR_1);

    FUNC_3(VAR_7);
    VAR_6 = ((void*)0);
}
