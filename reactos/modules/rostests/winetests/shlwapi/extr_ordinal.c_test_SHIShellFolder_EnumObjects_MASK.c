
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IShellFolder ;
typedef int IEnumIDList ;
typedef int HRESULT ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int **) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int,char*,...) ;
 int FUNC_4 (int *,int *,int ,int **) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void FUNC_6(void)
{
    IEnumIDList *VAR_2;
    HRESULT VAR_3;
    IShellFolder *VAR_4;

    if(!&FUNC_4){
        FUNC_5("SHIShellFolder_EnumObjects not available\n");
        return;
    }

    if(0){

        FUNC_4(((void*)0), ((void*)0), 0, ((void*)0));
    }


    VAR_2 = (IEnumIDList*)0xdeadbeef;
    VAR_3 = FUNC_4(&VAR_1, ((void*)0), 0, &VAR_2);
    FUNC_3(VAR_3 == VAR_0, "SHIShellFolder_EnumObjects failed: 0x%08x\n", VAR_3);
    FUNC_3(VAR_2 == (IEnumIDList*)0xcafebabe, "Didn't get expected enumerator location, instead: %p\n", VAR_2);


    VAR_3 = FUNC_2(&VAR_4);
    FUNC_3(VAR_3 == VAR_0, "SHGetDesktopFolder failed: 0x%08x\n", VAR_3);

    VAR_2 = ((void*)0);
    VAR_3 = FUNC_4(VAR_4, ((void*)0), 0, &VAR_2);
    FUNC_3(VAR_3 == VAR_0, "SHIShellFolder_EnumObjects failed: 0x%08x\n", VAR_3);
    FUNC_3(VAR_2 != ((void*)0), "Didn't get an enumerator\n");
    if(VAR_2)
        FUNC_0(VAR_2);

    FUNC_1(VAR_4);
}
