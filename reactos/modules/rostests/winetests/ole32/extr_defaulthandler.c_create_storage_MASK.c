
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IStorage ;
typedef int ILockBytes ;
typedef int HRESULT ;


 int FUNC_0 (int *,int ,int **) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *,int,int ,int **) ;
 int VAR_3 ;

__attribute__((used)) static HRESULT FUNC_4(IStorage **VAR_4)
{
    HRESULT VAR_5;
    ILockBytes *VAR_6;

    VAR_5 = FUNC_0(((void*)0), VAR_3, &VAR_6);
    if(FUNC_2(VAR_5))
    {
        VAR_5 = FUNC_3(VAR_6,
                  VAR_0 | VAR_2 | VAR_1, 0, VAR_4);
        FUNC_1(VAR_6);
    }
    return VAR_5;
}
