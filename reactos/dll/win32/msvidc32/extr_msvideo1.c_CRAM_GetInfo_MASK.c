
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int dwSize; int szDescription; int szName; void* dwVersionICM; void* dwVersion; scalar_t__ dwFlags; int fccHandler; int fccType; } ;
struct TYPE_5__ {int dwMagic; } ;
typedef TYPE_1__ Msvideo1Context ;
typedef int LRESULT ;
typedef TYPE_2__ ICINFO ;
typedef int DWORD ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int VAR_5 ;

__attribute__((used)) static LRESULT FUNC_2( const Msvideo1Context *VAR_6, ICINFO *VAR_7, DWORD VAR_8 )
{
    if (!VAR_7) return sizeof(ICINFO);
    if (VAR_8 < sizeof(ICINFO)) return 0;

    VAR_7->dwSize = sizeof(ICINFO);
    VAR_7->fccType = VAR_1;
    VAR_7->fccHandler = VAR_6 ? VAR_6->dwMagic : VAR_0;
    VAR_7->dwFlags = 0;
    VAR_7->dwVersion = VAR_2;
    VAR_7->dwVersionICM = VAR_2;

    FUNC_1(VAR_5, VAR_4, VAR_7->szName, FUNC_0(VAR_7->szName));
    FUNC_1(VAR_5, VAR_3, VAR_7->szDescription, FUNC_0(VAR_7->szDescription));


    return sizeof(ICINFO);
}
