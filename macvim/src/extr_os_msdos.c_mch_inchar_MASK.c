
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int char_u ;
struct TYPE_2__ {scalar_t__ vc_type; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 void* VAR_3 ;
 long VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;

 int VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 scalar_t__ FUNC_0 (long) ;
 scalar_t__ VAR_10 ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int VAR_11 ;
 int VAR_12 ;
 void* VAR_13 ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (int*,int,int) ;
 void* VAR_14 ;
 int FUNC_6 () ;
 TYPE_1__ VAR_15 ;
 scalar_t__ FUNC_7 () ;
 int VAR_16 ;
 void* VAR_17 ;
 char VAR_18 ;
 char VAR_19 ;
 int FUNC_8 () ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 long VAR_22 ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 (void*) ;
 int FUNC_12 (int) ;
 scalar_t__ FUNC_13 () ;
 int FUNC_14 (int ) ;

int
FUNC_15(
    char_u *VAR_23,
    int VAR_24,
    long VAR_25,
    int VAR_26)
{
    int VAR_27 = 0;
    int VAR_28;
    int VAR_29;
    static int VAR_30 = 0;





    if (VAR_14)
    {
 VAR_14 = VAR_3;
 FUNC_14(VAR_0);
 FUNC_10();
 FUNC_8();
    }


    if (VAR_30)
    {
 *VAR_23 = VAR_30;
 VAR_30 = 0;
 return 1;
    }
    if (VAR_25 >= 0)
    {
 if (FUNC_0(VAR_25) == 0)
 {



     return 0;
 }
    }
    else
    {





 if (FUNC_0(VAR_22) == 0)
 {
     FUNC_1();
 }
    }
    FUNC_0(VAR_4);
    VAR_13 = VAR_3;
    {



 if (VAR_20 && !VAR_21)
 {
     while ((VAR_27 == 0 || FUNC_2(VAR_12)) && VAR_27 < VAR_24)
     {
  VAR_28 = FUNC_12(FUNC_2(VAR_11));
  if (VAR_28 == 0)
      VAR_28 = 3;
  else if (VAR_28 == 0x0300)
      VAR_28 = VAR_8;
  else if ((VAR_28 & 0xff) == 0
   || VAR_28 == 128
   || VAR_28 == 0x4e2b
   || VAR_28 == 0x4a2d
   || VAR_28 == 0x372a
   || ((VAR_28 & 0xff) == 0xe0 && VAR_28 != 0xe0))
  {
      if (VAR_28 == 128)
   VAR_28 = 3;
      else
   VAR_28 >>= 8;
      *VAR_23++ = 128;
      ++VAR_27;
  }

  if (VAR_27 < VAR_24)
  {
      *VAR_23++ = VAR_28;
      VAR_27++;







  }
  else
      VAR_30 = VAR_28;
     }
 }
 else
 {
     while ((VAR_27 == 0 || (VAR_21 ? FUNC_4() : FUNC_7()))
      && VAR_27 < VAR_24)
     {
  switch (VAR_28 = (VAR_21 ? FUNC_3() : FUNC_6()))
  {
      case 0:




   if (VAR_21)
       VAR_28 = FUNC_3();
   else
       VAR_28 = FUNC_6();
   VAR_29 = FUNC_12(VAR_28 << 8);
   if (VAR_29 == (VAR_28 << 8))
   {
       *VAR_23++ = 128;
       ++VAR_27;
   }
   else
       VAR_28 = VAR_29;
   break;
      case 128:
   *VAR_23++ = 128;
   ++VAR_27;
   VAR_28 = 3;
   break;
      case 3:
   VAR_13 = VAR_9;

      default:
   break;
  }
  if (VAR_27 < VAR_24)
  {
      *VAR_23++ = VAR_28;
      ++VAR_27;
  }
  else
      VAR_30 = VAR_28;
     }
 }
    }




    VAR_10 = 0;
    return VAR_27;
}
