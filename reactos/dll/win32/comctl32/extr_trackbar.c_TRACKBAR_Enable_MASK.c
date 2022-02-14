
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int rcThumb; int hwndSelf; int dwStyle; } ;
typedef TYPE_1__ TRACKBAR_INFO ;
typedef int LRESULT ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int ,int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static LRESULT
FUNC_1 (TRACKBAR_INFO *VAR_2, BOOL VAR_3)
{
    if (VAR_3)
        VAR_2->dwStyle &= ~VAR_1;
    else
        VAR_2->dwStyle |= VAR_1;

    FUNC_0(VAR_2->hwndSelf, &VAR_2->rcThumb, VAR_0);

    return 1;
}
