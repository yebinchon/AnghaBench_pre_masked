
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT ;
typedef scalar_t__ HANDLE ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (char*,int,int ,int *,int ,int ,int *) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (char*,char*,int ,char*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_3 (scalar_t__,unsigned char*,int,int *,int *) ;

__attribute__((used)) static BOOL FUNC_4(char *VAR_6)
{
    UINT VAR_7;
    unsigned char VAR_8[26], VAR_9;
    DWORD VAR_10;
    HANDLE VAR_11;

    VAR_7 = FUNC_2(".", "msitest",0,VAR_6);
    if(!VAR_7)
        return VAR_7;
    VAR_11 = FUNC_1(VAR_6, VAR_3|VAR_4,
        0, ((void*)0), VAR_0, VAR_2, ((void*)0));
    if(VAR_11==VAR_5)
        return VAR_1;
    for(VAR_9=0; VAR_9<26; VAR_9++)
        VAR_8[VAR_9]=VAR_9+'a';
    VAR_7 = FUNC_3(VAR_11,VAR_8,sizeof VAR_8,&VAR_10,((void*)0));
    FUNC_0(VAR_11);
    return VAR_7;
}
