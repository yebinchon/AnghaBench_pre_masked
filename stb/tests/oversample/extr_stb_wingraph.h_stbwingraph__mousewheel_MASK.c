
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int type; int shift; int ctrl; int alt; int key; scalar_t__ dy; scalar_t__ dx; int my; int mx; } ;
typedef TYPE_1__ stbwingraph_event ;
struct TYPE_6__ {int my; int mx; } ;
typedef TYPE_2__ stbwingraph__window ;
typedef int WPARAM ;
typedef int LPARAM ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_1(stbwingraph_event *VAR_3, int VAR_4, WPARAM VAR_5, LPARAM VAR_6, int VAR_7, void *VAR_8, stbwingraph__window *VAR_9)
{

   static int VAR_10 = 0;
   VAR_3->type = VAR_4;
   if (VAR_9) {
      VAR_3->mx = VAR_9->mx;
      VAR_3->my = VAR_9->my;
   }
   VAR_3->dx = VAR_3->dy = 0;
   VAR_3->shift = (VAR_5 & VAR_1) != 0;
   VAR_3->ctrl = (VAR_5 & VAR_0) != 0;
   VAR_3->alt = (FUNC_0(VAR_2) < 0);
   VAR_3->key = ((int) VAR_5 >> 16);
}
