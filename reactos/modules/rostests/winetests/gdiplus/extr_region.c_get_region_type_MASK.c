
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GpRegion ;
typedef scalar_t__ DWORD ;
typedef int BYTE ;


 scalar_t__* FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__*) ;
 scalar_t__ FUNC_2 (int *,int *,scalar_t__,int *) ;
 scalar_t__ FUNC_3 (int *,scalar_t__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (scalar_t__,scalar_t__) ;
 int FUNC_5 (int,char*,scalar_t__) ;

__attribute__((used)) static DWORD FUNC_6(GpRegion *VAR_2)
{
    DWORD *VAR_3;
    DWORD VAR_4;
    DWORD VAR_5;
    DWORD VAR_6;
    VAR_6 = FUNC_3(VAR_2, &VAR_4);
    FUNC_4(VAR_1, VAR_6);
    VAR_3 = FUNC_0(VAR_4);
    VAR_6 = FUNC_2(VAR_2, (BYTE*)VAR_3, VAR_4, ((void*)0));
    FUNC_5(VAR_6 == VAR_1 || VAR_6 == VAR_0, "unexpected status 0x%x\n", VAR_6);
    VAR_5 = VAR_3[4];
    FUNC_1(VAR_3);
    return VAR_5;
}
