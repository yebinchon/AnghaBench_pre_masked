
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ wnd; scalar_t__ behind; scalar_t__ id; } ;
typedef TYPE_2__ seamless_window ;
typedef scalar_t__ Window ;
struct TYPE_11__ {int screen; } ;
struct TYPE_13__ {TYPE_1__ xwin; int display; } ;
typedef int Status ;
typedef TYPE_3__ RDPCLIENT ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__*) ;
 int FUNC_2 (int ,int ,scalar_t__*,scalar_t__*,scalar_t__**,unsigned int*) ;
 int FUNC_3 (TYPE_3__*,scalar_t__,scalar_t__,int ) ;
 TYPE_2__* FUNC_4 (TYPE_3__*,scalar_t__) ;
 int FUNC_5 (TYPE_3__*,TYPE_2__*,scalar_t__) ;

__attribute__((used)) static void
FUNC_6(RDPCLIENT * VAR_0, seamless_window * VAR_1)
{
 Status VAR_2;
 Window VAR_3, VAR_4, *VAR_5;
 unsigned int VAR_6, VAR_7;
 seamless_window *VAR_8;

 VAR_2 = FUNC_2(VAR_0->display, FUNC_0(VAR_0->xwin.screen),
       &VAR_3, &VAR_4, &VAR_5, &VAR_6);
 if (!VAR_2 || !VAR_6)
  return;

 VAR_8 = ((void*)0);

 VAR_7 = 0;
 while (VAR_5[VAR_7] != VAR_1->wnd)
 {
  VAR_7++;
  if (VAR_7 >= VAR_6)
   goto end;
 }

 for (VAR_7++; VAR_7 < VAR_6; VAR_7++)
 {
  VAR_8 = FUNC_4(VAR_0, VAR_5[VAR_7]);
  if (VAR_8)
   break;
 }

 if (!VAR_8 && !VAR_1->behind)
  goto end;
 if (VAR_8 && (VAR_8->id == VAR_1->behind))
  goto end;

 if (VAR_8)
 {
  FUNC_3(VAR_0, VAR_1->id, VAR_8->id, 0);
  FUNC_5(VAR_0, VAR_1, VAR_8->id);
 }
 else
 {
  FUNC_3(VAR_0, VAR_1->id, 0, 0);
  FUNC_5(VAR_0, VAR_1, 0);
 }

      end:
 FUNC_1(VAR_5);
}
