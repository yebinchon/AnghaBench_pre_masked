
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int strA ;
typedef int WCHAR ;
typedef int ULONG ;
typedef scalar_t__ REFGUID ;
typedef int ITfCompartmentMgr ;
typedef int IEnumGUID ;
typedef int GUID ;
typedef int CHAR ;
typedef int BOOL ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *,int,int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int **) ;
 scalar_t__ FUNC_4 (scalar_t__,int *) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_6 (int *,int *,int ) ;
 int VAR_3 ;
 int FUNC_7 (int ,int ,int *,int,int *,int,int ,int ) ;
 int FUNC_8 (int,char*) ;
 int FUNC_9 (char*,int *) ;

__attribute__((used)) static void FUNC_10(ITfCompartmentMgr *VAR_4, REFGUID VAR_5, REFGUID VAR_6)
{
    BOOL VAR_7,VAR_8;
    IEnumGUID *VAR_9;
    VAR_7 = VAR_1;
    VAR_8 = VAR_1;
    if (FUNC_5(FUNC_3(VAR_4, &VAR_9)))
    {
        ULONG VAR_10;
        GUID VAR_11;
        while (FUNC_1(VAR_9, 1, &VAR_11, &VAR_10) == VAR_2)
        {
            WCHAR VAR_12[50];
            CHAR VAR_13[50];
            FUNC_6(&VAR_11,VAR_12,FUNC_0(VAR_12));
            FUNC_7(VAR_0,0,VAR_12,-1,VAR_13,sizeof(VAR_13),0,0);
            FUNC_9("found %s\n",VAR_13);
            if (VAR_5 && FUNC_4(VAR_5,&VAR_11))
                VAR_7 = VAR_3;
            if (VAR_6 && FUNC_4(VAR_6, &VAR_11))
                VAR_8 = VAR_3;
        }
        FUNC_2(VAR_9);
    }
    if (VAR_5)
        FUNC_8(VAR_7,"Did not find compartment\n");
    if (VAR_6)
        FUNC_8(!VAR_8,"Found compartment that should be absent\n");
}
