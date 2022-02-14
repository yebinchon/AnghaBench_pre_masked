
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int dwMagic; } ;
struct TYPE_5__ {int dwSize; int szDescription; int szName; void* dwVersionICM; void* dwVersion; scalar_t__ dwFlags; int fccHandler; int fccType; } ;
typedef int LRESULT ;
typedef TYPE_1__ ICINFO ;
typedef TYPE_2__ ICCVID_Info ;
typedef int DWORD ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ,int ,int ) ;

__attribute__((used)) static LRESULT FUNC_2( ICCVID_Info *VAR_6, ICINFO *VAR_7, DWORD VAR_8 )
{
    if (!VAR_7) return sizeof(ICINFO);
    if (VAR_8 < sizeof(ICINFO)) return 0;

    VAR_7->dwSize = sizeof(ICINFO);
    VAR_7->fccType = VAR_2;
    VAR_7->fccHandler = VAR_6 ? VAR_6->dwMagic : VAR_0;
    VAR_7->dwFlags = 0;
    VAR_7->dwVersion = VAR_3;
    VAR_7->dwVersionICM = VAR_3;

    FUNC_1(VAR_1, VAR_5, VAR_7->szName, FUNC_0(VAR_7->szName));
    FUNC_1(VAR_1, VAR_4, VAR_7->szDescription, FUNC_0(VAR_7->szDescription));


    return sizeof(ICINFO);
}
