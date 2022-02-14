
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int ProcessId; } ;
struct TYPE_4__ {int X; scalar_t__ Y; } ;
typedef scalar_t__ TCHAR ;
typedef scalar_t__ HANDLE ;
typedef int DWORD ;
typedef TYPE_1__ COORD ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,int*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_3 (int ,int ,scalar_t__*,int) ;
 scalar_t__ FUNC_4 (int ,int,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_5 (int) ;
 int VAR_12 ;
 int FUNC_6 (scalar_t__,int ) ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int FUNC_7 (int ,scalar_t__*,int ,TYPE_1__,int*) ;
 int FUNC_8 (scalar_t__*,scalar_t__*,int) ;
 int FUNC_9 (scalar_t__*) ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 scalar_t__* VAR_23 ;
 TYPE_2__* VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;

int FUNC_10(int VAR_27)
{
 DWORD VAR_28;
 TCHAR VAR_29;
 if ((VAR_10-VAR_25 < 17) && (VAR_10 > 17))
  VAR_25 = VAR_10-17;

 VAR_29 = FUNC_1(VAR_27);
 if (VAR_29 == VAR_6)
  return VAR_12;
 else if (VAR_29 == VAR_4)
 {

  DWORD VAR_30;
  COORD VAR_31;
  TCHAR VAR_32[100];

  VAR_31.X = 1; VAR_31.Y =VAR_11-1;
  if (FUNC_3(VAR_20, VAR_1, VAR_32, 100))
   FUNC_7(VAR_22, VAR_32, FUNC_9(VAR_32), VAR_31, &VAR_28);

  do {
   FUNC_2(VAR_21, &VAR_30);
   VAR_29 = FUNC_1(VAR_30);
  } while (VAR_29 != VAR_7 && VAR_29 != VAR_5);

  if (VAR_29 == VAR_7)
  {
   HANDLE VAR_33;
   VAR_30 = VAR_24[VAR_26+VAR_25].ProcessId;
   VAR_33 = FUNC_4(VAR_8, VAR_0, VAR_30);

   if (VAR_33)
   {
    if (!FUNC_6(VAR_33, 0))
    {
     if (FUNC_3(VAR_20, VAR_2, VAR_32, 80))
     {
      FUNC_7(VAR_22, VAR_23, FUNC_9(VAR_23), VAR_31, &VAR_28);
      FUNC_7(VAR_22, VAR_32, FUNC_9(VAR_32), VAR_31, &VAR_28);
     }
     FUNC_5(1000);
    }

    FUNC_0(VAR_33);
   }
   else
   {
    if (FUNC_3(VAR_20, VAR_3, VAR_32, 80))
    {
     FUNC_7(VAR_22, VAR_23, FUNC_9(VAR_23), VAR_31, &VAR_28);
     FUNC_8(VAR_32, VAR_32, VAR_30);
     FUNC_7(VAR_22, VAR_32, FUNC_9(VAR_32), VAR_31, &VAR_28);
    }
    FUNC_5(1000);
   }
  }

  VAR_19 = 0;
 }
 else if (VAR_29 == VAR_18)
 {
  if (VAR_26 > 0)
   VAR_26--;
  else if ((VAR_26 == 0) && (VAR_25 > 0))
   VAR_25--;
 }
 else if (VAR_29 == VAR_13)
 {
  if ((VAR_26 < VAR_9-1) && (VAR_26 < VAR_10-1))
   VAR_26++;
  else if ((VAR_26 == VAR_9-1) && (VAR_26+VAR_25 < VAR_10-1))
   VAR_25++;
 }
 else if (VAR_29 == VAR_17)
 {
  if (VAR_25>VAR_9-1)
   VAR_25-=VAR_9-1;
  else
  {
   VAR_25=0;
   VAR_26=0;
  }

 }
 else if (VAR_29 == VAR_16)
 {
  VAR_25+=VAR_9-1;
  if (VAR_25>VAR_10-VAR_9)
  {
   VAR_25=VAR_10-VAR_9;
   VAR_26=VAR_9-1;
  }


  if (VAR_10<=VAR_9)
  {
   VAR_25=0;
   VAR_26=(VAR_10%VAR_9)-1;
  }
 }
 else if (VAR_29 == VAR_15)
 {
  VAR_26=0;
  VAR_25=0;
 }
 else if (VAR_29 == VAR_14)
 {
  VAR_26=VAR_9-1;
  VAR_25=VAR_10-VAR_9;
  if (VAR_10<=VAR_9)
  {
   VAR_25=0;
   VAR_26=(VAR_10%VAR_9)-1;
  }
 }
 return VAR_0;
}
