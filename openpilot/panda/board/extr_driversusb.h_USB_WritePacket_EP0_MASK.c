
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef size_t uint16_t ;
struct TYPE_4__ {int DIEPEMPMSK; } ;
struct TYPE_3__ {int DOEPCTL; } ;


 size_t FUNC_0 (size_t,int) ;
 int VAR_0 ;
 int FUNC_1 (int *,size_t,int ) ;
 TYPE_2__* VAR_1 ;
 TYPE_1__* FUNC_2 (int ) ;
 int * VAR_2 ;
 size_t VAR_3 ;
 int FUNC_3 (int *,size_t) ;
 int FUNC_4 (char*) ;

void FUNC_5(uint8_t *VAR_4, uint16_t VAR_5) {





  uint16_t VAR_6 = FUNC_0(VAR_5, 0x40);
  FUNC_1(VAR_4, VAR_6, 0);

  if (VAR_6 < VAR_5) {
    VAR_2 = &VAR_4[VAR_6];
    VAR_3 = VAR_5 - VAR_6;
    VAR_1->DIEPEMPMSK |= 1;
  } else {
    FUNC_2(0)->DOEPCTL |= VAR_0;
  }
}
