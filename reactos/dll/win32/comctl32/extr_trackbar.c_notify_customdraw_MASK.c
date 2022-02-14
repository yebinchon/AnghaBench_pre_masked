
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int idFrom; } ;
struct TYPE_8__ {int dwDrawStage; TYPE_1__ hdr; } ;
struct TYPE_7__ {int hwndNotify; } ;
typedef TYPE_2__ TRACKBAR_INFO ;
typedef TYPE_3__ NMCUSTOMDRAW ;
typedef int LPARAM ;


 int FUNC_0 (int ,int ,int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static inline int
FUNC_1 (const TRACKBAR_INFO *VAR_1, NMCUSTOMDRAW *VAR_2, int VAR_3)
{
    VAR_2->dwDrawStage = VAR_3;
    return FUNC_0 (VAR_1->hwndNotify, VAR_0,
           VAR_2->hdr.idFrom, (LPARAM)VAR_2);
}
