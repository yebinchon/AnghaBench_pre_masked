
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int VOID ;
typedef int UINT ;
struct TYPE_2__ {int hInstance; } ;
typedef char* LPWSTR ;
typedef int LPCWSTR ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int ,int ,char*,int ) ;
 int VAR_1 ;
 int FUNC_1 (char*,int ) ;
 scalar_t__ FUNC_2 (char*) ;

__attribute__((used)) static
VOID
FUNC_3(LPWSTR* VAR_2, UINT VAR_3, LPCWSTR VAR_4)
{
    FUNC_0(VAR_0.hInstance, VAR_3, *VAR_2, VAR_1);
    *VAR_2 += FUNC_2(*VAR_2) + 1;
    FUNC_1(*VAR_2, VAR_4);
    *VAR_2 += FUNC_2(*VAR_2) + 1;
    **VAR_2 = '\0';
}
