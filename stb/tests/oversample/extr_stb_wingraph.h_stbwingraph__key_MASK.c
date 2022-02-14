
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int type; int key; int shift; int ctrl; int alt; scalar_t__ dy; scalar_t__ dx; scalar_t__ my; scalar_t__ mx; } ;
typedef TYPE_1__ stbwingraph_event ;
struct TYPE_6__ {scalar_t__ my; scalar_t__ mx; } ;
typedef TYPE_2__ stbwingraph__window ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_1(stbwingraph_event *VAR_3, int VAR_4, int VAR_5, stbwingraph__window *VAR_6)
{
   VAR_3->type = VAR_4;
   VAR_3->key = VAR_5;
   VAR_3->shift = (FUNC_0(VAR_2) < 0);
   VAR_3->ctrl = (FUNC_0(VAR_0) < 0);
   VAR_3->alt = (FUNC_0(VAR_1) < 0);
   if (VAR_6) {
      VAR_3->mx = VAR_6->mx;
      VAR_3->my = VAR_6->my;
   } else {
      VAR_3->mx = VAR_3->my = 0;
   }
   VAR_3->dx = VAR_3->dy = 0;
}
