
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int INT ;


 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (int *,int *,int ,int *) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3(void)
{
    INT VAR_0;

    if (!&FUNC_1)
    {
        FUNC_2("FindMRUData entry point not found\n");
        return;
    }


    VAR_0 = FUNC_1(((void*)0), ((void*)0), 0, ((void*)0));
    FUNC_0(VAR_0 == -1, "FindMRUData expected -1, got %d\n", VAR_0);
}
