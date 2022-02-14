
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* Part; } ;
struct TYPE_4__ {int EditHwnd; } ;
typedef TYPE_2__ IPADDRESS_INFO ;
typedef int BOOL ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int VAR_1 ;

__attribute__((used)) static BOOL FUNC_2 (const IPADDRESS_INFO *VAR_2)
{
    int VAR_3;

    FUNC_1("\n");

    for (VAR_3 = 0; VAR_3 < 4; VAR_3++)
        if (FUNC_0 (VAR_2->Part[VAR_3].EditHwnd)) return VAR_0;

    return VAR_1;
}
