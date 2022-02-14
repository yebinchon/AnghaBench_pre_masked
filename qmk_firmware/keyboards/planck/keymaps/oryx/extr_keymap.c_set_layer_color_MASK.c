
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ v; } ;
struct TYPE_10__ {TYPE_1__ hsv; } ;
struct TYPE_9__ {int v; int s; int h; } ;
struct TYPE_8__ {float r; float g; float b; } ;
typedef TYPE_2__ RGB ;
typedef TYPE_3__ HSV ;


 int VAR_0 ;
 float VAR_1 ;
 TYPE_2__ FUNC_0 (TYPE_3__) ;
 int *** VAR_2 ;
 int FUNC_1 (int *) ;
 TYPE_4__ VAR_3 ;
 int FUNC_2 (int,float,float,float) ;

void FUNC_3(int VAR_4) {
  for (int VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
    HSV VAR_6 = {
      .h = FUNC_1(&VAR_2[VAR_4][VAR_5][0]),
      .s = FUNC_1(&VAR_2[VAR_4][VAR_5][1]),
      .v = FUNC_1(&VAR_2[VAR_4][VAR_5][2]),
    };
    if (!VAR_6.h && !VAR_6.s && !VAR_6.v) {
        FUNC_2( VAR_5, 0, 0, 0 );
    } else {
        RGB VAR_7 = FUNC_0( VAR_6 );
        float VAR_8 = (float)VAR_3.hsv.v / VAR_1;
        FUNC_2( VAR_5, VAR_8 * VAR_7.r, VAR_8 * VAR_7.g, VAR_8 * VAR_7.b );
    }
  }
}
