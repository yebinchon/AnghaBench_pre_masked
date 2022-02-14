
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IUnknown ;
typedef scalar_t__ HRESULT ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,int *,int ,int ,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,char*,scalar_t__) ;
 int VAR_8 ;

__attribute__((used)) static BOOL FUNC_3(void)
{
    DWORD VAR_9;
    HRESULT VAR_10;

    if(!FUNC_1(VAR_6)) {
        FUNC_1(VAR_3);
        return VAR_3;
    }

    VAR_10 = FUNC_0(&VAR_1, (IUnknown *)&VAR_7,
                                 VAR_0, VAR_4, &VAR_9);
    FUNC_2(VAR_10 == VAR_5, "Could not register script engine: %08x\n", VAR_10);

    VAR_10 = FUNC_0(&VAR_2, (IUnknown *)&VAR_8,
                                 VAR_0, VAR_4, &VAR_9);
    FUNC_2(VAR_10 == VAR_5, "Could not register script engine: %08x\n", VAR_10);

    return VAR_6;
}
