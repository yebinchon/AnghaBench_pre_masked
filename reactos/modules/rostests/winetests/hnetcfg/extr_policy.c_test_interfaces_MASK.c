
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int INetFwPolicy2 ;
typedef int INetFwPolicy ;
typedef int INetFwMgr ;
typedef scalar_t__ HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *,int *,int,int *,void**) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (int *,int *,void**) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int **) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int *,void**) ;
 int FUNC_6 (int *) ;
 scalar_t__ VAR_8 ;
 int FUNC_7 (int,char*,scalar_t__) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (char*,scalar_t__) ;

__attribute__((used)) static void FUNC_10(void)
{
    INetFwMgr *VAR_9;
    INetFwPolicy *VAR_10;
    INetFwPolicy2 *VAR_11;
    HRESULT VAR_12;

    VAR_12 = FUNC_0(&VAR_2, ((void*)0), VAR_1|VAR_0,
            &VAR_5, (void**)&VAR_9);
    FUNC_7(VAR_12 == VAR_8, "NetFwMgr create failed: %08x\n", VAR_12);

    VAR_12 = FUNC_1(VAR_9, &VAR_6, (void**)&VAR_10);
    FUNC_7(VAR_12 == VAR_4, "got 0x%08x\n", VAR_12);

    VAR_12 = FUNC_1(VAR_9, &VAR_7, (void**)&VAR_11);
    FUNC_7(VAR_12 == VAR_4, "got 0x%08x\n", VAR_12);

    VAR_12 = FUNC_3(VAR_9, &VAR_10);
    FUNC_7(VAR_12 == VAR_8, "got 0x%08x\n", VAR_12);

    VAR_12 = FUNC_5(VAR_10, &VAR_7, (void**)&VAR_11);
    FUNC_7(VAR_12 == VAR_4, "got 0x%08x\n", VAR_12);

    FUNC_6(VAR_10);

    VAR_12 = FUNC_0(&VAR_3, ((void*)0), VAR_1|VAR_0,
            &VAR_7, (void**)&VAR_11);
    if(VAR_12 == VAR_8)
    {
        FUNC_8(VAR_11);

        FUNC_4(VAR_11);
    }
    else
        FUNC_9("NetFwPolicy2 object is not supported: %08x\n", VAR_12);

    FUNC_2(VAR_9);
}
