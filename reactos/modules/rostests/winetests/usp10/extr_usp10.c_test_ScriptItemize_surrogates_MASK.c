
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int WORD ;
typedef int WCHAR ;
struct TYPE_4__ {int eScript; } ;
struct TYPE_5__ {TYPE_1__ a; } ;
typedef TYPE_2__ SCRIPT_ITEM ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*,int,int,int *,int *,TYPE_2__*,int*) ;
 int FUNC_1 (int,int*) ;
 int FUNC_2 (int,char*,int) ;

__attribute__((used)) static void FUNC_3(void)
{
    HRESULT VAR_2;
    WCHAR VAR_3[2];
    WORD VAR_4;
    SCRIPT_ITEM VAR_5[2];
    int VAR_6;


    VAR_3[0] = 0xd800;
    VAR_2 = FUNC_0( VAR_3, 1, 2, ((void*)0), ((void*)0), VAR_5, &VAR_6 );
    FUNC_2( VAR_2 == VAR_1, "got %08x\n", VAR_2 );
    FUNC_2( VAR_6 == 1, "got %d\n", VAR_6 );
    FUNC_2( VAR_5[0].a.eScript != VAR_0, "got script %x\n", VAR_5[0].a.eScript );
    VAR_4 = VAR_5[0].a.eScript;


    FUNC_1( 0x01ffff, VAR_3 );
    VAR_2 = FUNC_0( VAR_3, 2, 2, ((void*)0), ((void*)0), VAR_5, &VAR_6 );
    FUNC_2( VAR_2 == VAR_1, "got %08x\n", VAR_2 );
    FUNC_2( VAR_6 == 1, "got %d\n", VAR_6 );
    FUNC_2( VAR_5[0].a.eScript == VAR_4, "got script %x\n", VAR_5[0].a.eScript );
}
