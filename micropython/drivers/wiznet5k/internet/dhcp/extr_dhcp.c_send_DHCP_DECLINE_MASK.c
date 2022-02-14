
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_2__ {int* OPT; int flags; } ;


 void** VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void** VAR_4 ;
 int VAR_5 ;
 void** VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 () ;
 TYPE_1__* VAR_14 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int*,int ,int*,int ) ;

void FUNC_3(void)
{
 int VAR_15;
 uint8_t VAR_16[4];
 uint16_t VAR_17 = 0;

 FUNC_0();

   VAR_17 = 4;

 *((uint8_t*)(&VAR_14->flags)) = ((VAR_2 & 0xFF00)>> 8);
 *((uint8_t*)(&VAR_14->flags)+1) = (VAR_2 & 0x00FF);


 VAR_14->OPT[VAR_17++] = VAR_10;
 VAR_14->OPT[VAR_17++] = 0x01;
 VAR_14->OPT[VAR_17++] = VAR_1;

 VAR_14->OPT[VAR_17++] = VAR_9;
 VAR_14->OPT[VAR_17++] = 0x07;
 VAR_14->OPT[VAR_17++] = 0x01;
 VAR_14->OPT[VAR_17++] = VAR_0[0];
 VAR_14->OPT[VAR_17++] = VAR_0[1];
 VAR_14->OPT[VAR_17++] = VAR_0[2];
 VAR_14->OPT[VAR_17++] = VAR_0[3];
 VAR_14->OPT[VAR_17++] = VAR_0[4];
 VAR_14->OPT[VAR_17++] = VAR_0[5];

 VAR_14->OPT[VAR_17++] = VAR_11;
 VAR_14->OPT[VAR_17++] = 0x04;
 VAR_14->OPT[VAR_17++] = VAR_6[0];
 VAR_14->OPT[VAR_17++] = VAR_6[1];
 VAR_14->OPT[VAR_17++] = VAR_6[2];
 VAR_14->OPT[VAR_17++] = VAR_6[3];

 VAR_14->OPT[VAR_17++] = VAR_12;
 VAR_14->OPT[VAR_17++] = 0x04;
 VAR_14->OPT[VAR_17++] = VAR_4[0];
 VAR_14->OPT[VAR_17++] = VAR_4[1];
 VAR_14->OPT[VAR_17++] = VAR_4[2];
 VAR_14->OPT[VAR_17++] = VAR_4[3];

 VAR_14->OPT[VAR_17++] = VAR_13;

 for (VAR_15 = VAR_17; VAR_15 < VAR_7; VAR_15++) VAR_14->OPT[VAR_15] = 0;


 VAR_16[0] = 0xFF;
 VAR_16[1] = 0xFF;
 VAR_16[2] = 0xFF;
 VAR_16[3] = 0xFF;





 FUNC_2(VAR_5, (uint8_t *)VAR_14, VAR_8, VAR_16, VAR_3);
}
