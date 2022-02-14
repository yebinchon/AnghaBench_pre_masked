
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef char WCHAR ;
struct TYPE_3__ {int * Data4; int Data3; int Data2; int Data1; } ;
typedef TYPE_1__ CLSID ;


 int FUNC_0 (char*,char const*,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1( WCHAR *VAR_0, const CLSID *VAR_1 )
{
    static const WCHAR VAR_2[] = {'{','%','0','8','X','-','%','0','4','X','-','%','0','4','X','-',
                                    '%','0','2','X','%','0','2','X','-','%','0','2','X','%','0','2','X',
                                    '%','0','2','X','%','0','2','X','%','0','2','X','%','0','2','X','}',0};

    FUNC_0( VAR_0, VAR_2, VAR_1->Data1, VAR_1->Data2, VAR_1->Data3,
              VAR_1->Data4[0], VAR_1->Data4[1], VAR_1->Data4[2], VAR_1->Data4[3],
              VAR_1->Data4[4], VAR_1->Data4[5], VAR_1->Data4[6], VAR_1->Data4[7] );

}
