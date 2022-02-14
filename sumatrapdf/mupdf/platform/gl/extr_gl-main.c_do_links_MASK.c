
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int fz_rect ;
typedef int fz_location ;
struct TYPE_7__ {struct TYPE_7__* next; int uri; int rect; } ;
typedef TYPE_1__ fz_link ;
struct TYPE_8__ {int y1; int x1; int y0; int x0; } ;
typedef TYPE_2__ fz_irect ;
struct TYPE_9__ {TYPE_1__* hot; scalar_t__ down; TYPE_1__* active; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ,float*,float*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ,int,float) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ,int ,int ) ;
 int FUNC_9 (int ,float,float) ;
 int FUNC_10 (int ) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 TYPE_4__ VAR_7 ;
 scalar_t__ FUNC_11 (TYPE_2__) ;
 int VAR_8 ;

__attribute__((used)) static void FUNC_12(fz_link *VAR_9)
{
 fz_rect VAR_10;
 fz_irect VAR_11;
 float VAR_12, VAR_13;

 FUNC_4(VAR_1, VAR_2);
 FUNC_7(VAR_0);

 while (VAR_9)
 {
  VAR_10 = VAR_9->rect;
  VAR_10 = FUNC_3(VAR_9->rect, VAR_8);
  VAR_11 = FUNC_0(VAR_10);

  if (FUNC_11(VAR_11))
  {
   VAR_6 = VAR_9->uri;
   VAR_7.hot = VAR_9;
   if (!VAR_7.active && VAR_7.down)
    VAR_7.active = VAR_9;
  }

  if (VAR_7.hot == VAR_9 || VAR_5)
  {
   if (VAR_7.active == VAR_9 && VAR_7.hot == VAR_9)
    FUNC_5(0, 0, 1, 0.4f);
   else if (VAR_7.hot == VAR_9)
    FUNC_5(0, 0, 1, 0.2f);
   else
    FUNC_5(0, 0, 1, 0.1f);
   FUNC_8(VAR_11.x0, VAR_11.y0, VAR_11.x1, VAR_11.y1);
  }

  if (VAR_7.active == VAR_9 && !VAR_7.down)
  {
   if (VAR_7.hot == VAR_9)
   {
    if (FUNC_1(VAR_3, VAR_9->uri))
     FUNC_10(VAR_9->uri);
    else
    {
     fz_location VAR_14 = FUNC_2(VAR_3, VAR_4, VAR_9->uri, &VAR_12, &VAR_13);
     FUNC_9(VAR_14, VAR_12, VAR_13);
    }
   }
  }

  VAR_9 = VAR_9->next;
 }

 FUNC_6(VAR_0);
}
