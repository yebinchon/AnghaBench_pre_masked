
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_10__ {int cxHeader; } ;
struct TYPE_9__ {scalar_t__ uNumBands; int dwStyle; } ;
struct TYPE_8__ {int left; int top; int right; int bottom; } ;
typedef TYPE_1__ RECT ;
typedef TYPE_2__ REBAR_INFO ;
typedef TYPE_3__ REBAR_BAND ;
typedef int LRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_0 (TYPE_2__ const*,scalar_t__) ;

__attribute__((used)) static LRESULT
FUNC_1 (const REBAR_INFO *VAR_2, UINT VAR_3, RECT *VAR_4)
{
    REBAR_BAND *VAR_5;

    if (!VAR_4)
 return 0;
    if (VAR_3 >= VAR_2->uNumBands)
 return 0;

    VAR_5 = FUNC_0(VAR_2, VAR_3);






    if (VAR_2->dwStyle & VAR_1) {
 if (VAR_2->dwStyle & VAR_0) {
     VAR_4->left = 1;
     VAR_4->top = VAR_5->cxHeader + 4;
     VAR_4->right = 1;
     VAR_4->bottom = 0;
 }
 else {
     VAR_4->left = VAR_5->cxHeader + 4;
     VAR_4->top = 1;
     VAR_4->right = 0;
     VAR_4->bottom = 1;
 }
    }
    else {
 VAR_4->left = VAR_5->cxHeader;
    }
    return 0;
}
