
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int footer ;
struct TYPE_3__ {int RDTR; int RIR; int RDLR; } ;
typedef TYPE_1__ CAN_FIFOMailBox_TypeDef ;


 int VAR_0 ;
 int FUNC_0 (char*,int,char*,int) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*,int,unsigned char,int) ;
 int FUNC_3 (char*,char*,int) ;

int FUNC_4(char *VAR_1, CAN_FIFOMailBox_TypeDef *VAR_2) {
  char VAR_3[VAR_0];
  char VAR_4[] = {
    1,
    1,
    1,
    1,1,1,1,1,1,1,
    1,1,1,
  };

  int VAR_5 = 0;


  int VAR_6 = VAR_2->RDTR & 0xF;
  VAR_5 = FUNC_2(VAR_3, VAR_5, 0, 1);

  if ((VAR_2->RIR & 4) != 0) {

    VAR_5 = FUNC_2(VAR_3, VAR_5, VAR_2->RIR >> 21, 11);
    VAR_5 = FUNC_2(VAR_3, VAR_5, 3, 2);
    VAR_5 = FUNC_2(VAR_3, VAR_5, (VAR_2->RIR >> 3) & ((1U << 18) - 1U), 18);
    VAR_5 = FUNC_2(VAR_3, VAR_5, 0, 3);
  } else {

    VAR_5 = FUNC_2(VAR_3, VAR_5, VAR_2->RIR >> 21, 11);
    VAR_5 = FUNC_2(VAR_3, VAR_5, 0, 3);
  }

  VAR_5 = FUNC_2(VAR_3, VAR_5, VAR_6, 4);


  for (int VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
    unsigned char VAR_8 = ((unsigned char *)(&(VAR_2->RDLR)))[VAR_7];
    VAR_5 = FUNC_2(VAR_3, VAR_5, VAR_8, 8);
  }


  VAR_5 = FUNC_1(VAR_3, VAR_5);


  VAR_5 = FUNC_3(VAR_1, VAR_3, VAR_5);


  VAR_5 = FUNC_0(VAR_1, VAR_5, VAR_4, sizeof(VAR_4));
  return VAR_5;
}
