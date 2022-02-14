
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ WPARAM ;
struct TYPE_6__ {int dwStyle; } ;
struct TYPE_5__ {int styleNew; int styleOld; } ;
typedef TYPE_1__ STYLESTRUCT ;
typedef int INT ;
typedef TYPE_2__ HEADER_INFO ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,scalar_t__,int ,int ) ;

__attribute__((used)) static INT FUNC_1(HEADER_INFO *VAR_1, WPARAM VAR_2,
                               const STYLESTRUCT *VAR_3)
{
    FUNC_0("(styletype=%lx, styleOld=0x%08x, styleNew=0x%08x)\n",
          VAR_2, VAR_3->styleOld, VAR_3->styleNew);

    if (VAR_2 != VAR_0) return 0;

    VAR_1->dwStyle = VAR_3->styleNew;

    return 0;
}
