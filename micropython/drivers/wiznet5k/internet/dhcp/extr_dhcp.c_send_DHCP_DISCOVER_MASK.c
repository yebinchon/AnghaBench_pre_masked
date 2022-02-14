
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef size_t uint16_t ;
struct TYPE_2__ {int* OPT; } ;


 void** VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int* VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 () ;
 TYPE_1__* VAR_16 ;
 int FUNC_1 (char*) ;
 int VAR_17 ;
 int FUNC_2 (int ,int*,int ,int*,int ) ;
 int VAR_18 ;

void FUNC_3(void)
{
 uint16_t VAR_19;
 uint8_t VAR_20[4];
 uint16_t VAR_21 = 0;

   FUNC_0();

   VAR_21 = 4;


 VAR_16->OPT[VAR_21++] = VAR_8;
 VAR_16->OPT[VAR_21++] = 0x01;
 VAR_16->OPT[VAR_21++] = VAR_1;


 VAR_16->OPT[VAR_21++] = VAR_7;
 VAR_16->OPT[VAR_21++] = 0x07;
 VAR_16->OPT[VAR_21++] = 0x01;
 VAR_16->OPT[VAR_21++] = VAR_0[0];
 VAR_16->OPT[VAR_21++] = VAR_0[1];
 VAR_16->OPT[VAR_21++] = VAR_0[2];
 VAR_16->OPT[VAR_21++] = VAR_0[3];
 VAR_16->OPT[VAR_21++] = VAR_0[4];
 VAR_16->OPT[VAR_21++] = VAR_0[5];


 VAR_16->OPT[VAR_21++] = VAR_15;
 VAR_16->OPT[VAR_21++] = 0;
 for(VAR_19 = 0 ; VAR_4[VAR_19] != 0; VAR_19++)
    VAR_16->OPT[VAR_21++] = VAR_4[VAR_19];
 VAR_16->OPT[VAR_21++] = VAR_0[3];
 VAR_16->OPT[VAR_21++] = VAR_0[4];
 VAR_16->OPT[VAR_21++] = VAR_0[5];
 VAR_16->OPT[VAR_21 - (VAR_19+3+1)] = VAR_19+3;

 VAR_16->OPT[VAR_21++] = VAR_9;
 VAR_16->OPT[VAR_21++] = 0x06;
 VAR_16->OPT[VAR_21++] = VAR_18;
 VAR_16->OPT[VAR_21++] = VAR_17;
 VAR_16->OPT[VAR_21++] = VAR_12;
 VAR_16->OPT[VAR_21++] = VAR_13;
 VAR_16->OPT[VAR_21++] = VAR_10;
 VAR_16->OPT[VAR_21++] = VAR_11;
 VAR_16->OPT[VAR_21++] = VAR_14;

 for (VAR_19 = VAR_21; VAR_19 < VAR_5; VAR_19++) VAR_16->OPT[VAR_19] = 0;


 VAR_20[0] = 255;
 VAR_20[1] = 255;
 VAR_20[2] = 255;
 VAR_20[3] = 255;





 FUNC_2(VAR_3, (uint8_t *)VAR_16, VAR_6, VAR_20, VAR_2);
}
