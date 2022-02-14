
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ dwItemSpec; int hdr; int dwDrawStage; } ;
struct TYPE_5__ {TYPE_1__ nmcd; scalar_t__ iSubItem; } ;
typedef TYPE_2__ NMLVCUSTOMDRAW ;
typedef int LISTVIEW_INFO ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int const*,int ,int *) ;

__attribute__((used)) static inline DWORD FUNC_1 (const LISTVIEW_INFO *VAR_3, DWORD VAR_4, NMLVCUSTOMDRAW *VAR_5)
{
    BOOL VAR_6 = (VAR_5->nmcd.dwItemSpec != 0);
    DWORD VAR_7;

    VAR_5->nmcd.dwDrawStage = VAR_4;
    if (VAR_6) VAR_5->nmcd.dwDrawStage |= VAR_0;
    if (VAR_5->iSubItem) VAR_5->nmcd.dwDrawStage |= VAR_1;
    if (VAR_6) VAR_5->nmcd.dwItemSpec--;
    VAR_7 = FUNC_0(VAR_3, VAR_2, &VAR_5->nmcd.hdr);
    if (VAR_6) VAR_5->nmcd.dwItemSpec++;
    return VAR_7;
}
