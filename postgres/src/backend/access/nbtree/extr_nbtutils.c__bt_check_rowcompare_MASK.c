
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ int32 ;
typedef int TupleDesc ;
struct TYPE_3__ {int sk_attno; int sk_flags; int sk_strategy; int sk_argument; int sk_collation; int sk_func; } ;
typedef TYPE_1__* ScanKey ;
typedef int ScanDirection ;
typedef int IndexTuple ;
typedef int Datum ;


 int FUNC_0 (int) ;




 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int *,int ,int ,int ) ;
 int FUNC_4 (scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,char*,int) ;
 int FUNC_8 (int ,int,int ,int*) ;

__attribute__((used)) static bool
FUNC_9(ScanKey VAR_8, IndexTuple VAR_9, int VAR_10,
      TupleDesc VAR_11, ScanDirection VAR_12, bool *VAR_13)
{
 ScanKey VAR_14 = (ScanKey) FUNC_2(VAR_8->sk_argument);
 int32 VAR_15 = 0;
 bool VAR_16;


 FUNC_0(VAR_14->sk_attno == VAR_8->sk_attno);


 for (;;)
 {
  Datum VAR_17;
  bool VAR_18;

  FUNC_0(VAR_14->sk_flags & VAR_7);

  if (VAR_14->sk_attno > VAR_10)
  {






   FUNC_0(FUNC_6(VAR_12));
   VAR_15 = 0;
   if (VAR_14->sk_flags & VAR_6)
    break;
   VAR_14++;
   continue;
  }

  VAR_17 = FUNC_8(VAR_9,
         VAR_14->sk_attno,
         VAR_11,
         &VAR_18);

  if (VAR_18)
  {
   if (VAR_14->sk_flags & VAR_2)
   {
    if ((VAR_14->sk_flags & (VAR_4 | VAR_3)) &&
     FUNC_5(VAR_12))
     *VAR_13 = 0;
   }
   else
   {
    if ((VAR_14->sk_flags & (VAR_4 | VAR_3)) &&
     FUNC_6(VAR_12))
     *VAR_13 = 0;
   }




   return 0;
  }

  if (VAR_14->sk_flags & VAR_5)
  {






   if (VAR_14 != (ScanKey) FUNC_2(VAR_8->sk_argument))
    VAR_14--;
   if ((VAR_14->sk_flags & VAR_4) &&
    FUNC_6(VAR_12))
    *VAR_13 = 0;
   else if ((VAR_14->sk_flags & VAR_3) &&
      FUNC_5(VAR_12))
    *VAR_13 = 0;
   return 0;
  }


  VAR_15 = FUNC_1(FUNC_3(&VAR_14->sk_func,
             VAR_14->sk_collation,
             VAR_17,
             VAR_14->sk_argument));

  if (VAR_14->sk_flags & VAR_1)
   FUNC_4(VAR_15);


  if (VAR_15 != 0)
   break;

  if (VAR_14->sk_flags & VAR_6)
   break;
  VAR_14++;
 }






 switch (VAR_14->sk_strategy)
 {

  case 128:
   VAR_16 = (VAR_15 < 0);
   break;
  case 129:
   VAR_16 = (VAR_15 <= 0);
   break;
  case 131:
   VAR_16 = (VAR_15 >= 0);
   break;
  case 130:
   VAR_16 = (VAR_15 > 0);
   break;
  default:
   FUNC_7(VAR_0, "unrecognized RowCompareType: %d",
     (int) VAR_14->sk_strategy);
   VAR_16 = 0;
   break;
 }

 if (!VAR_16)
 {






  if ((VAR_14->sk_flags & VAR_4) &&
   FUNC_6(VAR_12))
   *VAR_13 = 0;
  else if ((VAR_14->sk_flags & VAR_3) &&
     FUNC_5(VAR_12))
   *VAR_13 = 0;
 }

 return VAR_16;
}
