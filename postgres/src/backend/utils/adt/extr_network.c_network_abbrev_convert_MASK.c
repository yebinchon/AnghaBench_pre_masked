
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64 ;
typedef int uint32 ;
struct TYPE_4__ {int input_count; int abbr_card; scalar_t__ estimating; } ;
typedef TYPE_1__ network_sortsupport_state ;
typedef int inet ;
struct TYPE_5__ {TYPE_1__* ssup_extra; } ;
typedef TYPE_2__* SortSupport ;
typedef int Datum ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int * FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int*,int ,int) ;
 int FUNC_11 (int) ;

__attribute__((used)) static Datum
FUNC_12(Datum VAR_6, SortSupport VAR_7)
{
 network_sortsupport_state *VAR_8 = VAR_7->ssup_extra;
 inet *VAR_9 = FUNC_2(VAR_6);
 Datum VAR_10,
    VAR_11,
    VAR_12,
    VAR_13;
 int VAR_14;

 FUNC_0(FUNC_8(VAR_9) == VAR_3 ||
     FUNC_8(VAR_9) == VAR_4);
 if (FUNC_8(VAR_9) == VAR_3)
 {
  uint32 VAR_15;

  FUNC_10(&VAR_15, FUNC_6(VAR_9), sizeof(uint32));



  VAR_11 = FUNC_11(VAR_15);





  VAR_10 = (Datum) 0;
 }
 else
 {
  FUNC_10(&VAR_11, FUNC_6(VAR_9), sizeof(Datum));


  VAR_11 = FUNC_1(VAR_11);


  VAR_10 = ((Datum) 1) << (VAR_5 * VAR_2 - 1);
 }
 VAR_14 = FUNC_9(VAR_9) - FUNC_7(VAR_9);
 FUNC_0(VAR_14 >= 0);

 VAR_14 %= VAR_5 * VAR_2;
 if (FUNC_7(VAR_9) == 0)
 {

  VAR_12 = ((Datum) 0) - 1;
  VAR_13 = 0;
 }
 else if (FUNC_7(VAR_9) < VAR_5 * VAR_2)
 {

  VAR_12 = (((Datum) 1) << VAR_14) - 1;
  VAR_13 = VAR_11 & ~VAR_12;
 }
 else
 {

  VAR_12 = 0;
  VAR_13 = VAR_11;
 }
 {





  VAR_10 |= VAR_13 >> 1;
 }

 VAR_8->input_count += 1;


 if (VAR_8->estimating)
 {
  uint32 VAR_16;




  VAR_16 = (uint32) VAR_10;


  FUNC_4(&VAR_8->abbr_card, FUNC_3(FUNC_5(VAR_16)));
 }

 return VAR_10;
}
