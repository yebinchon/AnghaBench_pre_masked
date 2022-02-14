
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IPicture ;
typedef scalar_t__ HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *,int *,int ,void**) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int,char*,scalar_t__) ;
 int FUNC_4 (scalar_t__,int ) ;

__attribute__((used)) static void FUNC_5(void)
{
    IPicture *VAR_4;
    HRESULT VAR_5;

    VAR_5 = FUNC_2(((void*)0), &VAR_1, VAR_3, (void **)&VAR_4);
    FUNC_3(VAR_5 == VAR_2, "Failed to create a picture, hr %#x.\n", VAR_5);
    VAR_5 = FUNC_1(VAR_4, ((void*)0));
    FUNC_4(VAR_5, VAR_0);

    FUNC_0(VAR_4);
}
