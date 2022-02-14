
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int Data1; int Data2; int Data3; int* Data4; } ;
typedef int LPWSTR ;
typedef TYPE_1__ GUID ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,char*,int,int ,int) ;
 int FUNC_1 (char*,char*,int,int,int,int,int,int,int,int,int,int,int) ;

__attribute__((used)) static void FUNC_2( const GUID *VAR_1, LPWSTR VAR_2 )
{
    char VAR_3[40];

    FUNC_1(VAR_3, "{%08X-%04X-%04X-%02X%02X-%02X%02X%02X%02X%02X%02X}",
           VAR_1->Data1, VAR_1->Data2, VAR_1->Data3,
           VAR_1->Data4[0], VAR_1->Data4[1], VAR_1->Data4[2], VAR_1->Data4[3],
           VAR_1->Data4[4], VAR_1->Data4[5], VAR_1->Data4[6], VAR_1->Data4[7] );
    FUNC_0( VAR_0, 0, VAR_3, -1, VAR_2, 40 );
}
