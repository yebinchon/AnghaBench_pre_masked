
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tsdn_t ;
typedef int extent_t ;
struct TYPE_2__ {size_t reg_size; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int) ;
 TYPE_1__* VAR_3 ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *,void*) ;
 int FUNC_4 (int *,int *,size_t,size_t,int) ;
 scalar_t__ FUNC_5 (int) ;
 size_t FUNC_6 (size_t) ;
 size_t FUNC_7 (size_t) ;
 scalar_t__ FUNC_8 (int) ;

bool
FUNC_9(tsdn_t *VAR_4, void *VAR_5, size_t VAR_6, size_t VAR_7,
    size_t VAR_8, bool VAR_9) {

 FUNC_1(VAR_8 == 0 || VAR_7 + VAR_8 <= VAR_0);

 if (FUNC_8(VAR_7 > VAR_0)) {
  return 1;
 }

 extent_t *VAR_10 = FUNC_3(VAR_4, VAR_5);
 size_t VAR_11 = FUNC_6(VAR_7);
 size_t VAR_12 = FUNC_6(VAR_7 + VAR_8);
 if (FUNC_5(VAR_6 <= VAR_2 && VAR_11 <= VAR_2)) {




  FUNC_1(VAR_3[FUNC_7(VAR_6)].reg_size ==
      VAR_6);
  if ((VAR_12 > VAR_2 || FUNC_7(VAR_12) !=
      FUNC_7(VAR_6)) && (VAR_7 > VAR_6 || VAR_12 <
      VAR_6)) {
   return 1;
  }

  FUNC_0(VAR_4, FUNC_2(VAR_10));
  return 0;
 } else if (VAR_6 >= VAR_1 && VAR_12 >= VAR_1) {
  return FUNC_4(VAR_4, VAR_10, VAR_11, VAR_12,
      VAR_9);
 }

 return 1;
}
