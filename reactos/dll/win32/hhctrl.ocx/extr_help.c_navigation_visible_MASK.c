
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int fsWinProperties; int fNotExpanded; } ;
struct TYPE_5__ {TYPE_1__ WinType; } ;
typedef TYPE_2__ HHInfo ;
typedef int BOOL ;


 int VAR_0 ;

__attribute__((used)) static inline BOOL FUNC_0(HHInfo *VAR_1)
{
    return ((VAR_1->WinType.fsWinProperties & VAR_0) && !VAR_1->WinType.fNotExpanded);
}
