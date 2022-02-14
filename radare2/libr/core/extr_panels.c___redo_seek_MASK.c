
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int offset; int io; int panels; } ;
struct TYPE_7__ {int off; } ;
typedef int RPanel ;
typedef TYPE_1__ RIOUndos ;
typedef TYPE_2__ RCore ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,int *,int ) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 TYPE_1__* FUNC_4 (int ) ;

void FUNC_5(RCore *VAR_1) {
 RPanel *VAR_2 = FUNC_1 (VAR_1->panels);
 if (!FUNC_0 (VAR_2, VAR_0)) {
  return;
 }
 RIOUndos *VAR_3 = FUNC_4 (VAR_1->io);
 if (VAR_3) {
  FUNC_3 (VAR_1, VAR_3->off);
  FUNC_2 (VAR_1, VAR_2, VAR_1->offset);
 }
}
