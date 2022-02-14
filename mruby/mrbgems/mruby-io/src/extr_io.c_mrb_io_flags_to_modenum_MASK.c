
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;

 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static int
FUNC_0(mrb_state *VAR_11, int VAR_12)
{
  int VAR_13 = 0;

  switch(VAR_12 & (130|128|129)) {
    case 130:
      VAR_13 = VAR_7;
      break;
    case 128:
      VAR_13 = VAR_10;
      break;
    case 129:
      VAR_13 = VAR_8;
      break;
  }

  if (VAR_12 & VAR_0) {
    VAR_13 |= VAR_4;
  }
  if (VAR_12 & VAR_3) {
    VAR_13 |= VAR_9;
  }
  if (VAR_12 & VAR_2) {
    VAR_13 |= VAR_6;
  }






  return VAR_13;
}
