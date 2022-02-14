
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ char_u ;
struct TYPE_2__ {scalar_t__ vc_type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 void* VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 void* VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_0 (long) ;
 int FUNC_1 () ;
 int FUNC_2 (scalar_t__*,int,int,scalar_t__**,int*) ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__,char*,int,int,int) ;
 int FUNC_5 (int,scalar_t__) ;
 int FUNC_6 (char*,scalar_t__) ;
 void* VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 void* VAR_22 ;
 TYPE_1__ VAR_23 ;
 int FUNC_7 (scalar_t__,scalar_t__*) ;
 int FUNC_8 (scalar_t__*,scalar_t__*,int) ;
 int FUNC_9 () ;
 long VAR_24 ;
 scalar_t__ VAR_25 ;
 int FUNC_10 (scalar_t__,scalar_t__*) ;
 int FUNC_11 (int*,scalar_t__*) ;
 int FUNC_12 () ;
 scalar_t__ FUNC_13 () ;
 scalar_t__ FUNC_14 (int) ;
 int FUNC_15 (scalar_t__*) ;
 scalar_t__ VAR_26 ;

int
FUNC_16(
    char_u *VAR_27,
    int VAR_28,
    long VAR_29,
    int VAR_30)
{


    int VAR_31;
    int VAR_32;

    static char_u VAR_33[20];
    static int VAR_34 = 0;







    if (VAR_34 > 0)
 goto theend;
    if (VAR_29 >= 0)
    {
 if (!FUNC_0(VAR_29))
     return 0;
    }
    else
    {
 FUNC_9();






 if (!FUNC_0(VAR_24))
 {
     FUNC_1();
 }
    }






    VAR_18 = VAR_4;
    while ((VAR_34 == 0 || FUNC_0(0L))
       && VAR_34 + 5 <= 20)
    {
 if (FUNC_14(VAR_30))
 {


     VAR_34 = 0;
     break;
 }
 {
     char_u VAR_35 = VAR_12;
     int VAR_36 = 0;

     VAR_32 = FUNC_11(&VAR_36, &VAR_35);
     if (FUNC_14(VAR_30))
     {


  VAR_34 = 0;
  break;
     }

     if (VAR_32 == VAR_2 && VAR_15)
     {



  VAR_22 = VAR_13;
     }




     {
  int VAR_37 = 1;
  int VAR_38 = VAR_4;

  VAR_33[VAR_34] = VAR_32;
  if (VAR_35 != VAR_12)
  {
      VAR_33[VAR_34 + 1] = 3;
      VAR_33[VAR_34 + 2] = VAR_35;
      VAR_37 += 2;
  }
  if (VAR_38)
  {
      char_u *VAR_39 = VAR_33 + VAR_34;
      char_u *VAR_40 = VAR_33 + 20;

      while (*VAR_39 && VAR_39 < VAR_40)
      {
   if (*VAR_39 == VAR_9)
   {
       ++VAR_39;
       FUNC_8(VAR_39 + 1, VAR_39, ((size_t)(VAR_40 - VAR_39)) - 1);
       *VAR_39 = 3;
       ++VAR_37;
   }
   ++VAR_39;
      }
  }





  if ((VAR_36 & VAR_11)
   && VAR_37 == 1
   && (VAR_33[VAR_34] & 0x80) == 0



     )
  {




      VAR_33[VAR_34] |= 0x80;

      VAR_36 &= ~VAR_11;
  }

  if (VAR_36 != 0)
  {

      FUNC_8(VAR_33 + VAR_34 + 3,
       VAR_33 + VAR_34, VAR_37);
      VAR_33[VAR_34++] = VAR_10;
      VAR_33[VAR_34++] = (char_u)VAR_8;
      VAR_33[VAR_34++] = VAR_36;
  }

  VAR_34 += VAR_37;





     }
 }
    }
theend:

    VAR_31 = 0;
    while (VAR_31 < VAR_28 && VAR_34 > 0)
    {
 VAR_27[VAR_31++] = VAR_33[0];
 FUNC_8(VAR_33, VAR_33 + 1, --VAR_34);
    }
    return VAR_31;




}
