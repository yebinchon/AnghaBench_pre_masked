
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IUnknown ;
typedef int HRESULT ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int *,int *,void**) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static BOOL FUNC_3(void)
{
    static BOOL VAR_5, VAR_6;

    if(!VAR_6) {
        IUnknown *VAR_7;
        HRESULT VAR_8 = FUNC_0(&VAR_1, VAR_0, ((void*)0), &VAR_3, (void**)&VAR_7);

        if(FUNC_2(VAR_8)) {
            VAR_5 = VAR_4;
            FUNC_1(VAR_7);
        }else {
            VAR_5 = VAR_2;
        }
        VAR_6 = VAR_4;
    }

    return VAR_5;
}
