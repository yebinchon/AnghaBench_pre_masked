
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IPin ;
typedef int IMemInputPin ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,void**) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static void FUNC_3(IPin *VAR_1)
{
    IMemInputPin *VAR_2 = ((void*)0);

    FUNC_1(VAR_1, &VAR_0, (void **)&VAR_2);

    FUNC_2(VAR_2 == ((void*)0), "IMemInputPin found!\n");
    if (VAR_2)
        FUNC_0(VAR_2);

}
