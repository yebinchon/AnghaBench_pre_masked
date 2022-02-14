
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32 ;
typedef scalar_t__ int32 ;
typedef int WritebackContext ;
struct TYPE_2__ {scalar_t__ m_buf_alloc; int m_buf_written_clean; int m_maxwritten_clean; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 float VAR_2 ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 long VAR_7 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__*,scalar_t__*) ;
 int FUNC_3 (int,int,int *) ;
 int VAR_8 ;
 float VAR_9 ;
 int FUNC_4 (int ,char*,scalar_t__,long,...) ;

bool
FUNC_5(WritebackContext *VAR_10)
{

 int VAR_11;
 uint32 VAR_12;
 uint32 VAR_13;





 static bool VAR_14 = 0;
 static int VAR_15;
 static uint32 VAR_16;
 static int VAR_17;
 static uint32 VAR_18;


 static float VAR_19 = 0;
 static float VAR_20 = 10.0;


 float VAR_21 = 16;
 float VAR_22 = 120000.0;


 long VAR_23;
 int VAR_24;
 int VAR_25;
 float VAR_26;
 int VAR_27;
 int VAR_28;
 int VAR_29;


 int VAR_30;
 int VAR_31;
 int VAR_32;


 long VAR_33;
 uint32 VAR_34;





 VAR_11 = FUNC_2(&VAR_12, &VAR_13);


 VAR_3.m_buf_alloc += VAR_13;






 if (VAR_8 <= 0)
 {
  VAR_14 = 0;
  return 1;
 }
 if (VAR_14)
 {
  int32 VAR_35 = VAR_12 - VAR_16;

  VAR_23 = VAR_11 - VAR_15;
  VAR_23 += (long) VAR_35 * VAR_7;

  FUNC_0(VAR_23 >= 0);

  if ((int32) (VAR_18 - VAR_12) > 0)
  {

   VAR_24 = VAR_11 - VAR_17;






  }
  else if (VAR_18 == VAR_12 &&
     VAR_17 >= VAR_11)
  {

   VAR_24 = VAR_7 - (VAR_17 - VAR_11);






  }
  else
  {
   VAR_17 = VAR_11;
   VAR_18 = VAR_12;
   VAR_24 = VAR_7;
  }
 }
 else
 {
  VAR_23 = 0;
  VAR_17 = VAR_11;
  VAR_18 = VAR_12;
  VAR_24 = VAR_7;
 }


 VAR_15 = VAR_11;
 VAR_16 = VAR_12;
 VAR_14 = 1;







 if (VAR_23 > 0 && VAR_13 > 0)
 {
  VAR_26 = (float) VAR_23 / (float) VAR_13;
  VAR_20 += (VAR_26 - VAR_20) /
   VAR_21;
 }






 VAR_25 = VAR_7 - VAR_24;
 VAR_27 = (float) VAR_25 / VAR_20;






 if (VAR_19 <= (float) VAR_13)
  VAR_19 = VAR_13;
 else
  VAR_19 += ((float) VAR_13 - VAR_19) /
   VAR_21;


 VAR_28 = (int) (VAR_19 * VAR_9);
 if (VAR_28 == 0)
  VAR_19 = 0;
 VAR_29 = (int) (VAR_7 / (VAR_22 / VAR_2));

 if (VAR_28 < (VAR_29 + VAR_27))
 {




  VAR_28 = VAR_29 + VAR_27;
 }
 FUNC_1(VAR_4);

 VAR_30 = VAR_24;
 VAR_31 = 0;
 VAR_32 = VAR_27;


 while (VAR_30 > 0 && VAR_32 < VAR_28)
 {
  int VAR_36 = FUNC_3(VAR_17, 1,
              VAR_10);

  if (++VAR_17 >= VAR_7)
  {
   VAR_17 = 0;
   VAR_18++;
  }
  VAR_30--;

  if (VAR_36 & VAR_1)
  {
   VAR_32++;
   if (++VAR_31 >= VAR_8)
   {
    VAR_3.m_maxwritten_clean++;
    break;
   }
  }
  else if (VAR_36 & VAR_0)
   VAR_32++;
 }

 VAR_3.m_buf_written_clean += VAR_31;
 VAR_33 = VAR_24 - VAR_30;
 VAR_34 = VAR_32 - VAR_27;
 if (VAR_33 > 0 && VAR_34 > 0)
 {
  VAR_26 = (float) VAR_33 / (float) VAR_34;
  VAR_20 += (VAR_26 - VAR_20) /
   VAR_21;






 }


 return (VAR_24 == 0 && VAR_13 == 0);
}
