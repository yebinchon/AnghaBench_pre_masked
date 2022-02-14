
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int Self; TYPE_1__* Part; int Enabled; } ;
struct TYPE_4__ {int EditHwnd; } ;
typedef int LRESULT ;
typedef TYPE_2__ IPADDRESS_INFO ;
typedef int BOOL ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *,int ) ;

__attribute__((used)) static LRESULT FUNC_2 (IPADDRESS_INFO *VAR_1, BOOL VAR_2)
{
    int VAR_3;

    VAR_1->Enabled = VAR_2;

    for (VAR_3 = 0; VAR_3 < 4; VAR_3++)
        FUNC_0(VAR_1->Part[VAR_3].EditHwnd, VAR_2);

    FUNC_1(VAR_1->Self, ((void*)0), VAR_0);
    return 0;
}
