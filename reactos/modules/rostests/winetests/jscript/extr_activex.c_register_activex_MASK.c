
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
 scalar_t__ FUNC_0 (int *,int *,int ,int ,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,char*,scalar_t__) ;

__attribute__((used)) static BOOL FUNC_3(void)
{
    DWORD VAR_7;
    HRESULT VAR_8;

    if(!FUNC_1(VAR_5)) {
        FUNC_1(VAR_2);
        return VAR_2;
    }

    VAR_8 = FUNC_0(&VAR_1, (IUnknown *)&VAR_6,
                                 VAR_0, VAR_3, &VAR_7);
    FUNC_2(VAR_8 == VAR_4, "Could not register script engine: %08x\n", VAR_8);

    return VAR_5;
}
