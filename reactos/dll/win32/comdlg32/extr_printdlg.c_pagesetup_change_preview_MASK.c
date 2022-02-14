
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int right; int left; int bottom; int top; } ;
struct TYPE_9__ {int hDlg; TYPE_2__ rtDrawRect; } ;
typedef TYPE_1__ pagesetup_data ;
struct TYPE_11__ {int y; int x; } ;
typedef TYPE_2__ RECT ;
typedef int LONG ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,TYPE_2__*,int ) ;
 int FUNC_2 (int ,int,int,int const,int const,int ) ;
 int FUNC_3 (char*,int ,int,int,int,int) ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (TYPE_1__ const*) ;
 TYPE_4__* FUNC_5 (TYPE_1__ const*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_7(const pagesetup_data *VAR_6)
{
    LONG VAR_7, VAR_8, VAR_9, VAR_10;
    RECT VAR_11;
    const int VAR_12 = 4;

    if(FUNC_4(VAR_6) == VAR_0)
    {
        VAR_7 = VAR_6->rtDrawRect.right - VAR_6->rtDrawRect.left;
        VAR_8 = FUNC_5(VAR_6)->y * VAR_7 / FUNC_5(VAR_6)->x;
    }
    else
    {
        VAR_8 = VAR_6->rtDrawRect.bottom - VAR_6->rtDrawRect.top;
        VAR_7 = FUNC_5(VAR_6)->x * VAR_8 / FUNC_5(VAR_6)->y;
    }
    VAR_9 = (VAR_6->rtDrawRect.right + VAR_6->rtDrawRect.left - VAR_7) / 2;
    VAR_10 = (VAR_6->rtDrawRect.bottom + VAR_6->rtDrawRect.top - VAR_8) / 2;
    FUNC_3("draw rect %s x=%d, y=%d, w=%d, h=%d\n",
          FUNC_6(&VAR_6->rtDrawRect), VAR_9, VAR_10, VAR_7, VAR_8);

    FUNC_2(FUNC_0(VAR_6->hDlg, VAR_4), VAR_9 + VAR_7, VAR_10 + VAR_12, VAR_12, VAR_8, VAR_1);
    FUNC_2(FUNC_0(VAR_6->hDlg, VAR_5), VAR_9 + VAR_12, VAR_10 + VAR_8, VAR_7, VAR_12, VAR_1);
    FUNC_2(FUNC_0(VAR_6->hDlg, VAR_3), VAR_9, VAR_10, VAR_7, VAR_8, VAR_1);

    VAR_11 = VAR_6->rtDrawRect;
    VAR_11.right += VAR_12;
    VAR_11.bottom += VAR_12;
    FUNC_1(VAR_6->hDlg, &VAR_11, VAR_2);
}
