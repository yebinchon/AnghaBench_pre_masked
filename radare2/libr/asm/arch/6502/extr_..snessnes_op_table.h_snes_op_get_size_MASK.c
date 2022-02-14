
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int len; } ;
typedef TYPE_1__ snes_op_t ;


 int VAR_0 ;
 int VAR_1 ;



__attribute__((used)) static int FUNC_0(int VAR_2, int VAR_3, snes_op_t* VAR_4) {

 switch(VAR_4->len) {
  case 129: return VAR_2 ? VAR_0 : VAR_1;
  case 128: return VAR_3 ? VAR_0 : VAR_1;
  default: return VAR_4->len;
 }
}
