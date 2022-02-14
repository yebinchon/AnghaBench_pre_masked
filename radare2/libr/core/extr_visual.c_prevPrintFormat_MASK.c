
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int printidx; } ;
typedef TYPE_1__ RCore ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t FUNC_0 (int ) ;





 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int * VAR_10 ;
 int * VAR_11 ;
 int * VAR_12 ;
 int * VAR_13 ;
 int * VAR_14 ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_4(RCore *VAR_15) {
 switch (VAR_15->printidx) {
 case 128:
  FUNC_2 (VAR_15, --VAR_9);
  VAR_14[0] = VAR_13[FUNC_0(VAR_9) % VAR_3];
  break;
 case 129:
  FUNC_1 (VAR_15, --VAR_8);
  VAR_14[1] = FUNC_3 (VAR_15);
  break;
 case 131:
  FUNC_1 (VAR_15, --VAR_8);
  VAR_14[1] = FUNC_3 (VAR_15);
  VAR_4--;
  VAR_7 = FUNC_0 (VAR_4) % VAR_0;
  VAR_14[2] = VAR_10[VAR_7];
  break;
 case 130:
  VAR_5--;
  VAR_7 = FUNC_0 (VAR_5) % VAR_1;
  VAR_14[3] = VAR_11[VAR_7];
  break;
 case 132:
  VAR_6--;
  VAR_7 = FUNC_0 (VAR_6) % VAR_2;
  VAR_14[4] = VAR_12[VAR_7];
  break;
 }
}
