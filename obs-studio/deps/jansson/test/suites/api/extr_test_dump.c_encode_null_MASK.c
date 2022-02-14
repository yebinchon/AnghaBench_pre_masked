
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int ,int *,int ) ;
 int FUNC_2 (int *,int ,int ) ;
 int * FUNC_3 (int *,int ) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_4()
{
    if(FUNC_3(((void*)0), VAR_0) != ((void*)0))
        FUNC_0("json_dumps didn't fail for NULL");

    if(FUNC_2(((void*)0), VAR_2, VAR_0) != -1)
        FUNC_0("json_dumpf didn't fail for NULL");



    if(FUNC_1(((void*)0), VAR_1, ((void*)0), VAR_0) != -1)
        FUNC_0("json_dump_callback didn't fail for NULL");
}
