
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int long_u ;
typedef void* char_u ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int) ;
 void* VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (void*,void*) ;
 void** FUNC_2 (int) ;
 int FUNC_3 (int,void**,int,int*) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 (void**,int,int) ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 scalar_t__ FUNC_7 (int) ;
 int VAR_18 ;
 int FUNC_8 (void**) ;
 int FUNC_9 (void**,void**,size_t) ;
 void* VAR_19 ;
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 int FUNC_10 () ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_11 () ;
 int FUNC_12 (void**) ;
 int FUNC_13 (void**,int,long,int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (void**) ;
 void** FUNC_16 (void**,int) ;

int
FUNC_17()
{
    char_u *VAR_25 = ((void*)0);
    int VAR_26 = 150;
    int VAR_27;
    int VAR_28 = 0;
    int VAR_29;
    int VAR_30 = VAR_18;
    int VAR_31 = 0;

    VAR_18 = VAR_2;
    for (;;)
    {
 FUNC_4();
 FUNC_10();




 VAR_27 = (VAR_26 - 6 - VAR_28) / 3;
 if (VAR_25 == ((void*)0))
     VAR_25 = FUNC_2(VAR_26);
 else if (VAR_27 < 10)
 {


     VAR_26 += 100;
     VAR_25 = FUNC_16(VAR_25, VAR_26);
     VAR_27 = (VAR_26 - 6 - VAR_28) / 3;
 }
 if (VAR_25 == ((void*)0))
 {
     FUNC_5((long_u)VAR_26);
     return VAR_1;
 }



 VAR_29 = FUNC_13(VAR_25 + VAR_28, VAR_27, VAR_28 == 0 ? -1L : 100L, 0);
 if (VAR_29 > 0)
 {

     VAR_29 = FUNC_6(VAR_25 + VAR_28, VAR_29, VAR_2);
     VAR_28 += VAR_29;
     VAR_31 = 0;
 }
 else if (VAR_28 > 0)
     ++VAR_31;


 if ((VAR_29 = FUNC_3(1, VAR_25, VAR_26, &VAR_28)) < 0
        && (!VAR_23 || VAR_31 * 100L < (VAR_24 < 0 ? VAR_22 : VAR_24)))
     continue;

 if (VAR_29 == VAR_3)
 {
     if (VAR_20 != 0 && !VAR_21 && (VAR_15 & VAR_0) == 0)
     {

  FUNC_14(0);
  FUNC_11();
     }
     continue;
 }
 if (VAR_29 > 0)
     VAR_28 = VAR_29;
 if (VAR_28 == 0)
     continue;


 VAR_29 = VAR_25[0];
 if (VAR_29 == VAR_8)
 {
     VAR_29 = FUNC_1(VAR_25[1], VAR_25[2]);
     if (VAR_25[1] == VAR_4
      || VAR_29 == VAR_6
        )
     {
  if (VAR_25[1] == VAR_4)
      VAR_19 = VAR_25[2];
  VAR_28 -= 3;
  if (VAR_28 > 0)
      FUNC_9(VAR_25, VAR_25 + 3, (size_t)VAR_28);
  continue;
     }
     break;
 }
 break;
    }
    FUNC_15(VAR_25);

    VAR_18 = VAR_30;
    return VAR_29;
}
