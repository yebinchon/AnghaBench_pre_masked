
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int w_height; TYPE_1__* w_scrollbars; } ;
struct TYPE_3__ {scalar_t__ id; int size; } ;
typedef scalar_t__ HWND ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (scalar_t__,scalar_t__,int ,int ) ;
 TYPE_2__* VAR_6 ;
 int FUNC_1 () ;
 int VAR_7 ;

__attribute__((used)) static void
FUNC_2(
    HWND VAR_8,
    short VAR_9)
{

    int VAR_10;
    int VAR_11;
    HWND VAR_12;

    if (VAR_6->w_scrollbars[VAR_1].id != 0)
    {
 VAR_12 = VAR_6->w_scrollbars[VAR_1].id;
 VAR_11 = VAR_6->w_scrollbars[VAR_1].size;
    }
    else if (VAR_6->w_scrollbars[VAR_0].id != 0)
    {
 VAR_12 = VAR_6->w_scrollbars[VAR_0].id;
 VAR_11 = VAR_6->w_scrollbars[VAR_0].size;
    }
    else
 return;

    VAR_11 = VAR_6->w_height;
    if (VAR_7 == 0)
 FUNC_1();

    if (VAR_7 > 0
     && VAR_7 < (VAR_11 > 2 ? VAR_11 - 2 : 1))
    {
 for (VAR_10 = VAR_7; VAR_10 > 0; --VAR_10)
     FUNC_0(VAR_8, VAR_12, VAR_9 >= 0 ? VAR_3 : VAR_2, 0);
    }
    else
 FUNC_0(VAR_8, VAR_12, VAR_9 >= 0 ? VAR_5 : VAR_4, 0);
}
