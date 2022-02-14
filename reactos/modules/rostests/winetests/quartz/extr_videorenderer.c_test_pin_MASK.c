
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IPin ;
typedef int IMemInputPin ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int *,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,void**) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (int,char*) ;

__attribute__((used)) static void FUNC_5(IPin *VAR_3)
{
    IMemInputPin *VAR_4 = ((void*)0);

    FUNC_3(VAR_3, &VAR_1, (void **)&VAR_4);

    FUNC_4(VAR_4 != ((void*)0), "No IMemInputPin found!\n");
    if (VAR_4)
    {
        FUNC_4(FUNC_1(VAR_4) == VAR_2, "Receive can't block for pin!\n");
        FUNC_4(FUNC_0(VAR_4, ((void*)0), 0) == VAR_0, "NotifyAllocator likes a NULL pointer argument\n");
        FUNC_2(VAR_4);
    }

}
