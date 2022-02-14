
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {unsigned int IMR; unsigned int FTSR; } ;
struct TYPE_5__ {int CR2; int CR1; } ;
struct TYPE_4__ {int * EXTICR; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int VAR_6 ;
 TYPE_2__* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_1__* VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;

void FUNC_3(void) {

  VAR_7->CR1 = VAR_8;



  VAR_7->CR2 = VAR_9;

  FUNC_0(VAR_0);
  FUNC_0(VAR_1);



  FUNC_1(VAR_4, 0, VAR_5);
  FUNC_2(VAR_4, 0, VAR_6);


  VAR_10->EXTICR[2] = VAR_11;
  VAR_2->IMR |= (1U << 4);
  VAR_2->FTSR |= (1U << 4);
  FUNC_0(VAR_3);
}
