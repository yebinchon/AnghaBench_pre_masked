
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int v; int s; int h; } ;
struct TYPE_5__ {int b; int g; int r; } ;
typedef TYPE_1__ RGB ;
typedef TYPE_2__ HSV ;


 int VAR_0 ;
 TYPE_1__ FUNC_0 (TYPE_2__) ;
 int *** VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,int ,int ,int ) ;

void FUNC_3(int VAR_2) {
  for (int VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
    HSV VAR_4 = {
      .h = FUNC_1(&VAR_1[VAR_2][VAR_3][0]),
      .s = FUNC_1(&VAR_1[VAR_2][VAR_3][1]),
      .v = FUNC_1(&VAR_1[VAR_2][VAR_3][2]),
    };
    if (!VAR_4.h && !VAR_4.s && !VAR_4.v) {
        FUNC_2( VAR_3, 0, 0, 0 );
    } else {
        RGB VAR_5 = FUNC_0( VAR_4 );
        FUNC_2( VAR_3, VAR_5.r, VAR_5.g, VAR_5.b );
    }
  }
}
