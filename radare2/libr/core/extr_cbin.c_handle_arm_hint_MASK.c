
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ut64 ;
struct TYPE_6__ {int bits; } ;
struct TYPE_5__ {int anal; int bin; } ;
typedef TYPE_1__ RCore ;
typedef TYPE_2__ RBinInfo ;


 int FUNC_0 (int ,int,int,int) ;
 int FUNC_1 (int ,int,int) ;

__attribute__((used)) static void FUNC_2(RCore *VAR_0, RBinInfo *VAR_1, ut64 VAR_2, ut64 VAR_3, int VAR_4, int VAR_5) {
 if (VAR_1->bits > 32) {
  return;
 }

 int VAR_6 = 0;
 ut64 VAR_7 = FUNC_0 (VAR_0->bin, VAR_2, VAR_3, VAR_5);
 if (VAR_2 & 1 || VAR_4 == 16) {
  VAR_6 = 16;
 } else if (VAR_1->bits == 16 && VAR_4 == 32) {
  VAR_6 = 32;
 } else if (!(VAR_2 & 1) && VAR_4 == 32) {
  VAR_6 = 32;
 }
 if (VAR_6) {
  FUNC_1 (VAR_0->anal, VAR_7, VAR_6);
 }
}
