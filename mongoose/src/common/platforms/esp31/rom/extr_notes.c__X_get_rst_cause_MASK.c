
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int,int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_2(void) {
  int VAR_3;
  int VAR_4 = FUNC_1(VAR_2, 6, 0);
  if (VAR_4 == 5) {
    int VAR_5 = (VAR_2 >> 12) & 0xfff;
    if (VAR_5 != 1) {
      VAR_3 = (VAR_5 == 8 ? VAR_4 : 0);
    } else {
      VAR_3 = 20;
    }
  } else {
    VAR_3 = VAR_4;
  }
  FUNC_0(VAR_1, VAR_0);
  return VAR_3;
}
