
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IUri ;
typedef int HRESULT ;
typedef int DWORD ;
typedef int BOOL ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int*) ;
 int VAR_1 ;







__attribute__((used)) static BOOL FUNC_2(IUri *VAR_2)
{
    DWORD VAR_3;
    HRESULT VAR_4;

    VAR_4 = FUNC_1(VAR_2, &VAR_3);
    if(FUNC_0(VAR_4))
        return VAR_0;

    switch(VAR_3) {
    case 133:
    case 132:
    case 131:
    case 130:
    case 129:
    case 128:
        return VAR_1;
    }

    return VAR_0;
}
