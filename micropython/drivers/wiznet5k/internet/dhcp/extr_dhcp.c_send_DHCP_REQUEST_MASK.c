
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_2__ {int* OPT; void** ciaddr; int flags; } ;


 void** VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void** VAR_4 ;
 int VAR_5 ;
 void** VAR_6 ;
 int* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_0 () ;
 TYPE_1__* VAR_24 ;
 int VAR_25 ;
 int FUNC_1 (char*) ;
 int VAR_26 ;
 int FUNC_2 (int ,int*,int ,int*,int ) ;
 int VAR_27 ;
 int VAR_28 ;

void FUNC_3(void)
{
 int VAR_29;
 uint8_t VAR_30[4];
 uint16_t VAR_31 = 0;

   FUNC_0();

   if(VAR_19 == VAR_10 || VAR_19 == VAR_11)
   {
    *((uint8_t*)(&VAR_24->flags)) = ((VAR_1 & 0xFF00)>> 8);
    *((uint8_t*)(&VAR_24->flags)+1) = (VAR_1 & 0x00FF);
    VAR_24->ciaddr[0] = VAR_6[0];
    VAR_24->ciaddr[1] = VAR_6[1];
    VAR_24->ciaddr[2] = VAR_6[2];
    VAR_24->ciaddr[3] = VAR_6[3];
    VAR_30[0] = VAR_4[0];
    VAR_30[1] = VAR_4[1];
    VAR_30[2] = VAR_4[2];
    VAR_30[3] = VAR_4[3];
   }
   else
   {
    VAR_30[0] = 255;
    VAR_30[1] = 255;
    VAR_30[2] = 255;
    VAR_30[3] = 255;
   }

   VAR_31 = 4;


 VAR_24->OPT[VAR_31++] = VAR_13;
 VAR_24->OPT[VAR_31++] = 0x01;
 VAR_24->OPT[VAR_31++] = VAR_2;

 VAR_24->OPT[VAR_31++] = VAR_12;
 VAR_24->OPT[VAR_31++] = 0x07;
 VAR_24->OPT[VAR_31++] = 0x01;
 VAR_24->OPT[VAR_31++] = VAR_0[0];
 VAR_24->OPT[VAR_31++] = VAR_0[1];
 VAR_24->OPT[VAR_31++] = VAR_0[2];
 VAR_24->OPT[VAR_31++] = VAR_0[3];
 VAR_24->OPT[VAR_31++] = VAR_0[4];
 VAR_24->OPT[VAR_31++] = VAR_0[5];

   if(VAR_30[3] == 255)
   {
  VAR_24->OPT[VAR_31++] = VAR_15;
  VAR_24->OPT[VAR_31++] = 0x04;
  VAR_24->OPT[VAR_31++] = VAR_6[0];
  VAR_24->OPT[VAR_31++] = VAR_6[1];
  VAR_24->OPT[VAR_31++] = VAR_6[2];
  VAR_24->OPT[VAR_31++] = VAR_6[3];

  VAR_24->OPT[VAR_31++] = VAR_16;
  VAR_24->OPT[VAR_31++] = 0x04;
  VAR_24->OPT[VAR_31++] = VAR_4[0];
  VAR_24->OPT[VAR_31++] = VAR_4[1];
  VAR_24->OPT[VAR_31++] = VAR_4[2];
  VAR_24->OPT[VAR_31++] = VAR_4[3];
 }


 VAR_24->OPT[VAR_31++] = VAR_23;
 VAR_24->OPT[VAR_31++] = 0;
 for(VAR_29 = 0 ; VAR_7[VAR_29] != 0; VAR_29++)
    VAR_24->OPT[VAR_31++] = VAR_7[VAR_29];
 VAR_24->OPT[VAR_31++] = VAR_0[3];
 VAR_24->OPT[VAR_31++] = VAR_0[4];
 VAR_24->OPT[VAR_31++] = VAR_0[5];
 VAR_24->OPT[VAR_31 - (VAR_29+3+1)] = VAR_29+3;

 VAR_24->OPT[VAR_31++] = VAR_14;
 VAR_24->OPT[VAR_31++] = 0x08;
 VAR_24->OPT[VAR_31++] = VAR_28;
 VAR_24->OPT[VAR_31++] = VAR_26;
 VAR_24->OPT[VAR_31++] = VAR_20;
 VAR_24->OPT[VAR_31++] = VAR_21;
 VAR_24->OPT[VAR_31++] = VAR_17;
 VAR_24->OPT[VAR_31++] = VAR_18;
 VAR_24->OPT[VAR_31++] = VAR_25;
 VAR_24->OPT[VAR_31++] = VAR_27;
 VAR_24->OPT[VAR_31++] = VAR_22;

 for (VAR_29 = VAR_31; VAR_29 < VAR_8; VAR_29++) VAR_24->OPT[VAR_29] = 0;





 FUNC_2(VAR_5, (uint8_t *)VAR_24, VAR_9, VAR_30, VAR_3);

}
