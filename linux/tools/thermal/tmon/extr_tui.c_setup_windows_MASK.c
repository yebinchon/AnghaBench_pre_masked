
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nr_cooling_dev; int nr_tz_sensor; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 () ;
 scalar_t__ VAR_11 ;
 void* VAR_12 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int,scalar_t__) ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_3 (void*) ;
 TYPE_1__ VAR_16 ;
 int FUNC_4 () ;
 int FUNC_5 (int,scalar_t__) ;
 int FUNC_6 (void*,int ) ;
 int FUNC_7 (scalar_t__,scalar_t__) ;
 int * VAR_17 ;
 void* VAR_18 ;
 int VAR_19 ;
 int FUNC_8 (int ,char*) ;
 void* FUNC_9 (int ,int,scalar_t__,int,int ) ;
 int FUNC_10 (int ,char*) ;
 void* VAR_20 ;
 void* VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 void* VAR_24 ;
 int FUNC_11 (int ) ;
 int FUNC_12 (void*,int,int) ;

void FUNC_13(void)
{
 int VAR_25 = 1;

 if (VAR_23)
  return;

 FUNC_2(VAR_19, VAR_15, VAR_14);
 FUNC_5(VAR_15, VAR_14);

 VAR_21 = FUNC_9(VAR_19, VAR_6, VAR_14, 0, 0);
 VAR_25 += VAR_6;

 VAR_24 = FUNC_9(VAR_19, VAR_5, VAR_14, VAR_25, 0);
 VAR_25 += VAR_5;

 VAR_9 = FUNC_9(VAR_19, VAR_16.nr_cooling_dev + 3, VAR_14,
    VAR_25, 0);
 VAR_25 += VAR_16.nr_cooling_dev + 3;





 VAR_12 = FUNC_9(VAR_19, FUNC_0() + 5, VAR_14-50,
    VAR_1, VAR_0);

 VAR_20 = FUNC_9(VAR_19, VAR_16.nr_tz_sensor *
    VAR_4 + 3, VAR_14, VAR_25, 0);
 VAR_25 += VAR_16.nr_tz_sensor * VAR_4 + 3;
 VAR_8 = FUNC_9(VAR_19, 4, VAR_14, VAR_25, 0);

 FUNC_6(VAR_9, VAR_7);
 VAR_13 = VAR_14 - 18;
 VAR_18 = FUNC_9(VAR_19, 1, VAR_14, VAR_15-1, 0);

 FUNC_8(VAR_17[0], " Ctrl-c - Quit ");
 FUNC_8(VAR_17[1], " TAB - Tuning ");
 FUNC_12(VAR_18, 1, 30);





 VAR_10 = FUNC_3(VAR_9);
 if (!VAR_10)
  FUNC_10(VAR_2, "No data panel\n");
 else {
  if (VAR_12) {
   VAR_11 = FUNC_3(VAR_12);
   if (!VAR_11)
    FUNC_10(VAR_2, "No dialogue panel\n");
   else {

    FUNC_7(VAR_10, VAR_11);
    FUNC_7(VAR_11, VAR_10);
    VAR_22 = VAR_10;
   }
  } else
   FUNC_10(VAR_3, "no dialogue win, term too small\n");
 }
 FUNC_1();
 FUNC_11(VAR_19);
 FUNC_4();
}
