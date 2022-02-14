
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IBackgroundCopyManager ;
typedef scalar_t__ HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int *,int ,int *,void**) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (char*) ;

__attribute__((used)) static HRESULT FUNC_4(void)
{
    HRESULT VAR_5;
    IBackgroundCopyManager *VAR_6 = ((void*)0);


    VAR_5 = FUNC_0(&VAR_1, ((void*)0), VAR_0,
                            &VAR_3, (void **) &VAR_6);

    if(VAR_5 == FUNC_1(VAR_2)) {
        FUNC_3("Needed Service is disabled\n");
        return VAR_5;
    }

    if (VAR_5 == VAR_4)
        FUNC_2(VAR_6);

    return VAR_5;
}
