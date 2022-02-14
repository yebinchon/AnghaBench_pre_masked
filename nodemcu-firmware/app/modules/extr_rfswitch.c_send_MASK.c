
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int invertedSignal; int syncFactor; int zero; int one; } ;
typedef TYPE_1__ Protocol ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned long,int ,int ) ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (int ,int ,unsigned long,unsigned long) ;

void FUNC_2(unsigned long VAR_3, unsigned long VAR_4, unsigned long VAR_5, unsigned long VAR_6, unsigned long VAR_7, unsigned int VAR_8) {
  FUNC_0(VAR_6, VAR_1, VAR_0);
  Protocol VAR_9 = VAR_2[VAR_3-1];
  for (int VAR_10 = 0; VAR_10 < VAR_5; VAR_10++) {
    for (int VAR_11 = VAR_8-1; VAR_11 >= 0; VAR_11--) {
      if (VAR_7 & (1L << VAR_11))
        FUNC_1(VAR_9.one, VAR_9.invertedSignal, VAR_4, VAR_6);
      else
        FUNC_1(VAR_9.zero, VAR_9.invertedSignal, VAR_4, VAR_6);
    }
    FUNC_1(VAR_9.syncFactor, VAR_9.invertedSignal, VAR_4, VAR_6);
  }
}
