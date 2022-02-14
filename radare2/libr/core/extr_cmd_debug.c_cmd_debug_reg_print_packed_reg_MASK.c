
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef float ut64 ;
struct TYPE_9__ {TYPE_1__* dbg; } ;
struct TYPE_8__ {int packed_size; } ;
struct TYPE_7__ {int reg; } ;
typedef TYPE_2__ RRegItem ;
typedef TYPE_3__ RCore ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*,void*,int) ;
 int FUNC_1 (int,float,int) ;
 int* VAR_2 ;
 int FUNC_2 () ;
 float FUNC_3 (int ,TYPE_2__*,int,int) ;

__attribute__((used)) static void FUNC_4(RCore *VAR_3, RRegItem *VAR_4, char VAR_5, char* VAR_6) {
 int VAR_7, VAR_8;
 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
  if (!VAR_5 || VAR_6[VAR_7]) {
   for (VAR_8 = 0; VAR_8 < VAR_4->packed_size / VAR_2[VAR_7]; VAR_8++) {
    ut64 VAR_9 = FUNC_3(VAR_3->dbg->reg, VAR_4, VAR_8, VAR_2[VAR_7]);
    if( VAR_7 > VAR_0-1) {
     if (VAR_2[VAR_7] == 64) {
      double VAR_10;
      FUNC_0 ((void*)&VAR_10, (void*)&VAR_9, 8);
      FUNC_1 (VAR_8, VAR_10, VAR_7);
     } else if (VAR_2[VAR_7] == 32) {
      float VAR_11;
      FUNC_0 ((void*)&VAR_11, (void*)&VAR_9, 4);
      FUNC_1 (VAR_8, VAR_11, VAR_7);
     }
    } else {
     FUNC_1 (VAR_8, VAR_9, VAR_7);
    }
   }
   FUNC_2 ();
  }
 }
}
