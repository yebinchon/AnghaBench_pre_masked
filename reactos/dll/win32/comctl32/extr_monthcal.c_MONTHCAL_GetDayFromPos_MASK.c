
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_16__ {int width_increment; int height_increment; int firstDay; TYPE_2__* calendars; int hwndSelf; } ;
struct TYPE_15__ {scalar_t__ x; int y; } ;
struct TYPE_14__ {scalar_t__ right; } ;
struct TYPE_13__ {int wDay; } ;
struct TYPE_11__ {int left; int top; } ;
struct TYPE_12__ {TYPE_1__ days; TYPE_3__ month; } ;
typedef TYPE_3__ SYSTEMTIME ;
typedef TYPE_4__ RECT ;
typedef TYPE_5__ POINT ;
typedef TYPE_6__ MONTHCAL_INFO ;
typedef size_t INT ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_4__*) ;
 int FUNC_1 (TYPE_3__*,int ) ;

__attribute__((used)) static int FUNC_2(const MONTHCAL_INFO *VAR_1, POINT VAR_2, INT VAR_3)
{
  SYSTEMTIME VAR_4 = VAR_1->calendars[VAR_3].month;
  int VAR_5, VAR_6, VAR_7;
  RECT VAR_8;

  FUNC_0(VAR_1->hwndSelf, &VAR_8);


  if (VAR_2.x > VAR_8.right) VAR_2.x = VAR_8.right;

  VAR_6 = (VAR_2.x - VAR_1->calendars[VAR_3].days.left ) / VAR_1->width_increment;
  VAR_7 = (VAR_2.y - VAR_1->calendars[VAR_3].days.top ) / VAR_1->height_increment;

  VAR_4.wDay = 1;
  VAR_5 = (FUNC_1(&VAR_4, VAR_0) + 6 - VAR_1->firstDay) % 7;
  return VAR_6 + 7 * VAR_7 - VAR_5;
}
