
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PNTFS_VCB ;
typedef int * PNTFS_FCB ;


 int * FUNC_0 (int ,char*) ;
 int * FUNC_1 (int ) ;

PNTFS_FCB
FUNC_2(PNTFS_VCB VAR_0)
{
    PNTFS_FCB VAR_1;

    VAR_1 = FUNC_0(VAR_0, L"\\");
    if (VAR_1 == ((void*)0))
    {
        VAR_1 = FUNC_1(VAR_0);
    }

    return VAR_1;
}
