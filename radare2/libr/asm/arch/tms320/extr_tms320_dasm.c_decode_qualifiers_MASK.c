
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int* stream; size_t length; } ;
typedef TYPE_1__ tms320_dasm_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;

void FUNC_1(tms320_dasm_t * VAR_2)
{
 switch (VAR_2->stream[VAR_2->length]) {
 case 0x98:

  break;

 case 0x99:

  break;
 case 0x9a:

  break;

 case 0x9c:

  FUNC_0(VAR_2, VAR_1, 1);
  break;
 case 0x9d:

  FUNC_0(VAR_2, VAR_0, 1);
  break;
 }
}
