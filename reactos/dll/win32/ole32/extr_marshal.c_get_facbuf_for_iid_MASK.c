
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int REFIID ;
typedef int LPVOID ;
typedef int IPSFactoryBuffer ;
typedef scalar_t__ HRESULT ;
typedef int CLSID ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int,int *,int *,int *) ;
 scalar_t__ FUNC_1 (int ,int *) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static inline HRESULT FUNC_2(REFIID VAR_4, IPSFactoryBuffer **VAR_5)
{
    HRESULT VAR_6;
    CLSID VAR_7;

    VAR_6 = FUNC_1(VAR_4, &VAR_7);
    if (VAR_6 != VAR_2)
        return VAR_6;
    return FUNC_0(&VAR_7, VAR_0 | VAR_3,
        ((void*)0), &VAR_1, (LPVOID*)VAR_5);
}
