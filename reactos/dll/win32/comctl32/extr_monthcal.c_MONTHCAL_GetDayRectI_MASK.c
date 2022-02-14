
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {size_t width_increment; size_t height_increment; scalar_t__ textHeight; TYPE_1__* calendars; } ;
struct TYPE_9__ {scalar_t__ top; scalar_t__ bottom; scalar_t__ left; scalar_t__ right; } ;
struct TYPE_8__ {scalar_t__ top; scalar_t__ left; } ;
struct TYPE_7__ {TYPE_2__ days; } ;
typedef TYPE_3__ RECT ;
typedef TYPE_4__ MONTHCAL_INFO ;
typedef size_t INT ;



__attribute__((used)) static inline void FUNC_0(const MONTHCAL_INFO *VAR_0, RECT *VAR_1,
  INT VAR_2, INT VAR_3, INT VAR_4)
{
  VAR_1->left = VAR_0->calendars[VAR_4].days.left + VAR_2 * VAR_0->width_increment;
  VAR_1->right = VAR_1->left + VAR_0->width_increment;
  VAR_1->top = VAR_0->calendars[VAR_4].days.top + VAR_3 * VAR_0->height_increment;
  VAR_1->bottom = VAR_1->top + VAR_0->textHeight;
}
