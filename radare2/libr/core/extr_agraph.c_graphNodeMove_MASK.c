
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ is_dis; } ;
typedef int RCore ;
typedef TYPE_1__ RAGraph ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int,int) ;
 int FUNC_2 (int *,char*,int) ;

__attribute__((used)) static void FUNC_3(RAGraph *VAR_1, int VAR_2, int VAR_3) {
 int VAR_4 = (VAR_2 == 'k')? -1: 1;
 if (VAR_2 == 'H') {
  return;
 }
 if (VAR_2 == 'h' || VAR_2 == 'l') {

  if (FUNC_0 (VAR_1)) {
   VAR_0 = 0;
  } else {
   int VAR_5 = (VAR_2 == 'l')? 1: -1;
   FUNC_1 (VAR_1, VAR_3 * VAR_5, 0);
  }
  return;
 }
 RCore *VAR_6 = ((void*)0);

 if (FUNC_0 (VAR_1)) {
  VAR_0 += (VAR_4 * VAR_3);
 } else if (VAR_1->is_dis) {
  FUNC_2 (VAR_6, "so %d", (VAR_4 * 4) * VAR_3);
 } else {
  FUNC_1 (VAR_1, 0, VAR_4 * VAR_3);
 }
}
