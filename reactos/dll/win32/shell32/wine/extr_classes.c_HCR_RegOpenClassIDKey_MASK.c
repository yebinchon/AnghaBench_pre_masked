
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int Data1; int Data2; int Data3; int* Data4; } ;
typedef TYPE_1__* REFIID ;
typedef int HKEY ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ,int ,int *) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,char*,int,int,int,int,int,int,int,int,int,int,int) ;

BOOL FUNC_3(REFIID VAR_2, HKEY *VAR_3)
{
 char VAR_4[50];
    FUNC_2( VAR_4, "CLSID\\{%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
                 VAR_2->Data1, VAR_2->Data2, VAR_2->Data3,
                 VAR_2->Data4[0], VAR_2->Data4[1], VAR_2->Data4[2], VAR_2->Data4[3],
                 VAR_2->Data4[4], VAR_2->Data4[5], VAR_2->Data4[6], VAR_2->Data4[7] );

  FUNC_1("%s\n",VAR_4 );

 return !FUNC_0(VAR_0, VAR_4, 0, VAR_1, VAR_3);
}
