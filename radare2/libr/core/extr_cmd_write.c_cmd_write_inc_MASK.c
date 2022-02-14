
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int ut8 ;
typedef int ut64 ;
typedef int ut32 ;
typedef int ut16 ;
typedef int st64 ;
struct TYPE_5__ {scalar_t__ block; int offset; } ;
typedef TYPE_1__ RCore ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ,scalar_t__,int) ;

__attribute__((used)) static void FUNC_2(RCore *VAR_0, int VAR_1, st64 VAR_2) {
 ut64 *VAR_3;
 ut32 *VAR_4;
 ut16 *VAR_5;
 ut8 *VAR_6;
 switch (VAR_1) {
 case 1: VAR_6 = (ut8*)VAR_0->block; *VAR_6 += VAR_2; break;
 case 2: VAR_5 = (ut16*)VAR_0->block; *VAR_5 += VAR_2; break;
 case 4: VAR_4 = (ut32*)VAR_0->block; *VAR_4 += VAR_2; break;
 case 8: VAR_3 = (ut64*)VAR_0->block; *VAR_3 += VAR_2; break;
 }

 if (!FUNC_1 (VAR_0, VAR_0->offset, VAR_0->block, VAR_1)) {
  FUNC_0 (VAR_0);
 }
}
