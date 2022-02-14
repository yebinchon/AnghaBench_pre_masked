
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ nUseCount; } ;
typedef TYPE_1__ WINE_MCIWAVE ;
typedef int MCIDEVICEID ;


 int FUNC_0 (char*,int ) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static WINE_MCIWAVE *FUNC_2(MCIDEVICEID VAR_0)
{
    WINE_MCIWAVE* VAR_1 = (WINE_MCIWAVE*)FUNC_1(VAR_0);

    if (VAR_1 == ((void*)0) || VAR_1->nUseCount == 0) {
 FUNC_0("Invalid wDevID=%u\n", VAR_0);
 return 0;
    }
    return VAR_1;
}
