
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ time_t ;
struct timeval {int dummy; } ;
typedef int fd_set ;
struct TYPE_5__ {int sock; } ;
typedef TYPE_1__ Port ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_1__* FUNC_3 (scalar_t__) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (struct timeval*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_6 (scalar_t__,int *) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__* VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int FUNC_7 () ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_8 (int *) ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ FUNC_9 () ;
 scalar_t__ VAR_22 ;
 int FUNC_10 () ;
 int VAR_23 ;
 int VAR_24 ;
 scalar_t__ VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 scalar_t__ VAR_30 ;
 scalar_t__ FUNC_11 () ;
 scalar_t__ FUNC_12 () ;
 scalar_t__ FUNC_13 () ;
 scalar_t__ FUNC_14 () ;
 scalar_t__ VAR_31 ;
 int FUNC_15 (int ) ;
 scalar_t__ VAR_32 ;
 scalar_t__ FUNC_16 () ;
 int FUNC_17 (int ) ;
 int FUNC_18 () ;
 int FUNC_19 () ;
 int VAR_33 ;
 scalar_t__ VAR_34 ;
 scalar_t__ VAR_35 ;
 int VAR_36 ;
 int FUNC_20 (int ,int ) ;
 int FUNC_21 () ;
 int FUNC_22 (char*) ;
 scalar_t__ VAR_37 ;
 int FUNC_23 (int *) ;
 int FUNC_24 (scalar_t__,int ) ;
 int FUNC_25 () ;
 int FUNC_26 (char*,char*,int) ;
 int FUNC_27 (long) ;
 scalar_t__ FUNC_28 () ;
 scalar_t__ FUNC_29 () ;
 scalar_t__ VAR_38 ;
 scalar_t__ FUNC_30 () ;
 int FUNC_31 (int,int *,int *,int *,struct timeval*) ;
 int VAR_39 ;
 scalar_t__ FUNC_32 (int *) ;

__attribute__((used)) static int
FUNC_33(void)
{
 fd_set VAR_40;
 int VAR_41;
 time_t VAR_42,
    VAR_43;

 VAR_42 = VAR_43 = FUNC_32(((void*)0));

 VAR_41 = FUNC_23(&VAR_40);

 for (;;)
 {
  fd_set VAR_44;
  int VAR_45;
  time_t VAR_46;
  FUNC_26((char *) &VAR_44, (char *) &VAR_40, sizeof(fd_set));

  if (VAR_38 == VAR_20)
  {
   FUNC_8(&VAR_33);

   FUNC_27(100000L);
   VAR_45 = 0;

   FUNC_8(&VAR_3);
  }
  else
  {

   struct timeval VAR_47;


   FUNC_5(&VAR_47);

   FUNC_8(&VAR_33);

   VAR_45 = FUNC_31(VAR_41, &VAR_44, ((void*)0), ((void*)0), &VAR_47);

   FUNC_8(&VAR_3);
  }


  if (VAR_45 < 0)
  {
   if (VAR_37 != VAR_5 && VAR_37 != VAR_6)
   {
    FUNC_20(VAR_11,
      (FUNC_21(),
       FUNC_22("select() failed in postmaster: %m")));
    return VAR_28;
   }
  }





  if (VAR_45 > 0)
  {
   int VAR_48;

   for (VAR_48 = 0; VAR_48 < VAR_14; VAR_48++)
   {
    if (VAR_12[VAR_48] == VAR_16)
     break;
    if (FUNC_6(VAR_12[VAR_48], &VAR_44))
    {
     Port *VAR_49;

     VAR_49 = FUNC_3(VAR_12[VAR_48]);
     if (VAR_49)
     {
      FUNC_2(VAR_49);





      FUNC_15(VAR_49->sock);
      FUNC_4(VAR_49);
     }
    }
   }
  }


  if (VAR_32 == 0 && VAR_13)
   VAR_32 = FUNC_16();






  if (VAR_38 == VAR_19 || VAR_38 == VAR_18 ||
   VAR_38 == VAR_17)
  {
   if (VAR_4 == 0)
    VAR_4 = FUNC_13();
   if (VAR_2 == 0)
    VAR_2 = FUNC_12();
  }






  if (VAR_35 == 0 && VAR_38 == VAR_19)
   VAR_35 = FUNC_14();







  if (!VAR_10 && VAR_1 == 0 &&
   (FUNC_1() || VAR_39) &&
   VAR_38 == VAR_19)
  {
   VAR_1 = FUNC_11();
   if (VAR_1 != 0)
    VAR_39 = 0;
  }


  if (VAR_22 == 0 &&
   (VAR_38 == VAR_19 || VAR_38 == VAR_17))
   VAR_22 = FUNC_29();


  if (VAR_21 == 0 && FUNC_9())
   VAR_21 = FUNC_28();


  if (VAR_36)
  {
   VAR_36 = 0;
   if (VAR_1 != 0)
    FUNC_24(VAR_1, VAR_27);
  }


  if (VAR_34)
   FUNC_7();


  if (VAR_31 || VAR_8)
   FUNC_25();
  VAR_46 = FUNC_32(((void*)0));
  if ((VAR_30 >= VAR_9 || (VAR_7 && !VAR_29)) &&
   VAR_0 != 0 &&
   (VAR_46 - VAR_0) >= VAR_25)
  {

   FUNC_17(VAR_24);

   VAR_0 = 0;
  }
  if (VAR_46 - VAR_42 >= 1 * VAR_23)
  {
   if (!FUNC_10())
   {
    FUNC_20(VAR_11,
      (FUNC_22("performing immediate shutdown because data directory lock file is invalid")));
    FUNC_24(VAR_15, VAR_26);
   }
   VAR_42 = VAR_46;
  }






  if (VAR_46 - VAR_43 >= 58 * VAR_23)
  {
   FUNC_18();
   FUNC_19();
   VAR_43 = VAR_46;
  }
 }
}
