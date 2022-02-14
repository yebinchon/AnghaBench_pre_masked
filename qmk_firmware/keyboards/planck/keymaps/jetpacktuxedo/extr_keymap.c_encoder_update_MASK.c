
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 float VAR_5 ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

void FUNC_6(bool VAR_9) {
  if (FUNC_3()) {
    if (FUNC_0(VAR_4)) {
      if (VAR_9) {
        VAR_5 += 0.5f;
      } else {
        VAR_5 -= 0.5f;
      }
    } else {
      if (VAR_9) {
        FUNC_2();
      } else {
        FUNC_1();
      }
    }
  } else if (VAR_6) {
    if (FUNC_0(VAR_4)) {
      if (VAR_9) {
        VAR_7++;
      } else {
        VAR_7--;
      }
    } else {
      if (VAR_9) {
        VAR_8+=1;
      } else {
        VAR_8-=1;
      }
    }
  } else {
    if (FUNC_0(VAR_4)) {
      if (VAR_9) {
        FUNC_4(VAR_2);
        FUNC_5(VAR_2);
      } else {
        FUNC_4(VAR_1);
        FUNC_5(VAR_1);
      }
    } else {
      if (VAR_9) {
        FUNC_4(VAR_0);
        FUNC_5(VAR_0);
      } else {
        FUNC_4(VAR_3);
        FUNC_5(VAR_3);
      }
    }
  }
}
