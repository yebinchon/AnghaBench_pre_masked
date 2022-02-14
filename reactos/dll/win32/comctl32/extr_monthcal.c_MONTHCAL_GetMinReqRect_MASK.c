
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ top; scalar_t__ bottom; } ;
struct TYPE_17__ {int dwStyle; TYPE_2__ todayrect; TYPE_3__* calendars; } ;
struct TYPE_16__ {int top; int left; scalar_t__ bottom; } ;
struct TYPE_13__ {scalar_t__ bottom; } ;
struct TYPE_15__ {TYPE_1__ days; TYPE_4__ title; } ;
typedef TYPE_4__ RECT ;
typedef TYPE_5__ MONTHCAL_INFO ;
typedef int LRESULT ;


 int FUNC_0 (TYPE_4__*,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_4__*,int ,int ) ;
 int FUNC_2 (char*,TYPE_4__*) ;
 int VAR_1 ;
 TYPE_4__* FUNC_3 (TYPE_4__*) ;

__attribute__((used)) static LRESULT
FUNC_4(const MONTHCAL_INFO *VAR_2, RECT *VAR_3)
{
  FUNC_2("rect %p\n", VAR_3);

  if(!VAR_3) return VAR_0;

  *VAR_3 = VAR_2->calendars[0].title;
  VAR_3->bottom = VAR_2->calendars[0].days.bottom + VAR_2->todayrect.bottom -
                 VAR_2->todayrect.top;

  FUNC_0(VAR_3, VAR_2->dwStyle, VAR_0);


  FUNC_1(VAR_3, -VAR_3->left, -VAR_3->top);

  FUNC_2("%s\n", FUNC_3(VAR_3));

  return VAR_1;
}
