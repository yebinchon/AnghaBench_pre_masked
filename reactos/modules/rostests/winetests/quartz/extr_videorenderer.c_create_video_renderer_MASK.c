
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPVOID ;
typedef scalar_t__ HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int *,int ,int *,int *) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int * VAR_4 ;

__attribute__((used)) static int FUNC_1(void)
{
    HRESULT VAR_5;

    VAR_5 = FUNC_0(&VAR_1, ((void*)0), VAR_0,
                          &VAR_2, (LPVOID*)&VAR_4);
    return (VAR_5 == VAR_3 && VAR_4 != ((void*)0));
}
