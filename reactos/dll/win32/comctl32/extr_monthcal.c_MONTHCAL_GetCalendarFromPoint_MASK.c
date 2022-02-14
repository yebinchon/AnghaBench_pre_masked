
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {TYPE_3__* calendars; } ;
struct TYPE_12__ {int right; int bottom; int top; int left; } ;
struct TYPE_10__ {int right; int bottom; } ;
struct TYPE_9__ {int top; int left; } ;
struct TYPE_11__ {TYPE_2__ days; TYPE_1__ title; } ;
typedef TYPE_4__ RECT ;
typedef int POINT ;
typedef TYPE_5__ MONTHCAL_INFO ;
typedef size_t INT ;


 size_t FUNC_0 (TYPE_5__ const*) ;
 scalar_t__ FUNC_1 (TYPE_4__*,int const) ;

__attribute__((used)) static INT FUNC_2(const MONTHCAL_INFO *VAR_0, const POINT *VAR_1)
{
  RECT VAR_2;
  INT VAR_3;

  for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++)
  {

     VAR_2.left = VAR_0->calendars[VAR_3].title.left;
     VAR_2.top = VAR_0->calendars[VAR_3].title.top;
     VAR_2.bottom = VAR_0->calendars[VAR_3].days.bottom;
     VAR_2.right = VAR_0->calendars[VAR_3].days.right;

     if (FUNC_1(&VAR_2, *VAR_1)) return VAR_3;
  }

  return -1;
}
