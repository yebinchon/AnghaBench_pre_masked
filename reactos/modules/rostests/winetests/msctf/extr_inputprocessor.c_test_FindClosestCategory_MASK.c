
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HRESULT ;
typedef int GUID ;


 int VAR_0 ;
 int const VAR_1 ;
 int const VAR_2 ;
 int const VAR_3 ;
 int const VAR_4 ;
 int const VAR_5 ;
 int FUNC_0 (int ,int *,int *,int const**,int) ;
 int FUNC_1 (int *,int const*) ;
 int FUNC_2 (int ) ;
 int VAR_6 ;
 int FUNC_3 (int ,char*,...) ;

__attribute__((used)) static void FUNC_4(void)
{
    GUID VAR_7;
    HRESULT VAR_8;
    const GUID *VAR_9[3] = {&VAR_5, &VAR_4, &VAR_3};

    VAR_8 = FUNC_0(VAR_6, &VAR_0, &VAR_7, ((void*)0), 0);
    FUNC_3(FUNC_2(VAR_8),"ITfCategoryMgr_FindClosestCategory failed (%x)\n",VAR_8);
    FUNC_3(FUNC_1(&VAR_7,&VAR_2),"Wrong GUID\n");

    VAR_8 = FUNC_0(VAR_6, &VAR_0, &VAR_7, VAR_9, 1);
    FUNC_3(FUNC_2(VAR_8),"ITfCategoryMgr_FindClosestCategory failed (%x)\n",VAR_8);
    FUNC_3(FUNC_1(&VAR_7,&VAR_1),"Wrong GUID\n");

    VAR_8 = FUNC_0(VAR_6, &VAR_0, &VAR_7, VAR_9, 3);
    FUNC_3(FUNC_2(VAR_8),"ITfCategoryMgr_FindClosestCategory failed (%x)\n",VAR_8);
    FUNC_3(FUNC_1(&VAR_7,&VAR_4),"Wrong GUID\n");
}
