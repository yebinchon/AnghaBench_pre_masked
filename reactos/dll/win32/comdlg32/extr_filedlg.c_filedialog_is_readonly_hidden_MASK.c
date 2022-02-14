
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int dwDlgProp; } ;
struct TYPE_7__ {TYPE_2__ DlgInfos; TYPE_1__* ofnInfos; } ;
struct TYPE_5__ {int Flags; } ;
typedef TYPE_3__ FileOpenDlgInfos ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static BOOL FUNC_0(const FileOpenDlgInfos *VAR_2)
{
    return (VAR_2->ofnInfos->Flags & VAR_1) || (VAR_2->DlgInfos.dwDlgProp & VAR_0);
}
