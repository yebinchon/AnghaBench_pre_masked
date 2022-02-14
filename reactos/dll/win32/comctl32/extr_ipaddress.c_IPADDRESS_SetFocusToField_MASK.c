
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* Part; } ;
struct TYPE_4__ {int EditHwnd; } ;
typedef TYPE_2__ IPADDRESS_INFO ;
typedef int INT ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static void FUNC_2 (const IPADDRESS_INFO *VAR_0, INT VAR_1)
{
    FUNC_1("(index=%d)\n", VAR_1);

    if (VAR_1 > 3 || VAR_1 < 0) VAR_1=0;

    FUNC_0 (VAR_0->Part[VAR_1].EditHwnd);
}
